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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/anand/EE2003/Assignment_3_final_submission/CPU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {27U, 0U};
static unsigned int ng9[] = {25U, 0U};
static const char *ng10 = "JALR %d %d %d %d";
static unsigned int ng11[] = {4294967294U, 0U};



static void Always_74_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7920);
    *((int *)t2) = 1;
    t3 = (t0 + 6392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 3768U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 2968U);
    t8 = *((char **)t7);
    t7 = (t0 + 4968);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB11;

}

static void Cont_87_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 8080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7936);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_88_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 8144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7952);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_91_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7968);
    *((int *)t2) = 1;
    t3 = (t0 + 7136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(94, ng0);
    t7 = (t0 + 2648U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 4648);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 4808);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3128U);
    t4 = *((char **)t3);
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB15;

}

static void Always_100_4(char *t0)
{
    char t6[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 7984);
    *((int *)t2) = 1;
    t3 = (t0 + 7384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB13;

LAB14:
LAB15:    t22 = (t6 + 4);
    t39 = *((unsigned int *)t22);
    t40 = (~(t39));
    t41 = *((unsigned int *)t6);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    t5 = ((char*)((ng8)));
    memset(t47, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t30 = (t23 & t27);
    if (t30 != 0)
        goto LAB23;

LAB20:    if (t26 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t47) = 1;

LAB23:    t22 = (t47 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t47);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    t5 = ((char*)((ng9)));
    memset(t47, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t30 = (t23 & t27);
    if (t30 != 0)
        goto LAB31;

LAB28:    if (t26 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t47) = 1;

LAB31:    t22 = (t47 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t47);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(130, ng0);

LAB39:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB34:
LAB26:
LAB18:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(106, ng0);
    t28 = ((char*)((ng6)));
    t29 = (t0 + 4648);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB12;

LAB13:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t17 | t18);
    t8 = (t3 + 4);
    t21 = (t4 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t30 = (~(t27));
    t31 = (t20 & t24);
    t32 = (t26 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t34);
    goto LAB15;

LAB16:    xsi_set_current_line(108, ng0);

LAB19:    xsi_set_current_line(109, ng0);
    t28 = (t0 + 4488);
    t29 = (t28 + 56U);
    t44 = *((char **)t29);
    t45 = (t0 + 2648U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t44, 32, t46, 32);
    t45 = (t0 + 4648);
    xsi_vlogvar_assign_value(t45, t47, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB18;

LAB22:    t21 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(114, ng0);

LAB27:    xsi_set_current_line(116, ng0);
    t28 = (t0 + 4488);
    t29 = (t28 + 56U);
    t44 = *((char **)t29);
    t45 = (t0 + 2648U);
    t46 = *((char **)t45);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t44, 32, t46, 32);
    t45 = (t0 + 4648);
    xsi_vlogvar_assign_value(t45, t48, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB26;

LAB30:    t21 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(122, ng0);

LAB35:    xsi_set_current_line(123, ng0);
    t28 = (t0 + 4648);
    t29 = (t28 + 56U);
    t44 = *((char **)t29);
    t45 = (t0 + 2808U);
    t46 = *((char **)t45);
    t45 = (t0 + 2648U);
    t50 = *((char **)t45);
    t45 = (t0 + 4488);
    t51 = (t45 + 56U);
    t52 = *((char **)t51);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t44, 32, (char)119, t46, 32, (char)119, t50, 32, (char)118, t52, 32);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t4, 32);
    t2 = ((char*)((ng11)));
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t2);
    t11 = (t9 | t10);
    *((unsigned int *)t47) = t11;
    t5 = (t6 + 4);
    t7 = (t2 + 4);
    t8 = (t47 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB36;

LAB37:
LAB38:    t28 = (t0 + 4488);
    xsi_vlogvar_assign_value(t28, t47, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB34;

LAB36:    t17 = *((unsigned int *)t47);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t47) = (t17 | t18);
    t21 = (t6 + 4);
    t22 = (t2 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (~(t19));
    t23 = *((unsigned int *)t6);
    t31 = (t23 & t20);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t32 = (t26 & t25);
    t27 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t33 & t27);
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t34 & t30);
    goto LAB38;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 12);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 12);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 7U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 30);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 30);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    xsi_vlogtype_concat(t3, 7, 7, 3U, t25, 1, t13, 3, t4, 3);
    t33 = (t0 + 8208);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 127U;
    t39 = t38;
    t40 = (t3 + 4);
    t41 = *((unsigned int *)t3);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 6);
    t46 = (t0 + 8000);
    *((int *)t46) = 1;

LAB1:    return;
}


extern void work_m_09281348134059235590_2951351297_init()
{
	static char *pe[] = {(void *)Always_74_0,(void *)Cont_87_1,(void *)Cont_88_2,(void *)Always_91_3,(void *)Always_100_4,(void *)implSig1_execute};
	xsi_register_didat("work_m_09281348134059235590_2951351297", "isim/SingleCycleCPU_isim_beh.exe.sim/work/m_09281348134059235590_2951351297.didat");
	xsi_register_executes(pe);
}
