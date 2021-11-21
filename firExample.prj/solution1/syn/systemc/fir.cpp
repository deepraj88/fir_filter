// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "fir.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic fir::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic fir::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> fir::ap_ST_fsm_state1 = "1";
const sc_lv<3> fir::ap_ST_fsm_state2 = "10";
const sc_lv<3> fir::ap_ST_fsm_state3 = "100";
const sc_lv<32> fir::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> fir::ap_const_lv32_1 = "1";
const sc_lv<32> fir::ap_const_lv32_2 = "10";
const sc_lv<32> fir::ap_const_lv32_1F4 = "111110100";
const sc_lv<32> fir::ap_const_lv32_139 = "100111001";
const sc_lv<32> fir::ap_const_lv32_FFFFFFA5 = "11111111111111111111111110100101";
const sc_lv<32> fir::ap_const_lv32_35 = "110101";
const bool fir::ap_const_boolean_1 = true;

fir::fir(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp1_fu_210_p2);
    sensitive << ( tmp_4_2_reg_255 );
    sensitive << ( tmp_4_4_reg_260 );

    SC_METHOD(thread_tmp2_fu_204_p2);
    sensitive << ( tmp4_fu_200_p2 );
    sensitive << ( tmp3_fu_196_p2 );

    SC_METHOD(thread_tmp3_fu_196_p2);
    sensitive << ( tmp_4_5_reg_230 );
    sensitive << ( tmp_4_6_reg_235 );

    SC_METHOD(thread_tmp4_fu_200_p2);
    sensitive << ( tmp_4_8_reg_240 );
    sensitive << ( tmp_6_reg_245 );

    SC_METHOD(thread_tmp_4_2_fu_159_p0);
    sensitive << ( shift_reg_7 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_tmp_4_2_fu_159_p2);
    sensitive << ( tmp_4_2_fu_159_p0 );

    SC_METHOD(thread_tmp_4_4_fu_185_p0);
    sensitive << ( shift_reg_5 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_tmp_4_4_fu_185_p2);
    sensitive << ( tmp_4_4_fu_185_p0 );

    SC_METHOD(thread_tmp_4_5_fu_59_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shift_reg_4 );

    SC_METHOD(thread_tmp_4_5_fu_59_p2);
    sensitive << ( tmp_4_5_fu_59_p0 );

    SC_METHOD(thread_tmp_4_6_fu_75_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shift_reg_3 );

    SC_METHOD(thread_tmp_4_6_fu_75_p2);
    sensitive << ( tmp_4_6_fu_75_p0 );

    SC_METHOD(thread_tmp_4_8_fu_101_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shift_reg_1 );

    SC_METHOD(thread_tmp_4_8_fu_101_p2);
    sensitive << ( tmp_4_8_fu_101_p0 );

    SC_METHOD(thread_tmp_4_fu_133_p0);
    sensitive << ( shift_reg_9 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_tmp_4_fu_133_p2);
    sensitive << ( tmp_4_fu_133_p0 );

    SC_METHOD(thread_tmp_6_fu_117_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( x );

    SC_METHOD(thread_tmp_6_fu_117_p2);
    sensitive << ( tmp_6_fu_117_p0 );

    SC_METHOD(thread_tmp_fu_214_p2);
    sensitive << ( tmp_4_reg_250 );
    sensitive << ( tmp1_fu_210_p2 );

    SC_METHOD(thread_y);
    sensitive << ( tmp2_reg_265 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_214_p2 );

    SC_METHOD(thread_y_ap_vld);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "001";
    shift_reg_9 = "00000000000000000000000000000000";
    shift_reg_8 = "00000000000000000000000000000000";
    shift_reg_7 = "00000000000000000000000000000000";
    shift_reg_6 = "00000000000000000000000000000000";
    shift_reg_5 = "00000000000000000000000000000000";
    shift_reg_4 = "00000000000000000000000000000000";
    shift_reg_3 = "00000000000000000000000000000000";
    shift_reg_2 = "00000000000000000000000000000000";
    shift_reg_1 = "00000000000000000000000000000000";
    shift_reg_0 = "00000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "fir_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, y, "(port)y");
    sc_trace(mVcdFile, y_ap_vld, "(port)y_ap_vld");
    sc_trace(mVcdFile, x, "(port)x");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, shift_reg_9, "shift_reg_9");
    sc_trace(mVcdFile, shift_reg_8, "shift_reg_8");
    sc_trace(mVcdFile, shift_reg_7, "shift_reg_7");
    sc_trace(mVcdFile, shift_reg_6, "shift_reg_6");
    sc_trace(mVcdFile, shift_reg_5, "shift_reg_5");
    sc_trace(mVcdFile, shift_reg_4, "shift_reg_4");
    sc_trace(mVcdFile, shift_reg_3, "shift_reg_3");
    sc_trace(mVcdFile, shift_reg_2, "shift_reg_2");
    sc_trace(mVcdFile, shift_reg_1, "shift_reg_1");
    sc_trace(mVcdFile, shift_reg_0, "shift_reg_0");
    sc_trace(mVcdFile, shift_reg_4_load_reg_225, "shift_reg_4_load_reg_225");
    sc_trace(mVcdFile, tmp_4_5_fu_59_p2, "tmp_4_5_fu_59_p2");
    sc_trace(mVcdFile, tmp_4_5_reg_230, "tmp_4_5_reg_230");
    sc_trace(mVcdFile, tmp_4_6_fu_75_p2, "tmp_4_6_fu_75_p2");
    sc_trace(mVcdFile, tmp_4_6_reg_235, "tmp_4_6_reg_235");
    sc_trace(mVcdFile, tmp_4_8_fu_101_p2, "tmp_4_8_fu_101_p2");
    sc_trace(mVcdFile, tmp_4_8_reg_240, "tmp_4_8_reg_240");
    sc_trace(mVcdFile, tmp_6_fu_117_p2, "tmp_6_fu_117_p2");
    sc_trace(mVcdFile, tmp_6_reg_245, "tmp_6_reg_245");
    sc_trace(mVcdFile, tmp_4_fu_133_p2, "tmp_4_fu_133_p2");
    sc_trace(mVcdFile, tmp_4_reg_250, "tmp_4_reg_250");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_4_2_fu_159_p2, "tmp_4_2_fu_159_p2");
    sc_trace(mVcdFile, tmp_4_2_reg_255, "tmp_4_2_reg_255");
    sc_trace(mVcdFile, tmp_4_4_fu_185_p2, "tmp_4_4_fu_185_p2");
    sc_trace(mVcdFile, tmp_4_4_reg_260, "tmp_4_4_reg_260");
    sc_trace(mVcdFile, tmp2_fu_204_p2, "tmp2_fu_204_p2");
    sc_trace(mVcdFile, tmp2_reg_265, "tmp2_reg_265");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_4_5_fu_59_p0, "tmp_4_5_fu_59_p0");
    sc_trace(mVcdFile, tmp_4_6_fu_75_p0, "tmp_4_6_fu_75_p0");
    sc_trace(mVcdFile, tmp_4_8_fu_101_p0, "tmp_4_8_fu_101_p0");
    sc_trace(mVcdFile, tmp_6_fu_117_p0, "tmp_6_fu_117_p0");
    sc_trace(mVcdFile, tmp_4_fu_133_p0, "tmp_4_fu_133_p0");
    sc_trace(mVcdFile, tmp_4_2_fu_159_p0, "tmp_4_2_fu_159_p0");
    sc_trace(mVcdFile, tmp_4_4_fu_185_p0, "tmp_4_4_fu_185_p0");
    sc_trace(mVcdFile, tmp4_fu_200_p2, "tmp4_fu_200_p2");
    sc_trace(mVcdFile, tmp3_fu_196_p2, "tmp3_fu_196_p2");
    sc_trace(mVcdFile, tmp1_fu_210_p2, "tmp1_fu_210_p2");
    sc_trace(mVcdFile, tmp_fu_214_p2, "tmp_fu_214_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("fir.hdltvin.dat");
    mHdltvoutHandle.open("fir.hdltvout.dat");
}

