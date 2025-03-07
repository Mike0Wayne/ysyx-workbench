// src/main/scala/top.scala
package top

import chisel3._
//import chisel3.util._
//import chisel3.stage._
import circt.stage.ChiselStage
//import chisel3.stage.ChiselGeneratorAnnotation



import decoder._

class top extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(3.W))
    val out = Output(UInt(8.W))
  })

  val decoder = Module(new Decoder)
  decoder.io.in := io.in
  io.out := decoder.io.out
}

object topMain extends App {
    val firtoolOptions = Array(
      "--lowering-options=" + List(
      // make yosys happy
      // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).reduce(_ + "," + _)
  )
  printf(circt.stage.ChiselStage.emitSystemVerilog(new top(), Array("--target-dir", "generated") ++ firtoolOptions))
  //chisel3.Driver.execute(args, () => new top())s
}