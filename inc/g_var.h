/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __G_VAR_H
#define __G_VAR_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Export Includes ----------------------------------------------------------*/
#include <stdint.h>
#include "main.h"

/* Export typedef -----------------------------------------------------------*/

/* Export define ------------------------------------------------------------*/
#define USART1_SEND_BUFF_SIZE       (256U)

/* Export macro -------------------------------------------------------------*/

/* Export variables ---------------------------------------------------------*/
extern uint8_t g_usart1_send_buff[USART1_SEND_BUFF_SIZE];
extern uint8_t g_test1;
extern uint8_t g_test2;
extern uint8_t g_test3;
/* Export function prototypes -----------------------------------------------*/

/* Export functions ---------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* __G_VAR_H */
