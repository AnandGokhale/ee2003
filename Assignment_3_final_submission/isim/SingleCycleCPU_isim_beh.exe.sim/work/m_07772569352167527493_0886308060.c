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
static const char *ng0 = "/home/anand/EE2003/Assignment_3_final_submission/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {8U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {32U, 0U};
static unsigned int ng5[] = {40U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {18U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {17U, 0U};
static unsigned int ng11[] = {19U, 0U};
static unsigned int ng12[] = {25U, 0U};
static unsigned int ng13[] = {27U, 0U};
static unsigned int ng14[] = {33U, 0U};
static unsigned int ng15[] = {35U, 0U};
static unsigned int ng16[] = {49U, 0U};
static unsigned int ng17[] = {51U, 0U};
static unsigned int ng18[] = {57U, 0U};
static unsigned int ng19[] = {59U, 0U};
static unsigned int ng20[] = {9U, 0U};
static const char *ng21 = "r1 : %h r2 : %h";
static unsigned int ng22[] = {11U, 0U};
static unsigned int ng23[] = {41U, 0U};
static unsigned int ng24[] = {3U, 0U};
static int ng25[] = {0, 0};
static unsigned int ng26[] = {4U, 0U};
static const char *ng27 = "";
static unsigned int ng28[] = {5U, 0U};
static unsigned int ng29[] = {6U, 0U};
static unsigned int ng30[] = {7U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
    char t19[8];
    char t24[8];
    char t25[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    int t20;
    int t21;
    int t22;
    int t23;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t14, 6);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB11;

LAB12:    t5 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t21 == 1)
        goto LAB13;

LAB14:    t6 = ((char*)((ng5)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 6, t6, 6);
    if (t22 == 1)
        goto LAB15;

LAB16:    t7 = ((char*)((ng6)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 6, t7, 6);
    if (t23 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB19;

LAB20:    t3 = ((char*)((ng8)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB21;

LAB22:    t5 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t21 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB27;

LAB28:    t3 = ((char*)((ng12)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB31;

LAB32:    t3 = ((char*)((ng14)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB35;

LAB36:    t3 = ((char*)((ng16)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB39;

LAB40:    t3 = ((char*)((ng18)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB43;

LAB44:    t3 = ((char*)((ng20)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB47;

LAB48:    t3 = ((char*)((ng23)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t20 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB55:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);

LAB79:    t6 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 3, t6, 3);
    if (t15 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 3, t2, 3);
    if (t15 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng26)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 3, t2, 3);
    if (t15 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 3, t2, 3);
    if (t15 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 3, t2, 3);
    if (t15 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng30)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 3, t2, 3);
    if (t15 == 1)
        goto LAB90;

LAB91:
LAB93:
LAB92:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB94:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t17, 32, t18, 32);
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t19, 0, 0, 32);
    goto LAB55;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    goto LAB7;

LAB15:    goto LAB7;

LAB17:    xsi_set_current_line(32, ng0);
    t14 = (t0 + 1048U);
    t16 = *((char **)t14);
    t14 = (t0 + 1208U);
    t17 = *((char **)t14);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t16, 32, t17, 32);
    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t19, 0, 0, 32);
    goto LAB55;

LAB19:    goto LAB17;

LAB21:    goto LAB17;

LAB23:    xsi_set_current_line(33, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t14 = *((char **)t6);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t7, 32, t14, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t19, 0, 0, 32);
    goto LAB55;

LAB25:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t25, 0, 8);
    xsi_vlog_signed_less(t25, 32, t5, 32, t6, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t25, 0, 0, 32);
    goto LAB55;

LAB27:    goto LAB25;

LAB29:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t6 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB57;

LAB56:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB58;

LAB59:    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    goto LAB55;

LAB31:    goto LAB29;

LAB33:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    *((unsigned int *)t19) = t10;
    t5 = (t6 + 4);
    t14 = (t7 + 4);
    t16 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t14);
    t13 = (t11 | t12);
    *((unsigned int *)t16) = t13;
    t26 = *((unsigned int *)t16);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB61;

LAB62:
LAB63:    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    goto LAB55;

LAB35:    goto LAB33;

LAB37:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t7);
    t10 = (t8 | t9);
    *((unsigned int *)t19) = t10;
    t5 = (t6 + 4);
    t14 = (t7 + 4);
    t16 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t14);
    t13 = (t11 | t12);
    *((unsigned int *)t16) = t13;
    t26 = *((unsigned int *)t16);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB64;

LAB65:
LAB66:    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t19, 0, 0, 32);
    goto LAB55;

LAB39:    goto LAB37;

LAB41:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t7);
    t10 = (t8 & t9);
    *((unsigned int *)t19) = t10;
    t5 = (t6 + 4);
    t14 = (t7 + 4);
    t16 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t14);
    t13 = (t11 | t12);
    *((unsigned int *)t16) = t13;
    t26 = *((unsigned int *)t16);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB67;

LAB68:
LAB69:    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t19, 0, 0, 32);
    goto LAB55;

LAB43:    goto LAB41;

LAB45:    xsi_set_current_line(40, ng0);

LAB70:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);
    xsi_vlogfile_write(1, 0, 0, ng21, 3, t0, (char)118, t6, 32, (char)118, t19, 5);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_lshift(t24, 32, t3, 32, t19, 5);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t24, 0, 0, 32);
    goto LAB55;

LAB47:    goto LAB45;

LAB49:    xsi_set_current_line(45, ng0);

LAB71:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t19 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t19);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    memset(t25, 0, 8);
    xsi_vlog_signed_arith_rshift(t25, 32, t3, 32, t24, 5);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t25, 0, 0, 32);

