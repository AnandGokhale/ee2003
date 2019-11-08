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
static const char *ng0 = "/home/anand/EE2003/Experiment_4_final_submission/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {55U, 0U};
static unsigned int ng3[] = {23U, 0U};
static unsigned int ng4[] = {111U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {103U, 0U};
static unsigned int ng7[] = {19U, 0U};
static int ng8[] = {5, 0};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {0, 0};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {1U, 0U};
static unsigned int ng16[] = {5U, 0U};
static int ng17[] = {10, 0};
static unsigned int ng18[] = {51U, 0U};
static unsigned int ng19[] = {35U, 0U};
static unsigned int ng20[] = {99U, 0U};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t17[8];
    char t21[8];
    char t31[8];
    char t36[8];
    char t52[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    int t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 127U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 127U);

LAB6:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 7, t5, 7);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t13 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng4)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 7, t3, 7);
    if (t16 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t13 == 1)
        goto LAB13;

LAB14:    t3 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 7, t3, 7);
    if (t16 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t13 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng12)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 7, t3, 7);
    if (t16 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t13 == 1)
        goto LAB21;

LAB22:    t3 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 7, t3, 7);
    if (t16 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t14 = (t0 + 1208U);
    t15 = *((char **)t14);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 32);
    goto LAB25;

LAB9:    goto LAB7;

LAB11:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t5, 32, t4, 32);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    goto LAB25;

LAB13:    goto LAB11;

LAB15:    xsi_set_current_line(35, ng0);

LAB26:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    *((unsigned int *)t17) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 7);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);

LAB27:    t15 = ((char*)((ng1)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 3, t15, 3);
    if (t18 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t17, 3, t2, 3);
    if (t13 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB25;

LAB17:    goto LAB15;

LAB19:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t14 = *((char **)t4);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t5, 32, t14, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t21, 0, 0, 32);
    goto LAB25;

LAB21:    goto LAB19;

LAB23:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    memset(t21, 0, 8);
    t4 = (t21 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 7);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);

LAB94:    t15 = ((char*)((ng1)));
    t18 = xsi_vlog_unsigned_case_compare(t21, 3, t15, 3);
    if (t18 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t13 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t13 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t13 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t13 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t13 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB25;

LAB28:    xsi_set_current_line(37, ng0);

LAB45:    xsi_set_current_line(38, ng0);
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 10);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 10);
    t28 = (t27 & 1);
    *((unsigned int *)t19) = t28;
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = (t0 + 1488U);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t31, 32, t30, t33, 2, t34, 32, 1);
    t35 = ((char*)((ng9)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB49;

LAB46:    if (t48 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t36) = 1;

LAB49:    t53 = *((unsigned int *)t21);
    t54 = *((unsigned int *)t36);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t21 + 4);
    t57 = (t36 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB50;

LAB51:
LAB52:    t84 = (t52 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t52);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(41, ng0);

LAB57:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t3, 32, t4, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t21, 0, 0, 32);

LAB55:    goto LAB44;

LAB30:    xsi_set_current_line(45, ng0);

LAB58:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t36, 0, 8);
    xsi_vlog_signed_less(t36, 32, t4, 32, t5, 32);
    t3 = (t36 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t36);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(49, ng0);

LAB63:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB61:    goto LAB44;

LAB32:    xsi_set_current_line(53, ng0);

LAB64:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB66;

LAB65:    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB67;

LAB68:    t19 = (t21 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t21);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(57, ng0);

LAB74:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB72:    goto LAB44;

LAB34:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    *((unsigned int *)t21) = t9;
    t3 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = (t21 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t14);
    t12 = (t10 | t11);
    *((unsigned int *)t15) = t12;
    t23 = *((unsigned int *)t15);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB75;

LAB76:
LAB77:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t21, 0, 0, 32);
    goto LAB44;

LAB36:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t21) = t9;
    t3 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = (t21 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t14);
    t12 = (t10 | t11);
    *((unsigned int *)t15) = t12;
    t23 = *((unsigned int *)t15);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB78;

