/*******************************************************************************
* File Name: SPI_miso_s.c  
* Version 2.0
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "SPI_miso_s.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        SPI_miso_s_PC =   (SPI_miso_s_PC & \
                                (uint32)(~(uint32)(SPI_miso_s_DRIVE_MODE_IND_MASK << (SPI_miso_s_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (SPI_miso_s_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: SPI_miso_s_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void SPI_miso_s_Write(uint8 value) 
{
    uint8 drVal = (uint8)(SPI_miso_s_DR & (uint8)(~SPI_miso_s_MASK));
    drVal = (drVal | ((uint8)(value << SPI_miso_s_SHIFT) & SPI_miso_s_MASK));
    SPI_miso_s_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: SPI_miso_s_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  SPI_miso_s_DM_STRONG     Strong Drive 
*  SPI_miso_s_DM_OD_HI      Open Drain, Drives High 
*  SPI_miso_s_DM_OD_LO      Open Drain, Drives Low 
*  SPI_miso_s_DM_RES_UP     Resistive Pull Up 
*  SPI_miso_s_DM_RES_DWN    Resistive Pull Down 
*  SPI_miso_s_DM_RES_UPDWN  Resistive Pull Up/Down 
*  SPI_miso_s_DM_DIG_HIZ    High Impedance Digital 
*  SPI_miso_s_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void SPI_miso_s_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(SPI_miso_s__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: SPI_miso_s_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro SPI_miso_s_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 SPI_miso_s_Read(void) 
{
    return (uint8)((SPI_miso_s_PS & SPI_miso_s_MASK) >> SPI_miso_s_SHIFT);
}


/*******************************************************************************
* Function Name: SPI_miso_s_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 SPI_miso_s_ReadDataReg(void) 
{
    return (uint8)((SPI_miso_s_DR & SPI_miso_s_MASK) >> SPI_miso_s_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(SPI_miso_s_INTSTAT) 

    /*******************************************************************************
    * Function Name: SPI_miso_s_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 SPI_miso_s_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(SPI_miso_s_INTSTAT & SPI_miso_s_MASK);
		SPI_miso_s_INTSTAT = maskedStatus;
        return maskedStatus >> SPI_miso_s_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