fir::~fir() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void fir::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        shift_reg_0 = x.read();
        shift_reg_1 = shift_reg_0.read();
        shift_reg_2 = shift_reg_1.read();
        shift_reg_3 = shift_reg_2.read();
        shift_reg_4 = shift_reg_3.read();
        shift_reg_4_load_reg_225 = shift_reg_4.read();
        tmp_4_5_reg_230 = tmp_4_5_fu_59_p2.read();
        tmp_4_6_reg_235 = tmp_4_6_fu_75_p2.read();
        tmp_4_8_reg_240 = tmp_4_8_fu_101_p2.read();
        tmp_6_reg_245 = tmp_6_fu_117_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        shift_reg_5 = shift_reg_4_load_reg_225.read();
        shift_reg_6 = shift_reg_5.read();
        shift_reg_7 = shift_reg_6.read();
        shift_reg_8 = shift_reg_7.read();
        shift_reg_9 = shift_reg_8.read();
        tmp2_reg_265 = tmp2_fu_204_p2.read();
        tmp_4_2_reg_255 = tmp_4_2_fu_159_p2.read();
        tmp_4_4_reg_260 = tmp_4_4_fu_185_p2.read();
        tmp_4_reg_250 = tmp_4_fu_133_p2.read();
    }
}

void fir::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void fir::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void fir::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void fir::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_tmp1_fu_210_p2() {
    tmp1_fu_210_p2 = (!tmp_4_2_reg_255.read().is_01() || !tmp_4_4_reg_260.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_4_2_reg_255.read()) + sc_biguint<32>(tmp_4_4_reg_260.read()));
}

