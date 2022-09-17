#ifndef __BITBAND_H_
#define __BITBAND_H_

#include "main.h"

OK
/* 位带别名区计算公式 */
#define BITBAND(addr, bit)	(*(volatile unsigned long*)((addr & 0xF0000000U) + 0x2000000U + ((addr & 0xFFFFFFU) << 5U) + (bit << 2U)))


/* 输出寄存器 */
#define GPIOA_ODR_ADDR		(GPIOA_BASE + 0x14U)
#define GPIOB_ODR_ADDR		(GPIOB_BASE + 0x14U)
#define GPIOC_ODR_ADDR		(GPIOC_BASE + 0x14U)
#define GPIOD_ODR_ADDR		(GPIOD_BASE + 0x14U)
#define GPIOE_ODR_ADDR		(GPIOE_BASE + 0x14U)
#define GPIOF_ODR_ADDR		(GPIOF_BASE + 0x14U)
#define GPIOG_ODR_ADDR		(GPIOG_BASE + 0x14U)
#define GPIOH_ODR_ADDR		(GPIOH_BASE + 0x14U)
#define GPIOI_ODR_ADDR		(GPIOI_BASE + 0x14U)



/* 输入寄存器 */
#define GPIOA_IDR_ADDR		(GPIOA_BASE + 0x10U)
#define GPIOB_IDR_ADDR		(GPIOB_BASE + 0x10U)
#define GPIOC_IDR_ADDR		(GPIOC_BASE + 0x10U)
#define GPIOD_IDR_ADDR		(GPIOD_BASE + 0x10U)
#define GPIOE_IDR_ADDR		(GPIOE_BASE + 0x10U)
#define GPIOF_IDR_ADDR		(GPIOF_BASE + 0x10U)
#define GPIOG_IDR_ADDR		(GPIOG_BASE + 0x10U)
#define GPIOH_IDR_ADDR		(GPIOH_BASE + 0x10U)
#define GPIOI_IDR_ADDR		(GPIOI_BASE + 0x10U)


/* GPIO输出 */
#define PAout(n)		BITBAND(GPIOA_ODR_ADDR, n)
#define PBout(n)		BITBAND(GPIOB_ODR_ADDR, n)
#define PCout(n)		BITBAND(GPIOC_ODR_ADDR, n)
#define PDout(n)		BITBAND(GPIOD_ODR_ADDR, n)
#define PEout(n)		BITBAND(GPIOE_ODR_ADDR, n)
#define PFout(n)		BITBAND(GPIOF_ODR_ADDR, n)
#define PGout(n)		BITBAND(GPIOG_ODR_ADDR, n)
#define PHout(n)		BITBAND(GPIOH_ODR_ADDR, n)
#define PIout(n)		BITBAND(GPIOI_ODR_ADDR, n)


/* GPIO输入 */
#define PAin(n)		BITBAND(GPIOA_IDR_ADDR, n)
#define PBin(n)		BITBAND(GPIOB_IDR_ADDR, n)
#define PCin(n)		BITBAND(GPIOC_IDR_ADDR, n)
#define PDin(n)		BITBAND(GPIOD_IDR_ADDR, n)
#define PEin(n)		BITBAND(GPIOE_IDR_ADDR, n)
#define PFin(n)		BITBAND(GPIOF_IDR_ADDR, n)
#define PGin(n)		BITBAND(GPIOG_IDR_ADDR, n)
#define PHin(n)		BITBAND(GPIOH_IDR_ADDR, n)
#define PIin(n)		BITBAND(GPIOI_IDR_ADDR, n)

#endif /* __BITBAND_H_ */
