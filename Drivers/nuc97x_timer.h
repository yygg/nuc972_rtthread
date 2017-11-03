/*
 * File      : nuc97x_timer.h
 * This file is part of Suzhou Allen
 * COPYRIGHT (C) 2006 - 2017, Allen Development Team
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017Äê11ÔÂ3ÈÕ     Urey      first version
 */

#ifndef _NUC970_TIMER_H_
#define _NUC970_TIMER_H_

/* Define constants for use timer in service parameters.  */
#define TIMER0            0     /*!< Select Timer0 */
#define TIMER1            1     /*!< Select Timer1 */

#define ONE_SHOT_MODE     0     /*!< Timer Operation Mode - One Shot */
#define PERIODIC_MODE     1     /*!< Timer Operation Mode - Periodic */
#define TOGGLE_MODE       2     /*!< Timer Operation Mode - Toggle */

UINT32 sysGetTicks(INT32 nTimeNo);
INT32 sysResetTicks(INT32 nTimeNo);
INT32 sysUpdateTickCount(INT32 nTimeNo, UINT32 uCount);
INT32 sysSetTimerReferenceClock(INT32 nTimeNo, UINT32 uClockRate);
INT32 sysStartTimer(INT32 nTimeNo, UINT32 uTicksPerSecond, INT32 nOpMode);
INT32 sysStopTimer(INT32 nTimeNo);
INT32 sysSetTimerEvent(INT32 nTimeNo, UINT32 uTimeTick, PVOID pvFun);
void sysClearTimerEvent(INT32 nTimeNo, UINT32 uTimeEventNo);


#endif /* _NUC970_TIMER_H_ */
