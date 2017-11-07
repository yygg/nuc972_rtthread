/*
 * File      : board.h
 * This file is part of Suzhou Allen
 * COPYRIGHT (C) 2006 - 2017, Allen Development Team
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017Äê11ÔÂ3ÈÕ     Urey      first version
 */
#ifndef _BOARD_H_
#define _BOARD_H_

#ifndef __ASSEMBLY__

/*@{*/
#if defined(__CC_ARM)
    extern int Image$$ER_RAM1$$ZI$$Base;
    extern int Image$$ER_RAM1$$ZI$$Length;
    extern int Image$$ER_RAM1$$ZI$$Limit;

#	define BOARD_HEAP_START        (void*)&Image$$ER_RAM1$$ZI$$Limit

#elif (defined (__GNUC__))
extern unsigned char 			__bss_start__;
extern unsigned char 			__bss_end__;

#	define BOARD_HEAP_START 		(void*)&__bss_end__
#endif
#define BOARD_HEAP_END           (void*)(0x04000000 - (16 * 1024 * 1024))

#endif


/*
 * UART config...
 */
#define BOARD_USING_UART0

/*
 * SPI config...
 */
#define BOARD_USING_SPI0

/* I2C config */
//#define BOARD_USING_I2C0
//#define BOARD_USING_I2C1
#define BOARD_USING_I2C0_SW
#define BOARD_USING_I2C1_SW

/*
 * SDIO config
 */
#define BOARD_USING_SDIO0
#define BOARD_USING_SDIO1
/*
 * ETH config
 */
#define BOARD_USING_ETH0
//#define BOARD_USING_ETH1

//#define ETH_VRAM_ADDR   (0x03E00000)
/*
 *
 */
//#define APPFS_USING_SPIFFS


/* LCD config */
#define LCD_VRAM_SIZE   (2 * 1024 * 1024)
#define LCD_VRAM_ADDR   (0x04000000 - LCD_VRAM_SIZE)
#define LCD_VRAM_SADDR  (0x80000000 | LCD_VRAM_ADDR)

#define LCD_VFB_SIZE    (4 * 1024 * 1024)
#define LCD_VFB_ADDR    (LCD_VRAM_ADDR - LCD_VFB_SIZE)
#define LCD_VFB_SADDR   (0x80000000 | LCD_VFB_ADDR)

#endif /* _BSP_NUC970_DEVBOARD_DRIVERS_BOARD_H_ */
