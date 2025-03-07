package MUX

import chisel3._
import chisel3.util._


class MUX extends Module {
    val io = IO(new Bundle {
        val in1 = Input(UInt(3.W))
        val in2 = Input(UInt(3.W))
        val in3 = Input(UInt(3.W))
        val in4 = Input(UInt(3.W))
        val sel0 = Input(Bool())
        val sel1 = Input(Bool())
        val out = Output(UInt(3.W))
     })
     val sel = Cat(io.sel0, io.sel1)
        io.out := MuxCase(0.U(3.W), Seq(
            (sel === 0.U) -> io.in1,
            (sel === 1.U) -> io.in2,
            (sel === 2.U) -> io.in3,
            (sel === 3.U) -> io.in4
        ))

    


}