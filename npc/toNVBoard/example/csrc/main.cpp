#include <nvboard.h>
#include <VMUX.h>

static VMUX dut;

void nvboard_bind_all_pins(VMUX* top);


int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  
  //reset(10);

  while(1) {
    nvboard_update();
    dut.eval();
  }
}
