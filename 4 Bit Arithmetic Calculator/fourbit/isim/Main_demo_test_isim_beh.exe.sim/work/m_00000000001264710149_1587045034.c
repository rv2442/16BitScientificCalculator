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
static const char *ng0 = "E:/Xilinx_XIE/fourbit/Main_Demo.v";
static int ng1[] = {1, 0};
static int ng2[] = {4, 0};
static int ng3[] = {0, 0};
static int ng4[] = {7, 0};
static int ng5[] = {5, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};



static void Always_64_0(char *t0)
{
    char t9[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6952);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);

LAB20:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t7 = (t0 + 4488);
    t8 = (t0 + 4488);
    t19 = (t8 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    t22 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t16 + 4);
    t24 = *((unsigned int *)t23);
    t6 = (!(t24));
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t6 && t27);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    t4 = (t0 + 4488);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t9, t16, t17, ((int*)(t8)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t9 + 4);
    t10 = *((unsigned int *)t21);
    t6 = (!(t10));
    t22 = (t16 + 4);
    t11 = *((unsigned int *)t22);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t23 = (t17 + 4);
    t12 = *((unsigned int *)t23);
    t31 = (!(t12));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB19;

LAB9:    xsi_set_current_line(75, ng0);

LAB25:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t7 = (t0 + 4488);
    t8 = (t0 + 4488);
    t19 = (t8 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t16 + 4);
    t24 = *((unsigned int *)t23);
    t6 = (!(t24));
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t6 && t27);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    t4 = (t0 + 4488);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t16, t17, ((int*)(t8)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t9 + 4);
    t10 = *((unsigned int *)t21);
    t6 = (!(t10));
    t22 = (t16 + 4);
    t11 = *((unsigned int *)t22);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t23 = (t17 + 4);
    t12 = *((unsigned int *)t23);
    t31 = (!(t12));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB19;

LAB11:    xsi_set_current_line(83, ng0);

LAB30:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB19;

LAB13:    xsi_set_current_line(90, ng0);

LAB31:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t7 = (t0 + 4488);
    t8 = (t0 + 4488);
    t19 = (t8 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t16 + 4);
    t24 = *((unsigned int *)t23);
    t6 = (!(t24));
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t6 && t27);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    t4 = (t0 + 4488);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t16, t17, ((int*)(t8)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t9 + 4);
    t10 = *((unsigned int *)t21);
    t6 = (!(t10));
    t22 = (t16 + 4);
    t11 = *((unsigned int *)t22);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t23 = (t17 + 4);
    t12 = *((unsigned int *)t23);
    t31 = (!(t12));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB19;

LAB15:    xsi_set_current_line(98, ng0);

LAB36:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB19;

LAB21:    t33 = *((unsigned int *)t18);
    t34 = (t33 + 0);
    t35 = *((unsigned int *)t16);
    t36 = *((unsigned int *)t17);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t7, t9, t34, *((unsigned int *)t17), t38);
    goto LAB22;

LAB23:    t13 = *((unsigned int *)t17);
    t34 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t16);
    t37 = (t14 - t15);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t3, t2, t34, *((unsigned int *)t16), t38);
    goto LAB24;

LAB26:    t33 = *((unsigned int *)t18);
    t34 = (t33 + 0);
    t35 = *((unsigned int *)t16);
    t36 = *((unsigned int *)t17);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t7, t9, t34, *((unsigned int *)t17), t38);
    goto LAB27;

LAB28:    t13 = *((unsigned int *)t17);
    t34 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t16);
    t37 = (t14 - t15);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t3, t2, t34, *((unsigned int *)t16), t38);
    goto LAB29;

LAB32:    t33 = *((unsigned int *)t18);
    t34 = (t33 + 0);
    t35 = *((unsigned int *)t16);
    t36 = *((unsigned int *)t17);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t7, t9, t34, *((unsigned int *)t17), t38);
    goto LAB33;

LAB34:    t13 = *((unsigned int *)t17);
    t34 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t16);
    t37 = (t14 - t15);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t3, t2, t34, *((unsigned int *)t16), t38);
    goto LAB35;

}

static void Cont_115_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 6968);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_116_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = (t0 + 7144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 255U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 7);
    t19 = (t0 + 6984);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Cont_117_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = (t0 + 7208);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 255U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 7);
    t19 = (t0 + 7000);
    *((int *)t19) = 1;

LAB1:    return;
}


extern void work_m_00000000001264710149_1587045034_init()
{
	static char *pe[] = {(void *)Always_64_0,(void *)Cont_115_1,(void *)Cont_116_2,(void *)Cont_117_3};
	xsi_register_didat("work_m_00000000001264710149_1587045034", "isim/Main_demo_test_isim_beh.exe.sim/work/m_00000000001264710149_1587045034.didat");
	xsi_register_executes(pe);
}