void fir::thread_tmp2_fu_204_p2() {
    tmp2_fu_204_p2 = (!tmp4_fu_200_p2.read().is_01() || !tmp3_fu_196_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp4_fu_200_p2.read()) + sc_biguint<32>(tmp3_fu_196_p2.read()));
}

void fir::thread_tmp3_fu_196_p2() {
    tmp3_fu_196_p2 = (!tmp_4_5_reg_230.read().is_01() || !tmp_4_6_reg_235.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_4_5_reg_230.read()) + sc_biguint<32>(tmp_4_6_reg_235.read()));
}

void fir::thread_tmp4_fu_200_p2() {
    tmp4_fu_200_p2 = (!tmp_4_8_reg_240.read().is_01() || !tmp_6_reg_245.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_4_8_reg_240.read()) + sc_biguint<32>(tmp_6_reg_245.read()));
}

void fir::thread_tmp_4_2_fu_159_p0() {
    tmp_4_2_fu_159_p0 = shift_reg_7.read();
}

void fir::thread_tmp_4_2_fu_159_p2() {
    tmp_4_2_fu_159_p2 = (!tmp_4_2_fu_159_p0.read().is_01() || !ap_const_lv32_FFFFFFA5.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_4_2_fu_159_p0.read()) * sc_bigint<32>(ap_const_lv32_FFFFFFA5);
}

void fir::thread_tmp_4_4_fu_185_p0() {
    tmp_4_4_fu_185_p0 = shift_reg_5.read();
}

void fir::thread_tmp_4_4_fu_185_p2() {
    tmp_4_4_fu_185_p2 = (!tmp_4_4_fu_185_p0.read().is_01() || !ap_const_lv32_139.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_4_4_fu_185_p0.read()) * sc_biguint<32>(ap_const_lv32_139);
}

void fir::thread_tmp_4_5_fu_59_p0() {
    tmp_4_5_fu_59_p0 = shift_reg_4.read();
}

void fir::thread_tmp_4_5_fu_59_p2() {
    tmp_4_5_fu_59_p2 = (!tmp_4_5_fu_59_p0.read().is_01() || !ap_const_lv32_1F4.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_4_5_fu_59_p0.read()) * sc_biguint<32>(ap_const_lv32_1F4);
}

void fir::thread_tmp_4_6_fu_75_p0() {
    tmp_4_6_fu_75_p0 = shift_reg_3.read();
}

void fir::thread_tmp_4_6_fu_75_p2() {
    tmp_4_6_fu_75_p2 = (!tmp_4_6_fu_75_p0.read().is_01() || !ap_const_lv32_139.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_4_6_fu_75_p0.read()) * sc_biguint<32>(ap_const_lv32_139);
}

void fir::thread_tmp_4_8_fu_101_p0() {
    tmp_4_8_fu_101_p0 = shift_reg_1.read();
}

void fir::thread_tmp_4_8_fu_101_p2() {
    tmp_4_8_fu_101_p2 = (!tmp_4_8_fu_101_p0.read().is_01() || !ap_const_lv32_FFFFFFA5.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_4_8_fu_101_p0.read()) * sc_bigint<32>(ap_const_lv32_FFFFFFA5);
}

void fir::thread_tmp_4_fu_133_p0() {
    tmp_4_fu_133_p0 = shift_reg_9.read();
}

void fir::thread_tmp_4_fu_133_p2() {
    tmp_4_fu_133_p2 = (!tmp_4_fu_133_p0.read().is_01() || !ap_const_lv32_35.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_4_fu_133_p0.read()) * sc_biguint<32>(ap_const_lv32_35);
}

void fir::thread_tmp_6_fu_117_p0() {
    tmp_6_fu_117_p0 = x.read();
}

void fir::thread_tmp_6_fu_117_p2() {
    tmp_6_fu_117_p2 = (!tmp_6_fu_117_p0.read().is_01() || !ap_const_lv32_35.is_01())? sc_lv<32>(): sc_bigint<32>(tmp_6_fu_117_p0.read()) * sc_biguint<32>(ap_const_lv32_35);
}

void fir::thread_tmp_fu_214_p2() {
    tmp_fu_214_p2 = (!tmp1_fu_210_p2.read().is_01() || !tmp_4_reg_250.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp1_fu_210_p2.read()) + sc_biguint<32>(tmp_4_reg_250.read()));
}

void fir::thread_y() {
    y = (!tmp2_reg_265.read().is_01() || !tmp_fu_214_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp2_reg_265.read()) + sc_biguint<32>(tmp_fu_214_p2.read()));
}

void fir::thread_y_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        y_ap_vld = ap_const_logic_1;
    } else {
        y_ap_vld = ap_const_logic_0;
    }
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

void fir::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y\" :  \"" << y.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_ap_vld\" :  \"" << y_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x\" :  \"" << x.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

