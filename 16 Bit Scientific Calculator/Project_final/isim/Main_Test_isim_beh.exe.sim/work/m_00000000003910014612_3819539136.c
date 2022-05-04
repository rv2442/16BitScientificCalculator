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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Xilinx_XIE/Project_final/Divide.v";
static unsigned int ng1[] = {10U, 0U};
static int ng2[] = {1000, 0};
static int ng3[] = {100, 0};
static int ng4[] = {10, 0};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t12[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 65535U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 65535U);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_divide(t22, 16, t3, 16, t12, 16);
    t23 = (t0 + 4360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 65535U;
    t29 = t28;
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 15);
    t36 = (t0 + 4232);
    *((int *)t36) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_mod(t5, 32, t3, 16, t4, 16);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t5, 32, t2, 32);
    t7 = (t0 + 4424);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 65535U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 15);
    t20 = (t0 + 4248);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_34_2(char *t0)
{
    char t3[8];
    char t12[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 65535U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 65535U);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_divide(t22, 16, t3, 16, t12, 16);
    t23 = (t0 + 4488);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 65535U;
    t29 = t28;
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 15);
    t36 = (t0 + 4264);
    *((int *)t36) = 1;

LAB1:    return;
}

static void Cont_36_3(char *t0)
{
    char t3[8];
    char t13[8];
    char t17[8];
    char t18[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char t27[8];
    char t28[8];
    char t31[8];
    char t32[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t46[8];
    char t49[8];
    char t50[8];
    char t53[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t24;
    char *t25;
    char *t26;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t38;
    char *t39;
    char *t40;
    char *t43;
    char *t44;
    char *t47;
    char *t48;
    char *t51;
    char *t52;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t3, 32, t12, 32);
    t14 = (t0 + 1848U);
    t15 = *((char **)t14);
    t14 = (t0 + 1208U);
    t16 = *((char **)t14);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_mod(t17, 32, t15, 16, t16, 16);
    t14 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t17, 32, t14, 32);
    t19 = (t0 + 1208U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_divide(t21, 32, t18, 32, t20, 16);
    t19 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_multiply(t22, 32, t21, 32, t19, 32);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t13, 32, t22, 32);
    t24 = (t0 + 1848U);
    t25 = *((char **)t24);
    t24 = (t0 + 1208U);
    t26 = *((char **)t24);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_mod(t27, 32, t25, 16, t26, 16);
    t24 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_multiply(t28, 32, t27, 32, t24, 32);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_mod(t31, 32, t28, 32, t30, 16);
    t29 = ((char*)((ng1)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t31, 32, t29, 32);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_divide(t35, 32, t32, 32, t34, 16);
    t33 = ((char*)((ng4)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 32, t35, 32, t33, 32);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t23, 32, t36, 32);
    t38 = (t0 + 1848U);
    t39 = *((char **)t38);
    t38 = (t0 + 1208U);
    t40 = *((char **)t38);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_mod(t41, 32, t39, 16, t40, 16);
    t38 = ((char*)((ng1)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_multiply(t42, 32, t41, 32, t38, 32);
    t43 = (t0 + 1208U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_mod(t45, 32, t42, 32, t44, 16);
    t43 = ((char*)((ng1)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_multiply(t46, 32, t45, 32, t43, 32);
    t47 = (t0 + 1208U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_mod(t49, 32, t46, 32, t48, 16);
    t47 = ((char*)((ng1)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_multiply(t50, 32, t49, 32, t47, 32);
    t51 = (t0 + 1208U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_divide(t53, 32, t50, 32, t52, 16);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t37, 32, t53, 32);
    t51 = (t0 + 4552);
    t55 = (t51 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 65535U;
    t60 = t59;
    t61 = (t54 + 4);
    t62 = *((unsigned int *)t54);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t51, 0, 15);
    t67 = (t0 + 4280);
    *((int *)t67) = 1;

LAB1:    return;
}


extern void work_m_00000000003910014612_3819539136_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_33_1,(void *)Cont_34_2,(void *)Cont_36_3};
	xsi_register_didat("work_m_00000000003910014612_3819539136", "isim/Main_Test_isim_beh.exe.sim/work/m_00000000003910014612_3819539136.didat");
	xsi_register_executes(pe);
}
