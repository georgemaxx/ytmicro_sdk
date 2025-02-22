/**
*   @file           Pwm.c
*   @implements     Pwm.c_Artifact
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

/*===============================================================================================
*                                        SOURCE FILE VERSION INFORMATION
===============================================================================================*/


#define PWM_VENDOR_ID_C                         43
#define PWM_AR_RELEASE_MAJOR_VERSION_C          4
#define PWM_AR_RELEASE_MINOR_VERSION_C          0
/*
* @violates @ref Pwm_C_REF_3 Identifier clash.
*/
/* @violates @ref Pwm_C_REF_6 Identifier exceeds 31 chars. */
#define PWM_AR_RELEASE_REVISION_VERSION_C       3
#define PWM_SW_MAJOR_VERSION_C                  1
#define PWM_SW_MINOR_VERSION_C                  0
#define PWM_SW_PATCH_VERSION_C                  5



/**
* @brief            This function initializes all internals variables of the driver.
* @details          This function will initialize with default values all Ftm submodule registers.
*                   Will loop through all Ftm channels in the configuration structure and will
*                   setup required submodules for each channel
*
*
* @param[in]        pFtmIpConfig  Pointer to Ftm channels configuration structure
*
*
* @return           void
*
*/
void Pwm_Init(void)
{
    // Initialize PWM
    // ...
}




#ifdef __cplusplus
}
#endif

/** @} */
