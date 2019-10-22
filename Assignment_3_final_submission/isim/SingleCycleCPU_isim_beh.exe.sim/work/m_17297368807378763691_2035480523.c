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
static const char *ng0 = "/home/anand/EE2003/Assignment_3_final_submission/Decoder.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {13U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static const char *ng6 = "LUI : %h %h";
static unsigned int ng7[] = {27U, 0U};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {12, 0};
static unsigned int ng10[] = {25U, 0U};
static int ng11[] = {20, 0};
static unsigned int ng12[] = {24U, 0U};
static const char *ng13 = "%h";
static unsigned int ng14[] = {2U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {8U, 0U};
static const char *ng17 = "%h %h rs1 : %d  rs2 %d";
static unsigned int ng18[] = {4U, 0U};
static unsigned int ng19[] = {12U, 0U};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char t36[8];
    char t40[8];
    char t49[8];
    char t50[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 14);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 14);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);

LAB6:    t5 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t5, 5);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t15 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB26:    xsi_set_current_line(41, ng0);
    t7 = ((char*)((ng3)));
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 2);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 1048575U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1048575U);
    xsi_vlogtype_concat(t17, 20, 20, 1U, t18, 20);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t17, 20, t2, 12);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t4, 32, (char)118, t14, 4);
    goto LAB25;

LAB9:    xsi_set_current_line(49, ng0);

LAB27:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 1048575U);
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 1048575U);
    xsi_vlogtype_concat(t17, 20, 20, 1U, t18, 20);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t17, 20, t2, 12);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t3, 32, t16, 32);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t19, 0, 0, 32);
    goto LAB25;

LAB11:    xsi_set_current_line(57, ng0);

LAB28:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 1023U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1023U);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 20);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 20);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t19, 0, 8);
    t27 = (t19 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 12);
    *((unsigned int *)t19) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 12);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 255U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 255U);
    t37 = ((char*)((ng9)));
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t40 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 31);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 31);
    t47 = (t46 & 1);
    *((unsigned int *)t38) = t47;
    xsi_vlog_mul_concat(t36, 12, 1, t37, 1U, t40, 1);
    xsi_vlogtype_concat(t16, 32, 32, 5U, t36, 12, t19, 8, t18, 1, t17, 10, t2, 1);
    t48 = (t0 + 2568);
    xsi_vlogvar_assign_value(t48, t16, 0, 0, 32);
    goto LAB25;

LAB13:    xsi_set_current_line(65, ng0);

LAB29:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 20);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    xsi_vlog_mul_concat(t18, 20, 1, t5, 1U, t19, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t18, 20, t17, 12);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t16, 0, 0, 32);
    goto LAB25;

LAB15:    xsi_set_current_line(73, ng0);

LAB30:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 8);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 25);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 25);
    *((unsigned int *)t7) = t24;
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 63U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 63U);
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t19, 0, 8);
    t27 = (t19 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 7);
    t32 = (t31 & 1);
    *((unsigned int *)t19) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 7);
    t35 = (t34 & 1);
    *((unsigned int *)t27) = t35;
    t37 = ((char*)((ng11)));
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t40 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 31);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 31);
    t47 = (t46 & 1);
    *((unsigned int *)t38) = t47;
    xsi_vlog_mul_concat(t36, 20, 1, t37, 1U, t40, 1);
    xsi_vlogtype_concat(t16, 32, 32, 5U, t36, 20, t19, 1, t18, 6, t17, 4, t2, 1);
    t48 = (t0 + 2568);
    xsi_vlogvar_assign_value(t48, t16, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t4, 32);
    goto LAB25;

LAB17:    xsi_set_current_line(83, ng0);

LAB31:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 12);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);

LAB32:    t5 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 3, t5, 3);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 3, t2, 3);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 3, t2, 3);
    if (t15 == 1)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 20);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    xsi_vlogtype_concat(t18, 12, 12, 1U, t19, 12);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t40, 0, 8);
    t7 = (t40 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t40) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    xsi_vlog_mul_concat(t36, 20, 1, t5, 1U, t40, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t36, 20, t18, 12);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t17, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(96, ng0);

