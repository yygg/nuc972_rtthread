/*
 * File      : nuc970_sys.h
 * This file is part of Suzhou Allen
 * COPYRIGHT (C) 2006 - 2017, Allen Development Team
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017Äê11ÔÂ3ÈÕ     Urey      first version
 */

#ifndef DRIVERS_NUC97X_SYS_H_
#define DRIVERS_NUC97X_SYS_H_

#ifdef __cplusplus
extern "C" {
#endif

/** \brief  Structure type of clock source
 */
typedef enum CLKn {

    SYS_UPLL     = 1,   /*!< UPLL clock */
    SYS_APLL     = 2,   /*!< APLL clock */
    SYS_SYSTEM   = 3,   /*!< System clock */
    SYS_HCLK1    = 4,   /*!< HCLK1 clock */
    SYS_HCLK234  = 5,   /*!< HCLK234 clock */
    SYS_PCLK     = 6,   /*!< PCLK clock */
    SYS_CPU      = 7,   /*!< CPU clock */

}  CLK_Type;

INT32 sysGetPLL(UINT32 reg);
UINT32 sysGetClock(CLK_Type clk);

#ifdef __cplusplus
}
#endif

#endif /* DRIVERS_NUC97X_SYS_H_ */
