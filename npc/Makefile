VERILATOR_FLAGS=--cc --trace --exe --build
all: 
	sim wave clean
	@echo "Write this Makefile by your self."

# 定义sim目标规则
.PHONY: sim
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLAGS) vsrc/doublecontrol.v csrc/sim_doublecontrol.cpp 

.PHONY: wave
wave:
	obj_dir/Vdoublecontrol
	gtkwave wave.vcd

.PHONY: clean
clean:
	rm -rf obj_dir
	