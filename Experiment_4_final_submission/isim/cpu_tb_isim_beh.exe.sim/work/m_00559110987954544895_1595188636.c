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
static const char *ng0 = "/home/anand/EE2003/Experiment_4_final_submission/Stall_signal_generator.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Always_28_0(char *t0)
{
    char t6[8];
    char t13[8];
    char t35[8];
    char t47[8];
    char t57[8];
    char t67[8];
    char t83[8];
    char t96[8];
    char t106[8];
    char t116[8];
    char t132[8];
    char t140[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    int t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t13) = 1;

LAB9:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 3);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 3);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 15U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 15U);

LAB14:    t45 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t35, 4, t45, 4);
    if (t46 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t46 = xsi_vlog_unsigned_case_compare(t35, 4, t2, 4);
    if (t46 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng4)));
    t159 = xsi_vlog_unsigned_case_compare(t35, 4, t3, 4);
    if (t159 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng5)));
    t163 = xsi_vlog_unsigned_case_compare(t35, 4, t4, 4);
    if (t163 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng1)));
    t46 = xsi_vlog_unsigned_case_compare(t35, 4, t2, 4);
    if (t46 == 1)
        goto LAB23;

LAB24:    t3 = ((char*)((ng4)));
    t159 = xsi_vlog_unsigned_case_compare(t35, 4, t3, 4);
    if (t159 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB12;

LAB15:    xsi_set_current_line(33, ng0);
    t48 = (t0 + 1048U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 15);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 15);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 31U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 31U);
    t58 = (t0 + 1208U);
    t59 = *((char **)t58);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t60 = (t59 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (t61 >> 7);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 7);
    *((unsigned int *)t58) = t64;
    t65 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t65 & 31U);
    t66 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t66 & 31U);
    memset(t67, 0, 8);
    t68 = (t47 + 4);
    t69 = (t57 + 4);
    t70 = *((unsigned int *)t47);
    t71 = *((unsigned int *)t57);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB31;

LAB28:    if (t79 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t67) = 1;

LAB31:    memset(t83, 0, 8);
    t84 = (t67 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t84) != 0)
        goto LAB34;

LAB35:    t91 = (t83 + 4);
    t92 = *((unsigned int *)t83);
    t93 = (!(t92));
    t94 = *((unsigned int *)t91);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB36;

LAB37:    memcpy(t140, t83, 8);

LAB38:    t168 = (t140 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t140);
    t172 = (t171 & t170);
    t173 = (t172 != 0);
    if (t173 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB27;

LAB17:    goto LAB15;

LAB19:    goto LAB15;

LAB21:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1048U);
    t14 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t15 = (t14 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (t7 >> 15);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t15);
    t10 = (t9 >> 15);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 31U);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    memset(t13, 0, 8);
    t28 = (t13 + 4);
    t36 = (t29 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (t16 >> 7);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t36);
    t19 = (t18 >> 7);
    *((unsigned int *)t28) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 31U);
    t21 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t21 & 31U);
    memset(t47, 0, 8);
    t37 = (t6 + 4);
    t38 = (t13 + 4);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t13);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t37);
    t26 = *((unsigned int *)t38);
    t27 = (t25 ^ t26);
    t30 = (t24 | t27);
    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t38);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t39 = (t30 & t34);
    if (t39 != 0)
        goto LAB57;

LAB54:    if (t33 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t47) = 1;

LAB57:    t48 = (t47 + 4);
    t40 = *((unsigned int *)t48);
    t41 = (~(t40));
    t42 = *((unsigned int *)t47);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB27;

LAB23:    goto LAB21;

LAB25:    goto LAB21;

LAB30:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t83) = 1;
    goto LAB35;

LAB34:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB35;

LAB36:    t97 = (t0 + 1048U);
    t98 = *((char **)t97);
    memset(t96, 0, 8);
    t97 = (t96 + 4);
    t99 = (t98 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (t100 >> 20);
    *((unsigned int *)t96) = t101;
    t102 = *((unsigned int *)t99);
    t103 = (t102 >> 20);
    *((unsigned int *)t97) = t103;
    t104 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t104 & 31U);
    t105 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t105 & 31U);
    t107 = (t0 + 1208U);
    t108 = *((char **)t107);
    memset(t106, 0, 8);
    t107 = (t106 + 4);
    t109 = (t108 + 4);
    t110 = *((unsigned int *)t108);
    t111 = (t110 >> 7);
    *((unsigned int *)t106) = t111;
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 7);
    *((unsigned int *)t107) = t113;
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 31U);
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 31U);
    memset(t116, 0, 8);
    t117 = (t96 + 4);
    t118 = (t106 + 4);
    t119 = *((unsigned int *)t96);
    t120 = *((unsigned int *)t106);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB42;

LAB39:    if (t128 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t116) = 1;

LAB42:    memset(t132, 0, 8);
    t133 = (t116 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t116);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t133) != 0)
        goto LAB45;

LAB46:    t141 = *((unsigned int *)t83);
    t142 = *((unsigned int *)t132);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = (t83 + 4);
    t145 = (t132 + 4);
    t146 = (t140 + 4);
    t147 = *((unsigned int *)t144);
    t148 = *((unsigned int *)t145);
    t149 = (t147 | t148);
    *((unsigned int *)t146) = t149;
    t150 = *((unsigned int *)t146);
    t151 = (t150 != 0);
    if (t151 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB38;

LAB41:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t132) = 1;
    goto LAB46;

LAB45:    t139 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB46;

LAB47:    t152 = *((unsigned int *)t140);
    t153 = *((unsigned int *)t146);
    *((unsigned int *)t140) = (t152 | t153);
    t154 = (t83 + 4);
    t155 = (t132 + 4);
    t156 = *((unsigned int *)t154);
    t157 = (~(t156));
    t158 = *((unsigned int *)t83);
    t159 = (t158 & t157);
    t160 = *((unsigned int *)t155);
    t161 = (~(t160));
    t162 = *((unsigned int *)t132);
    t163 = (t162 & t161);
    t164 = (~(t159));
    t165 = (~(t163));
    t166 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t166 & t164);
    t167 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t167 & t165);
    goto LAB49;

LAB50:    xsi_set_current_line(34, ng0);

LAB53:    xsi_set_current_line(35, ng0);
    t174 = (t0 + 1368U);
    t175 = *((char **)t174);
    t174 = (t0 + 1768);
    xsi_vlogvar_assign_value(t174, t175, 0, 0, 1);
    goto LAB52;

LAB56:    t45 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(38, ng0);

LAB61:    xsi_set_current_line(39, ng0);
    t49 = (t0 + 1368U);
    t50 = *((char **)t49);
    t49 = (t0 + 1768);
    xsi_vlogvar_assign_value(t49, t50, 0, 0, 1);
    goto LAB60;

}


extern void work_m_00559110987954544895_1595188636_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00559110987954544895_1595188636", "isim/cpu_tb_isim_beh.exe.sim/work/m_00559110987954544895_1595188636.didat");
	xsi_register_executes(pe);
}