LAB79:
LAB80:    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB44;

LAB38:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t21) = t9;
    t3 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = (t21 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t14);
    t12 = (t10 | t11);
    *((unsigned int *)t15) = t12;
    t23 = *((unsigned int *)t15);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB81;

LAB82:
LAB83:    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB44;

LAB40:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 31U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 32, t4, 32, t21, 5);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t31, 0, 0, 32);
    goto LAB44;

LAB42:    xsi_set_current_line(65, ng0);

LAB84:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1488U);
    t5 = (t3 + 72U);
    t14 = *((char **)t5);
    t15 = ((char*)((ng17)));
    xsi_vlog_generic_get_index_select_value(t21, 32, t4, t14, 2, t15, 32, 1);
    t19 = ((char*)((ng11)));
    memset(t31, 0, 8);
    t20 = (t21 + 4);
    t22 = (t19 + 4);
    t7 = *((unsigned int *)t21);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    t23 = (t9 | t12);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB88;

LAB85:    if (t26 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t31) = 1;

LAB88:    t30 = (t31 + 4);
    t39 = *((unsigned int *)t30);
    t40 = (~(t39));
    t41 = *((unsigned int *)t31);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(69, ng0);

LAB93:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 31U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 31U);
    memset(t36, 0, 8);
    xsi_vlog_signed_arith_rshift(t36, 32, t3, 32, t31, 5);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t36, 0, 0, 32);

LAB91:    goto LAB44;

LAB48:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB49;

LAB50:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t21 + 4);
    t67 = (t36 + 4);
    t68 = *((unsigned int *)t21);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t36);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB52;

LAB53:    xsi_set_current_line(38, ng0);

LAB56:    xsi_set_current_line(39, ng0);
    t90 = (t0 + 1048U);
    t91 = *((char **)t90);
    t90 = (t0 + 1208U);
    t92 = *((char **)t90);
    memset(t93, 0, 8);
    xsi_vlog_unsigned_minus(t93, 32, t91, 32, t92, 32);
    t90 = (t0 + 1928);
    xsi_vlogvar_assign_value(t90, t93, 0, 0, 32);
    goto LAB55;

LAB59:    xsi_set_current_line(46, ng0);

LAB62:    xsi_set_current_line(47, ng0);
    t14 = ((char*)((ng9)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB61;

LAB66:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t21) = 1;
    goto LAB68;

LAB70:    xsi_set_current_line(54, ng0);

LAB73:    xsi_set_current_line(55, ng0);
    t20 = ((char*)((ng9)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t20, 0, 0, 32);
    goto LAB72;

LAB75:    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t21) = (t25 | t26);
    goto LAB77;

LAB78:    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t21) = (t25 | t26);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t39 = *((unsigned int *)t4);
    t16 = (t39 & t28);
    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t5);
    t18 = (t42 & t41);
    t43 = (~(t16));
    t44 = (~(t18));
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t43);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t44);
    goto LAB80;

LAB81:    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t21) = (t25 | t26);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t39 = *((unsigned int *)t19);
    t40 = (~(t39));
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t20);
    t44 = (~(t43));
    t16 = (t28 & t40);
    t18 = (t42 & t44);
    t45 = (~(t16));
    t46 = (~(t18));
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & t45);
    t48 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t48 & t46);
    t49 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t49 & t45);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & t46);
    goto LAB83;

LAB87:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(66, ng0);

LAB92:    xsi_set_current_line(67, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    t32 = (t0 + 1208U);
    t34 = *((char **)t32);
    memset(t36, 0, 8);
    t32 = (t36 + 4);
    t35 = (t34 + 4);
    t44 = *((unsigned int *)t34);
    t45 = (t44 >> 0);
    *((unsigned int *)t36) = t45;
    t46 = *((unsigned int *)t35);
    t47 = (t46 >> 0);
    *((unsigned int *)t32) = t47;
    t48 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t48 & 31U);
    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 31U);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_rshift(t52, 32, t33, 32, t36, 5);
    t37 = (t0 + 1928);
    xsi_vlogvar_assign_value(t37, t52, 0, 0, 32);
    goto LAB91;