LAB74:    goto LAB55;

LAB51:    xsi_set_current_line(52, ng0);

LAB75:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    t7 = (t19 + 4);
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t19);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t3, 32, t5, 32);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);

LAB78:    goto LAB55;

LAB57:    t16 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t19) = 1;
    goto LAB59;

LAB61:    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t16);
    *((unsigned int *)t19) = (t28 | t29);
    goto LAB63;

LAB64:    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t16);
    *((unsigned int *)t19) = (t28 | t29);
    t17 = (t6 + 4);
    t18 = (t7 + 4);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t21 = (t32 & t31);
    t33 = *((unsigned int *)t18);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t22 = (t35 & t34);
    t36 = (~(t21));
    t37 = (~(t22));
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t36);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t37);
    goto LAB66;

LAB67:    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t16);
    *((unsigned int *)t19) = (t28 | t29);
    t17 = (t6 + 4);
    t18 = (t7 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (~(t34));
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    t21 = (t31 & t33);
    t22 = (t35 & t37);
    t38 = (~(t21));
    t39 = (~(t22));
    t41 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t41 & t38);
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t39);
    t43 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t43 & t38);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t39);
    goto LAB69;

LAB72:    xsi_set_current_line(47, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t24, 0, 8);
    t16 = (t24 + 4);
    t40 = (t18 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (t31 >> 0);
    *((unsigned int *)t24) = t32;
    t33 = *((unsigned int *)t40);
    t34 = (t33 >> 0);
    *((unsigned int *)t16) = t34;
    t35 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t35 & 31U);
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & 31U);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_rshift(t25, 32, t17, 32, t24, 5);
    t45 = (t0 + 1768);
    xsi_vlogvar_assign_value(t45, t25, 0, 0, 32);
    goto LAB74;

LAB76:    xsi_set_current_line(54, ng0);
    t14 = (t0 + 1048U);
    t16 = *((char **)t14);
    t14 = (t0 + 1208U);
    t17 = *((char **)t14);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_minus(t24, 32, t16, 32, t17, 32);
    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t24, 0, 0, 32);
    goto LAB78;

LAB80:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    t7 = (t0 + 1208U);
    t16 = *((char **)t7);
    memset(t24, 0, 8);
    t7 = (t14 + 4);
    t17 = (t16 + 4);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t16);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t7);
    t34 = *((unsigned int *)t17);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB98;

LAB95:    if (t35 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t24) = 1;

LAB98:    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t24, 0, 0, 1);
    goto LAB94;

LAB82:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t26 = (t10 | t13);
    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t7);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB100;

LAB99:    if (t29 != 0)
        goto LAB101;

LAB102:    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t24, 0, 0, 1);
    goto LAB94;

LAB84:    xsi_set_current_line(65, ng0);

LAB103:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t0, (char)119, t5, 32, (char)119, t6, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t46, 0, 8);
    xsi_vlog_signed_less(t46, 32, t3, 32, t5, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t46, 0, 0, 1);
    goto LAB94;

LAB86:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t46, 0, 8);
    xsi_vlog_signed_greatereq(t46, 32, t5, 32, t6, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t46, 0, 0, 1);
    goto LAB94;

LAB88:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB105;

LAB104:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB105;

LAB108:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB106;

LAB107:    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t24, 0, 0, 1);
    goto LAB94;

LAB90:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB110;

LAB109:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB110;

LAB113:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB112;

LAB111:    *((unsigned int *)t24) = 1;

LAB112:    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t24, 0, 0, 1);
    goto LAB94;

LAB97:    t18 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB98;

LAB100:    *((unsigned int *)t24) = 1;
    goto LAB102;

LAB101:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB102;

LAB105:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB107;

LAB106:    *((unsigned int *)t24) = 1;
    goto LAB107;

LAB110:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB112;

}


extern void work_m_07772569352167527493_0886308060_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_07772569352167527493_0886308060", "isim/SingleCycleCPU_isim_beh.exe.sim/work/m_07772569352167527493_0886308060.didat");
	xsi_register_executes(pe);
}
