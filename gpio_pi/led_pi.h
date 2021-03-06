
	#ifndef __LED_PI_H__
	#define __LED_PI_H__

/******************************************************************************************************
* 函数(Function)：       led_Init()
* 功能(Description)：    初始化led
* 调用函数（Calls）： 
* 输入参数（parameter）：
* 返回数值(return)：    return = -1：失败
                        return = 0：成功
* 其他(Others):     配置GPIO，用于输入模式
********************************************************************************************************/ 
int led_Init();

/******************************************************************************************************
* 函数(Function)：           camera_led_Set(unsigned int led)
* 功能(Description)：          控制补光led
* 调用函数（Calls）： 
* 输入参数（parameter）： unsigned int led：开关（0,1）
* 返回数值(return)：   return -1:失败
                       其他，成功。  
* 其他(Others):    
********************************************************************************************************/ 
int camera_led_Set(unsigned int led);

/******************************************************************************************************
* 函数(Function)：            led_Show(unsigned int &Mode)
* 功能(Description)：          显示led
* 调用函数（Calls）： 
* 输入参数（parameter）： unsigned int &Mode：系统模式
* 返回数值(return)：   无
* 其他(Others):    led可以调节
********************************************************************************************************/ 
void led_Show(unsigned int Mode);

#endif