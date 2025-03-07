#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
//#include <nvboard.h>
#include "VMUX.h"
#include "verilated_vcd_c.h"


  int main(int argc, char** argv, char** env) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      VMUX* top = new VMUX{contextp};


		VerilatedVcdC* tfp = new VerilatedVcdC;//初始化VCD对象指针
		contextp->traceEverOn(true);//打开追踪功能
		top->trace(tfp,99);
		tfp->open("wave.vcd");//设置输出的文件wave.vcd
 

			for(int i = 0;i < 20; i++) {
				int sel0 = rand() & 1;
				int sel1 = rand() & 1;
                int in1 = 1;
                int in2 = 2;
                int in3 = 3;
                int in4 = 4;
				top->io_sel0 = sel0;
				top->io_sel1 = sel1;
                top->io_in1 = in1;
                top->io_in2 = in2;
                top->io_in3 = in3;
                top->io_in4 = in4;
				top->eval();
				printf("sel0 = %d, sel1 = %d, out = %d\n", sel0, sel1, top->io_out);
                top->eval();
				tfp->dump(contextp->time());//dump wave
				contextp->timeInc(1);//推动仿真时间
				
				//assert(top->io_out == (a ^ b));
            }

      //while (!contextp->gotFinish()) { top->eval(); }
      delete top;
      tfp->flush();
      tfp->close();
      delete contextp;
      delete tfp;
      return 0;
  }
