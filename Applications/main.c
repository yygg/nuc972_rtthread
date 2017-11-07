/*
 * File      : main.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author		Notes
 */

#include <rtthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

extern void rt_hw_led_set(rt_uint8_t value);
extern void MainTask(void);

void gui_task_entry(void *param)
{
    MainTask();
}

int gui_task_start(void)
{
    rt_thread_t tid;
    tid = rt_thread_create("guiDemo",
                           gui_task_entry, RT_NULL,
                           (16 * 1024),
                           20,
                           10);
    if (tid != RT_NULL)
        rt_thread_startup(tid);

    return 0;
}

int main(void *parameter)
{
	printf("Hello RT-Thread !!!\n");
	
	gui_task_start();
	return 0;
}


/*@}*/
