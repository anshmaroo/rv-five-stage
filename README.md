# 5-Stage RISC-V Pipeline

a five-stage RISC-V pipeline written in Chisel

current features: 
- RV64I instruction set
- passes EECS 151 RV32 tests
- cleaner/more organized hazard detection and stalling compared to my three-stage pipeline


planned improvements to my three-stage pipeline:
- hierarchical memory (aiming for at least a direct-mapped L1$)
- branch speculation
- superscalar execution
