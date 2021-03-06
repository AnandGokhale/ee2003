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
    work_m_17297368807378763691_2035480523_init();
    work_m_09433616690402957690_2937920168_init();
    work_m_07772569352167527493_0886308060_init();
    work_m_09281348134059235590_2951351297_init();
    work_m_07890547161536360580_1352674679_init();
    work_m_01351289791521249785_2731210154_init();
    work_m_13499197875876814993_1912994691_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_13499197875876814993_1912994691");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
