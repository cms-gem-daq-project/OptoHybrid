/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//psf/Home/Documents/PhD/Code/OptoHybrid/src/tracking_readout.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1413330318_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2320);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 0);
    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 1);
    if (t2 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 2);
    if (t2 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 3);
    if (t2 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2364);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2400);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2364);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2400);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2364);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2364);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB16;

LAB17:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1052U);
    t4 = *((char **)t1);
    t1 = (t0 + 1568U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    memcpy(t1, t4, 224U);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 2;
    goto LAB14;

LAB16:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1500U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB14;

LAB18:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1568U);
    t4 = *((char **)t1);
    t1 = (t0 + 2436);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 224U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2400);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB9;

LAB20:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1500U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 3;
    goto LAB21;

LAB23:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2400);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1500U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB9;

}


extern void work_a_1413330318_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1413330318_3212880686_p_0};
	xsi_register_didat("work_a_1413330318_3212880686", "isim/sim_link_tracking_isim_beh.exe.sim/work/a_1413330318_3212880686.didat");
	xsi_register_executes(pe);
}