LAB95:    xsi_set_current_line(77, ng0);

LAB108:    xsi_set_current_line(78, ng0);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    t19 = (t0 + 1208U);
    t22 = *((char **)t19);
    memset(t31, 0, 8);
    t19 = (t20 + 4);
    t29 = (t22 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t22);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t29);
    t28 = (t26 ^ t27);
    t39 = (t25 | t28);
    t40 = *((unsigned int *)t19);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB112;

LAB109:    if (t42 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t31) = 1;

LAB112:    t32 = (t31 + 4);
    t45 = *((unsigned int *)t32);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB113;

LAB114:
LAB115:    goto LAB107;

LAB97:    xsi_set_current_line(82, ng0);

LAB117:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t4 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t14);
    t12 = (t10 ^ t11);
    t23 = (t9 | t12);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB119;

LAB118:    if (t26 != 0)
        goto LAB120;

LAB121:    t19 = (t31 + 4);
    t39 = *((unsigned int *)t19);
    t40 = (~(t39));
    t41 = *((unsigned int *)t31);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB122;

LAB123:
LAB124:    goto LAB107;

LAB99:    xsi_set_current_line(87, ng0);

LAB126:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t52, 0, 8);
    xsi_vlog_signed_less(t52, 32, t4, 32, t5, 32);
    t3 = (t52 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t52);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB127;

LAB128:
LAB129:    goto LAB107;

LAB101:    xsi_set_current_line(92, ng0);

LAB131:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t52, 0, 8);
    xsi_vlog_signed_greatereq(t52, 32, t4, 32, t5, 32);
    t3 = (t52 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t52);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB132;

LAB133:
LAB134:    goto LAB107;

LAB103:    xsi_set_current_line(97, ng0);

LAB136:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB138;

LAB137:    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB138;

LAB141:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB139;

LAB140:    t19 = (t31 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t31);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB142;

LAB143:
LAB144:    goto LAB107;

LAB105:    xsi_set_current_line(102, ng0);

LAB146:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB148;

LAB147:    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB148;

LAB151:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB150;

LAB149:    *((unsigned int *)t31) = 1;

LAB150:    t19 = (t31 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t31);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB152;

LAB153:
LAB154:    goto LAB107;

LAB111:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(78, ng0);

LAB116:    xsi_set_current_line(79, ng0);
    t33 = ((char*)((ng15)));
    t34 = (t0 + 2088);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB115;

LAB119:    *((unsigned int *)t31) = 1;
    goto LAB121;

LAB120:    t15 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(83, ng0);

LAB125:    xsi_set_current_line(84, ng0);
    t20 = ((char*)((ng15)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t20, 0, 0, 1);
    goto LAB124;

LAB127:    xsi_set_current_line(88, ng0);

LAB130:    xsi_set_current_line(89, ng0);
    t14 = ((char*)((ng15)));
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB129;

LAB132:    xsi_set_current_line(93, ng0);

LAB135:    xsi_set_current_line(94, ng0);
    t14 = ((char*)((ng15)));
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB134;

LAB138:    t15 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB140;

LAB139:    *((unsigned int *)t31) = 1;
    goto LAB140;

LAB142:    xsi_set_current_line(98, ng0);

LAB145:    xsi_set_current_line(99, ng0);
    t20 = ((char*)((ng15)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t20, 0, 0, 1);
    goto LAB144;

LAB148:    t15 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB150;

LAB152:    xsi_set_current_line(103, ng0);

LAB155:    xsi_set_current_line(104, ng0);
    t20 = ((char*)((ng15)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t20, 0, 0, 1);
    goto LAB154;

}


extern void work_m_05089402895023779512_0886308060_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_05089402895023779512_0886308060", "isim/cpu_tb_isim_beh.exe.sim/work/m_05089402895023779512_0886308060.didat");
	xsi_register_executes(pe);
}
