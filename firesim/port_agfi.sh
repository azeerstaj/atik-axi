#!/bin/bash
# Exit immediately if a command exits with a non-zero status
set -e

# Configuration
SOURCE_REGION="eu-west-1"
TARGET_REGION="eu-central-1"
TARGET_ACCOUNT="465774455066"

if [ -z "$1" ]; then
    echo "Error: Missing AGFI argument."
    echo "Usage: ./port_agfi.sh <AGFI_ID>"
    exit 1
fi

AGFI_ID=$1

echo "================================================="
echo " Starting port process for $AGFI_ID"
echo " Source: $SOURCE_REGION | Target: $TARGET_REGION | Target Account: $TARGET_ACCOUNT"
echo "================================================="

# Step 1: Get the regional AFI ID and strictly sanitize it
echo "[1/3] Looking up regional AFI ID in $SOURCE_REGION..."
RAW_SOURCE_AFI=$(aws ec2 describe-fpga-images \
    --filters Name=fpga-image-global-id,Values=$AGFI_ID \
    --region $SOURCE_REGION \
    --query 'FpgaImages[0].FpgaImageId' \
    --output text)

# Force extraction of ONLY the valid ID (drops the stray "None")
SOURCE_AFI=$(echo "$RAW_SOURCE_AFI" | grep -o 'afi-[0-9a-f]*' | head -n 1)

if [ -z "$SOURCE_AFI" ]; then
    echo "❌ Error: Could not extract a valid AFI ID from the AWS response."
    exit 1
fi
echo "✅ Found Source AFI: $SOURCE_AFI"

# Step 2: Copy the FPGA image and sanitize the output
echo "[2/3] Copying image to $TARGET_REGION..."
RAW_NEW_AFI=$(aws ec2 copy-fpga-image \
    --source-region $SOURCE_REGION \
    --source-fpga-image-id "$SOURCE_AFI" \
    --name "Ported-$AGFI_ID" \
    --region $TARGET_REGION \
    --query 'FpgaImageId' \
    --output text)

# Force extraction of the new ID
NEW_AFI=$(echo "$RAW_NEW_AFI" | grep -o 'afi-[0-9a-f]*' | head -n 1)

if [ -z "$NEW_AFI" ]; then
    echo "❌ Error: Failed to copy image to $TARGET_REGION."
    exit 1
fi
echo "✅ Image copy initiated! New regional AFI: $NEW_AFI"

# Step 2.5: WAIT for the AFI to become available
echo "⏳ Waiting for the new AFI to become 'available' (this usually takes several minutes)..."
while true; do
    STATE=$(aws ec2 describe-fpga-images \
        --fpga-image-ids "$NEW_AFI" \
        --region $TARGET_REGION \
        --query 'FpgaImages[0].State.Code' \
        --output text)
        
    if [ "$STATE" == "available" ]; then
        echo "✅ AFI is now available!"
        break
    elif [ "$STATE" == "failed" ]; then
        echo "❌ Error: AFI copy failed in AWS."
        exit 1
    else
        echo "   Current state: $STATE. Checking again in 30 seconds..."
        sleep 30
    fi
done

# Step 3: Modify permissions
echo "[3/3] Sharing copied image with Account ID: $TARGET_ACCOUNT..."
aws ec2 modify-fpga-image-attribute \
    --fpga-image-id "$NEW_AFI" \
    --region $TARGET_REGION \
    --load-permission "Add=[{UserId=$TARGET_ACCOUNT}]" > /dev/null

echo "✅ Permissions updated successfully."
echo "================================================="
echo "🎉 SUCCESS: Porting process complete!"
echo "================================================="
echo ""
echo "👉 NEXT STEPS ON YOUR CENTRAL MACHINE ($TARGET_REGION):"
echo "Run this command to double check the status:"
echo "  aws ec2 describe-fpga-images --filters Name=fpga-image-global-id,Values=$AGFI_ID --region $TARGET_REGION --query 'FpgaImages[0].State.Code' --output text"
