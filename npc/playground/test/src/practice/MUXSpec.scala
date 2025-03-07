package MUX

import chisel3._
//import circt.stage.ChiselStage
import org.scalatest.flatspec.AnyFlatSpec
import chisel3.simulator._
import chisel3.simulator.EphemeralSimulator._

class MUXSpec extends AnyFlatSpec {
  behavior of "MUX"

  it should "select input correctly" in {
    simulate (new MUX) { dut => 
      // 测试案例 1: sel0=0, sel1=0 → 输出 in1
      dut.io.sel0.poke(false.B)
      dut.io.sel1.poke(false.B)
      dut.io.in1.poke(5.U)
      dut.io.out.expect(5.U) 
      
      // 测试案例 2: sel0=1, sel1=1 → 输出 in4
      dut.io.sel0.poke(true.B)
      dut.io.sel1.poke(true.B)
      dut.io.in4.poke(3.U)
      dut.io.out.expect(3.U) 
    }
    chisel3.emitVerilog(new MUX())
  }
}


//object MUXtest extends App {
    //circt.stage.ChiselStage.emitSystemVerilog(new MUX())
    //chisel3.emitVerilog(new MUX())
//}