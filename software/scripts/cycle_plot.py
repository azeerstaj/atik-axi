import sys
import matplotlib.pyplot as plt

def main():
    if len(sys.argv) < 2:
        print("Usage: python plot_results.py <logfile.txt>")
        sys.exit(1)

    log_file = sys.argv[1]

    sizes = []
    sw_cycles = []
    hw_cycles = []
    errors = []

    sw_out = 0.0
    hw_out = 0.0

    # Parse the log file
    with open(log_file, 'r') as f:
        for line in f:
            line = line.strip()
            
            if line.startswith("-> Software Accumulated Output:"):
                sw_out = float(line.split(":")[1].strip())
            
            elif line.startswith("-> Hardware Accumulated Output:"):
                hw_out = float(line.split(":")[1].strip())
                # Calculate absolute error
                errors.append(abs(sw_out - hw_out))
                
            elif line.startswith("CSV_DATA,"):
                parts = line.split(',')
                sizes.append(int(parts[1].strip()))
                sw_cycles.append(int(parts[2].strip()))
                hw_cycles.append(int(parts[3].strip()))

    if not sizes:
        print("No valid data found to plot. Check your log file format.")
        sys.exit(1)

    # --- Figure 1: Performance (Cycles vs Elements) ---
    plt.figure(figsize=(8, 6))
    plt.plot(sizes, sw_cycles, marker='o', linewidth=2, color='red', label='Rocket Core (Software)')
    plt.plot(sizes, hw_cycles, marker='s', linewidth=2, color='blue', label='BFloat16Accum (Hardware)')
    
    plt.title("Performance Comparison: Clock Cycles vs. Array Size")
    plt.xlabel("Array Size (n_elements)")
    plt.ylabel("Clock Cycles")
    
    # Using a log scale for Y-axis because the difference between SW and HW is massive
    plt.yscale('log')
    plt.xticks(sizes)
    plt.grid(True, which="both", linestyle="--", alpha=0.6)
    plt.legend()
    plt.tight_layout()
    plt.savefig('cycles_comparison.png', dpi=300)
    print("Saved performance plot as 'cycles_comparison.png'")

    # --- Figure 2: Error (Difference vs Elements) ---
    plt.figure(figsize=(8, 6))
    plt.plot(sizes, errors, marker='^', linewidth=2, color='darkorange', label='Absolute Error |SW - HW|')
    
    plt.title("Hardware Approximation Error vs. Array Size")
    plt.xlabel("Array Size (n_elements)")
    plt.ylabel("Absolute Error")
    
    plt.xticks(sizes)
    plt.grid(True, linestyle="--", alpha=0.6)
    plt.legend()
    plt.tight_layout()
    plt.savefig('error_scaling.png', dpi=300)
    print("Saved error plot as 'error_scaling.png'")

    # --- Figure 3: Hardware Performance (HW Cycles vs Elements) ---
    plt.clf()  # Clear the previous figure
    plt.plot(sizes, hw_cycles, marker='s', linewidth=2, color='blue', label='BFloat16Accum (Hardware)')
    
    plt.title("Hardware Performance: Clock Cycles vs. Array Size")
    plt.xlabel("Array Size ($n_{elements}$)")
    plt.ylabel("Clock Cycles")
    
    plt.xticks(sizes)
    plt.grid(True, linestyle="--", alpha=0.6)
    plt.legend()
    plt.tight_layout()
    plt.savefig('hw_performance.png', dpi=300)
    print("Saved hardware performance plot as 'hw_performance.png'")

if __name__ == "__main__":
    main()