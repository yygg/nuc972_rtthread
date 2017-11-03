/**
  ******************************************************************************
  * @file    task_blink.c
  * @author  Urey
  * @version V1.0.0
  * @date    2017Äê2ÔÂ7ÈÕ
  * @brief   TODO
  ******************************************************************************         
**/ 
#include <rtthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "nuc97x.h"
#include "nuc97x_gpio.h"


void task_blink_entry(void *parameter)
{
    rt_uint8_t bcount = 0;
    rt_uint8_t  bValue;
    rt_hw_led_init();

    while (1)
    {
        rt_hw_led_set(bcount++);
        rt_thread_delay(100);
    }
}

int task_blink_init(void)
{
    rt_thread_t tid;

    tid = rt_thread_create("blink",
                           task_blink_entry, RT_NULL,
                           512,
                           RT_THREAD_PRIORITY_MAX - 1,
                           20);

    if (tid != RT_NULL)
        rt_thread_startup(tid);

    return 0;
}
INIT_ENV_EXPORT(task_blink_init);
