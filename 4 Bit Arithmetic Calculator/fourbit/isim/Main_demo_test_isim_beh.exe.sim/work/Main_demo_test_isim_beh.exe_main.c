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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000312996322_1771009476_init();
    work_m_00000000000312996322_1088501749_init();
    work_m_00000000000312996322_4057747287_init();
    work_m_00000000000495998535_0245807600_init();
    work_m_00000000001264710149_1587045034_init();
    work_m_00000000000168677859_3636785220_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000168677859_3636785220");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
