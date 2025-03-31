/**
*   @file           Pwm.c
*   @version        1.0.0
*
*   @brief          SDK Pwm - Pwm high level interface implementation.
*   @details        Pwm high level interface implementation.
*
*   @addtogroup     PWM_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : SDK
*   Platform             : ARM
*   Peripheral           : Etmr
*   Dependencies         : none
*
*   SW Version           : 1.0.0
*   Build Version        : YTM32B1LE0X_SDK_1_0_0_RTM_2025_02_22
*
*   (c) Copyright Mamba
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*===============================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
===============================================================================================*/

#include "Pwm.h"



/*===============================================================================================
*                                        SOURCE FILE VERSION INFORMATION
===============================================================================================*/

#define PWM_SW_MAJOR_VERSION_C                  1
#define PWM_SW_MINOR_VERSION_C                  0
#define PWM_SW_PATCH_VERSION_C                  0


/*===============================================================================================
*                                       GLOBAL FUNCTIONS
===============================================================================================*/
/**
* @brief        This function initializes the Pwm driver.
* @details      The function Pwm_Init shall initialize all internals variables and the used
*               PWM structure of the microcontroller according to the parameters
*               specified in ConfigPtr.
*               If the duty cycle parameter equals:
*
*                   - 0% or 100% : Then the PWM output signal shall be in the state according
*                       to the configured polarity parameter;
*
*                   - >0% and <100%: Then the PWM output signal shall be modulated according
*                       to parameters period, duty cycle and configured polarity.
*
*               The function Pwm_SetDutyCycle shall update the duty cycle always at the end
*               of the period if supported by the implementation and configured
*               with PwmDutycycleUpdatedEndperiod.
*
*               The driver shall avoid spikes on the PWM output signal when updating
*               the PWM period and duty.
*
*               If development error detection for the Pwm module is enabled, the PWM functions
*               shall check the channel class type and raise development error PWM_E_PERIOD_UNCHANGEABLE
*               if the PWM channel is not declared as a variable period type.
*
*               If development error detection for the Pwm module is enabled, the PWM functions
*               shall check the parameter ChannelNumber and raise development error PWM_E_PARAM_CHANNEL
*               if the parameter ChannelNumber is invalid.
*
*               If development error detection for the Pwm module is enabled, when a development
*               error occurs, the corresponding PWM function shall:
*
*                   - Report the error to the Development Error Tracer.
*                   - Skip the desired functionality in order to avoid any corruptions of
*                       data or hardware registers (this means leave the function without any actions).
*                   - Return pwm level low for the function Pwm_GetOutputState.
*
*               The function Pwm_Init shall disable all notifications. The reason is that the users
*               of these notifications may not be ready. They can call Pwm_EnableNotification
*               to start notifications.
*
*               The function Pwm_Init shall only initialize the configured resources and shall not touch
*               resources that are not configured in the configuration file.
*
*               If the PwmDevErorDetect switch is enabled, API parameter checking is enabled.
*               The detailed description of the detected errors can be found in chapter
*               Error classification and chapter API specification (see PWM_SWS).
*
*               If development error detection is enabled, calling the routine Pwm_Init
*               while the PWM driver and hardware are already initialized will cause a
*               development error PWM_E_ALREADY_INITIALIZED.
*               The desired functionality shall be left without any action.
*
*               For pre-compile and link time configuration variants, a NULL pointer shall be passed
*               to the initialization routine. In this case the check for this NULL pointer
*               has to be omitted.
*
*               If development error detection for the Pwm module is enabled, if any function
*               (except Pwm_Init) is called before Pwm_Init has been called, the called function
*               shall raise development error PWM_E_UNINIT.
*
* @param[in]    ConfigPtr       pointer to PWM top configuration structure
*
*/
void Pwm_Init(const Pwm_ConfigType *ConfigPtr)
{
    
}

void Pwm_DeInit(void)
{
    
}

void Pwm_SetDutyCycle(uint8_t ChannelNumber, uint16_t u16DutyCycle)
{

}

void Pwm_SetPeriodAndDuty(uint8_t ChannelNumber, uint16_t Period, uint16_t u16DutyCycle)
{

}

void Pwm_SetOutputToIdle(uint8_t ChannelNumber)
{

}


#ifdef __cplusplus
}
#endif

/** @} */
