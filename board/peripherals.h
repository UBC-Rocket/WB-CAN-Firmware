/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_dspi.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* BOARD_InitPeripherals defines for SPI0 */
/* Definition of peripheral ID */
#define SPI0_PERIPHERAL SPI0
/* Definition of the clock source */
#define SPI0_CLOCK_SOURCE DSPI0_CLK_SRC
/* Definition of the clock source frequency */
#define SPI0_CLK_FREQ CLOCK_GetFreq(SPI0_CLOCK_SOURCE)

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const dspi_master_config_t SPI0_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
