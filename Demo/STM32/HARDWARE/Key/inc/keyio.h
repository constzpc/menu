/**
  **********************************************************************************************************************
  * @file    keyio.h
  * @brief   该文件提供按键硬件接口实现功能函数原型
  * @author  周鹏程    any question please send mail to const_zpc@163.com
  * @version V3.0.0
  * @date    2022-03-27
  **********************************************************************************************************************
  *
  **********************************************************************************************************************
  */

/* Define to prevent recursive inclusion -----------------------------------------------------------------------------*/
#ifndef __KEYIO_H
#define __KEYIO_H

/* Includes ----------------------------------------------------------------------------------------------------------*/
#include <stdint.h>

/* Exported types ----------------------------------------------------------------------------------------------------*/

/**
  * @brief  输入/模拟按键名称枚举定义
  * @note   可参考原理图中的部分命名
  */

typedef enum
{
    /* 枚举定义从 0 开始, 例如 IO_KEY_0 = 0, */
    IO_KEY_0 = 0,
    IO_KEY_1,
    IO_KEY_UP,
    
    /* 勿删除,用来统计按键的数目 */
    IO_KEY_MAX_NUM
} IoKeyType_e;


/**
  * @brief  KEY开关枚举定义
  */
typedef enum{
    IO_KEY_OFF = 0,                         	/*!< (0)断开(无动作) */
    IO_KEY_ON = !IO_KEY_OFF                     /*!< (1)闭合(有动作) */
} IoKeyState_e;


/* Exported macro ----------------------------------------------------------------------------------------------------*/
/* Exported constants ------------------------------------------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------------------------------------------------*/

extern void IoKey_Init(void);
extern IoKeyState_e IoKey_Read(IoKeyType_e eKey);
extern void IoKey_Scan(void);
    
    
#endif // __KEYIO_H
