# You must source chipyard's environment first!

cp ${CY_DIR}/build.sbt ${CY_DIR}/build_backup.sbt
cp cy_build.sbt ${CY_DIR}/build.sbt

cp firesim/* ${CY_DIR}/sims/firesim/deploy