LAB40:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 12);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);

LAB41:    t5 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 3, t5, 3);
    if (t15 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t15 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t15 == 1)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t36, 0, 8);
    t2 = (t36 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 7);
    *((unsigned int *)t36) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 7);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    xsi_vlogtype_concat(t19, 5, 5, 1U, t36, 5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    memset(t49, 0, 8);
    t5 = (t49 + 4);
    t14 = (t7 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (t21 >> 25);
    *((unsigned int *)t49) = t22;
    t23 = *((unsigned int *)t14);
    t24 = (t23 >> 25);
    *((unsigned int *)t5) = t24;
    t25 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t25 & 127U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 127U);
    xsi_vlogtype_concat(t40, 7, 7, 1U, t49, 7);
    t20 = ((char*)((ng11)));
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t51, 0, 8);
    t27 = (t51 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t51) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t27) = t35;
    xsi_vlog_mul_concat(t50, 20, 1, t20, 1U, t51, 1);
    xsi_vlogtype_concat(t18, 32, 32, 3U, t50, 20, t40, 7, t19, 5);
    t37 = (t0 + 2568);
    xsi_vlogvar_assign_value(t37, t18, 0, 0, 32);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    t20 = (t0 + 1048U);
    t27 = *((char **)t20);
    memset(t18, 0, 8);
    t20 = (t18 + 4);
    t28 = (t27 + 4);
    t8 = *((unsigned int *)t27);
    t9 = (t8 >> 15);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t28);
    t11 = (t10 >> 15);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 31U);
    t13 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t13 & 31U);
    t29 = (t0 + 1048U);
    t37 = *((char **)t29);
    memset(t19, 0, 8);
    t29 = (t19 + 4);
    t38 = (t37 + 4);
    t21 = *((unsigned int *)t37);
    t22 = (t21 >> 20);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t38);
    t24 = (t23 >> 20);
    *((unsigned int *)t29) = t24;
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 31U);
    t26 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t26 & 31U);
    xsi_vlogfile_write(1, 0, 0, ng17, 5, t0, (char)118, t4, 32, (char)118, t14, 4, (char)118, t18, 5, (char)118, t19, 5);
    goto LAB25;

LAB21:    xsi_set_current_line(112, ng0);

LAB50:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t36, 0, 8);
    t2 = (t36 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 20);
    *((unsigned int *)t36) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    xsi_vlogtype_concat(t19, 12, 12, 1U, t36, 12);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t49, 0, 8);
    t7 = (t49 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t49) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    xsi_vlog_mul_concat(t40, 20, 1, t5, 1U, t49, 1);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t40, 20, t19, 12);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 32);
    goto LAB25;

LAB23:    xsi_set_current_line(120, ng0);

LAB51:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t36, 0, 8);
    t2 = (t36 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 20);
    *((unsigned int *)t36) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 20);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t12 & 4095U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4095U);
    xsi_vlogtype_concat(t19, 12, 12, 1U, t36, 12);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    memset(t49, 0, 8);
    t7 = (t49 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t49) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    xsi_vlog_mul_concat(t40, 20, 1, t5, 1U, t49, 1);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t40, 20, t19, 12);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 32);
    goto LAB25;

LAB33:    xsi_set_current_line(87, ng0);
    t7 = ((char*)((ng8)));
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 4);
    goto LAB39;

LAB35:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB37:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB42:    xsi_set_current_line(100, ng0);

LAB49:    xsi_set_current_line(101, ng0);
    t7 = ((char*)((ng8)));
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 4);
    goto LAB48;

LAB44:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB48;

LAB46:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB48;

}


extern void work_m_17297368807378763691_2035480523_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_17297368807378763691_2035480523", "isim/SingleCycleCPU_isim_beh.exe.sim/work/m_17297368807378763691_2035480523.didat");
	xsi_register_executes(pe);
}
