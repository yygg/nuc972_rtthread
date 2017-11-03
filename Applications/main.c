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
int main(void *parameter)
{
	printf("Hello RT-Thread !!!\n");
	

	return 0;
}


/*@}*/
