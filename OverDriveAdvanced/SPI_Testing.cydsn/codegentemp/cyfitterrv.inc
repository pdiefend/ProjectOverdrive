    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; SPI_miso_s
SPI_miso_s__0__DM__MASK EQU 0x38000
SPI_miso_s__0__DM__SHIFT EQU 15
SPI_miso_s__0__DR EQU CYREG_PRT0_DR
SPI_miso_s__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SPI_miso_s__0__HSIOM_MASK EQU 0x00F00000
SPI_miso_s__0__HSIOM_SHIFT EQU 20
SPI_miso_s__0__INTCFG EQU CYREG_PRT0_INTCFG
SPI_miso_s__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_miso_s__0__MASK EQU 0x20
SPI_miso_s__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
SPI_miso_s__0__OUT_SEL_SHIFT EQU 10
SPI_miso_s__0__OUT_SEL_VAL EQU -1
SPI_miso_s__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_miso_s__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_miso_s__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_miso_s__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_miso_s__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_miso_s__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_miso_s__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_miso_s__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_miso_s__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_miso_s__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_miso_s__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_miso_s__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_miso_s__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_miso_s__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_miso_s__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_miso_s__0__PC EQU CYREG_PRT0_PC
SPI_miso_s__0__PC2 EQU CYREG_PRT0_PC2
SPI_miso_s__0__PORT EQU 0
SPI_miso_s__0__PS EQU CYREG_PRT0_PS
SPI_miso_s__0__SHIFT EQU 5
SPI_miso_s__DR EQU CYREG_PRT0_DR
SPI_miso_s__INTCFG EQU CYREG_PRT0_INTCFG
SPI_miso_s__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_miso_s__MASK EQU 0x20
SPI_miso_s__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_miso_s__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_miso_s__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_miso_s__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_miso_s__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_miso_s__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_miso_s__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_miso_s__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_miso_s__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_miso_s__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_miso_s__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_miso_s__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_miso_s__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_miso_s__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_miso_s__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_miso_s__PC EQU CYREG_PRT0_PC
SPI_miso_s__PC2 EQU CYREG_PRT0_PC2
SPI_miso_s__PORT EQU 0
SPI_miso_s__PS EQU CYREG_PRT0_PS
SPI_miso_s__SHIFT EQU 5

; SPI_mosi_s
SPI_mosi_s__0__DM__MASK EQU 0x7000
SPI_mosi_s__0__DM__SHIFT EQU 12
SPI_mosi_s__0__DR EQU CYREG_PRT0_DR
SPI_mosi_s__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SPI_mosi_s__0__HSIOM_MASK EQU 0x000F0000
SPI_mosi_s__0__HSIOM_SHIFT EQU 16
SPI_mosi_s__0__INTCFG EQU CYREG_PRT0_INTCFG
SPI_mosi_s__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_mosi_s__0__MASK EQU 0x10
SPI_mosi_s__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_mosi_s__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_mosi_s__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_mosi_s__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_mosi_s__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_mosi_s__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_mosi_s__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_mosi_s__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_mosi_s__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_mosi_s__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_mosi_s__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_mosi_s__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_mosi_s__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_mosi_s__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_mosi_s__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_mosi_s__0__PC EQU CYREG_PRT0_PC
SPI_mosi_s__0__PC2 EQU CYREG_PRT0_PC2
SPI_mosi_s__0__PORT EQU 0
SPI_mosi_s__0__PS EQU CYREG_PRT0_PS
SPI_mosi_s__0__SHIFT EQU 4
SPI_mosi_s__DR EQU CYREG_PRT0_DR
SPI_mosi_s__INTCFG EQU CYREG_PRT0_INTCFG
SPI_mosi_s__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_mosi_s__MASK EQU 0x10
SPI_mosi_s__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_mosi_s__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_mosi_s__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_mosi_s__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_mosi_s__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_mosi_s__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_mosi_s__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_mosi_s__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_mosi_s__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_mosi_s__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_mosi_s__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_mosi_s__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_mosi_s__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_mosi_s__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_mosi_s__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_mosi_s__PC EQU CYREG_PRT0_PC
SPI_mosi_s__PC2 EQU CYREG_PRT0_PC2
SPI_mosi_s__PORT EQU 0
SPI_mosi_s__PS EQU CYREG_PRT0_PS
SPI_mosi_s__SHIFT EQU 4

; SPI_SCB
SPI_SCB__BIST_CONTROL EQU CYREG_SCB1_BIST_CONTROL
SPI_SCB__BIST_DATA EQU CYREG_SCB1_BIST_DATA
SPI_SCB__CTRL EQU CYREG_SCB1_CTRL
SPI_SCB__EZ_DATA00 EQU CYREG_SCB1_EZ_DATA00
SPI_SCB__EZ_DATA01 EQU CYREG_SCB1_EZ_DATA01
SPI_SCB__EZ_DATA02 EQU CYREG_SCB1_EZ_DATA02
SPI_SCB__EZ_DATA03 EQU CYREG_SCB1_EZ_DATA03
SPI_SCB__EZ_DATA04 EQU CYREG_SCB1_EZ_DATA04
SPI_SCB__EZ_DATA05 EQU CYREG_SCB1_EZ_DATA05
SPI_SCB__EZ_DATA06 EQU CYREG_SCB1_EZ_DATA06
SPI_SCB__EZ_DATA07 EQU CYREG_SCB1_EZ_DATA07
SPI_SCB__EZ_DATA08 EQU CYREG_SCB1_EZ_DATA08
SPI_SCB__EZ_DATA09 EQU CYREG_SCB1_EZ_DATA09
SPI_SCB__EZ_DATA10 EQU CYREG_SCB1_EZ_DATA10
SPI_SCB__EZ_DATA11 EQU CYREG_SCB1_EZ_DATA11
SPI_SCB__EZ_DATA12 EQU CYREG_SCB1_EZ_DATA12
SPI_SCB__EZ_DATA13 EQU CYREG_SCB1_EZ_DATA13
SPI_SCB__EZ_DATA14 EQU CYREG_SCB1_EZ_DATA14
SPI_SCB__EZ_DATA15 EQU CYREG_SCB1_EZ_DATA15
SPI_SCB__EZ_DATA16 EQU CYREG_SCB1_EZ_DATA16
SPI_SCB__EZ_DATA17 EQU CYREG_SCB1_EZ_DATA17
SPI_SCB__EZ_DATA18 EQU CYREG_SCB1_EZ_DATA18
SPI_SCB__EZ_DATA19 EQU CYREG_SCB1_EZ_DATA19
SPI_SCB__EZ_DATA20 EQU CYREG_SCB1_EZ_DATA20
SPI_SCB__EZ_DATA21 EQU CYREG_SCB1_EZ_DATA21
SPI_SCB__EZ_DATA22 EQU CYREG_SCB1_EZ_DATA22
SPI_SCB__EZ_DATA23 EQU CYREG_SCB1_EZ_DATA23
SPI_SCB__EZ_DATA24 EQU CYREG_SCB1_EZ_DATA24
SPI_SCB__EZ_DATA25 EQU CYREG_SCB1_EZ_DATA25
SPI_SCB__EZ_DATA26 EQU CYREG_SCB1_EZ_DATA26
SPI_SCB__EZ_DATA27 EQU CYREG_SCB1_EZ_DATA27
SPI_SCB__EZ_DATA28 EQU CYREG_SCB1_EZ_DATA28
SPI_SCB__EZ_DATA29 EQU CYREG_SCB1_EZ_DATA29
SPI_SCB__EZ_DATA30 EQU CYREG_SCB1_EZ_DATA30
SPI_SCB__EZ_DATA31 EQU CYREG_SCB1_EZ_DATA31
SPI_SCB__I2C_CFG EQU CYREG_SCB1_I2C_CFG
SPI_SCB__I2C_CTRL EQU CYREG_SCB1_I2C_CTRL
SPI_SCB__I2C_M_CMD EQU CYREG_SCB1_I2C_M_CMD
SPI_SCB__I2C_S_CMD EQU CYREG_SCB1_I2C_S_CMD
SPI_SCB__I2C_STATUS EQU CYREG_SCB1_I2C_STATUS
SPI_SCB__INTR_CAUSE EQU CYREG_SCB1_INTR_CAUSE
SPI_SCB__INTR_I2C_EC EQU CYREG_SCB1_INTR_I2C_EC
SPI_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB1_INTR_I2C_EC_MASK
SPI_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB1_INTR_I2C_EC_MASKED
SPI_SCB__INTR_M EQU CYREG_SCB1_INTR_M
SPI_SCB__INTR_M_MASK EQU CYREG_SCB1_INTR_M_MASK
SPI_SCB__INTR_M_MASKED EQU CYREG_SCB1_INTR_M_MASKED
SPI_SCB__INTR_M_SET EQU CYREG_SCB1_INTR_M_SET
SPI_SCB__INTR_RX EQU CYREG_SCB1_INTR_RX
SPI_SCB__INTR_RX_MASK EQU CYREG_SCB1_INTR_RX_MASK
SPI_SCB__INTR_RX_MASKED EQU CYREG_SCB1_INTR_RX_MASKED
SPI_SCB__INTR_RX_SET EQU CYREG_SCB1_INTR_RX_SET
SPI_SCB__INTR_S EQU CYREG_SCB1_INTR_S
SPI_SCB__INTR_S_MASK EQU CYREG_SCB1_INTR_S_MASK
SPI_SCB__INTR_S_MASKED EQU CYREG_SCB1_INTR_S_MASKED
SPI_SCB__INTR_S_SET EQU CYREG_SCB1_INTR_S_SET
SPI_SCB__INTR_SPI_EC EQU CYREG_SCB1_INTR_SPI_EC
SPI_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB1_INTR_SPI_EC_MASK
SPI_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB1_INTR_SPI_EC_MASKED
SPI_SCB__INTR_TX EQU CYREG_SCB1_INTR_TX
SPI_SCB__INTR_TX_MASK EQU CYREG_SCB1_INTR_TX_MASK
SPI_SCB__INTR_TX_MASKED EQU CYREG_SCB1_INTR_TX_MASKED
SPI_SCB__INTR_TX_SET EQU CYREG_SCB1_INTR_TX_SET
SPI_SCB__RX_CTRL EQU CYREG_SCB1_RX_CTRL
SPI_SCB__RX_FIFO_CTRL EQU CYREG_SCB1_RX_FIFO_CTRL
SPI_SCB__RX_FIFO_RD EQU CYREG_SCB1_RX_FIFO_RD
SPI_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB1_RX_FIFO_RD_SILENT
SPI_SCB__RX_FIFO_STATUS EQU CYREG_SCB1_RX_FIFO_STATUS
SPI_SCB__RX_MATCH EQU CYREG_SCB1_RX_MATCH
SPI_SCB__SPI_CTRL EQU CYREG_SCB1_SPI_CTRL
SPI_SCB__SPI_STATUS EQU CYREG_SCB1_SPI_STATUS
SPI_SCB__STATUS EQU CYREG_SCB1_STATUS
SPI_SCB__TX_CTRL EQU CYREG_SCB1_TX_CTRL
SPI_SCB__TX_FIFO_CTRL EQU CYREG_SCB1_TX_FIFO_CTRL
SPI_SCB__TX_FIFO_STATUS EQU CYREG_SCB1_TX_FIFO_STATUS
SPI_SCB__TX_FIFO_WR EQU CYREG_SCB1_TX_FIFO_WR
SPI_SCB__UART_CTRL EQU CYREG_SCB1_UART_CTRL
SPI_SCB__UART_RX_CTRL EQU CYREG_SCB1_UART_RX_CTRL
SPI_SCB__UART_RX_STATUS EQU CYREG_SCB1_UART_RX_STATUS
SPI_SCB__UART_TX_CTRL EQU CYREG_SCB1_UART_TX_CTRL

; SPI_SCBCLK
SPI_SCBCLK__DIVIDER_MASK EQU 0x0000FFFF
SPI_SCBCLK__ENABLE EQU CYREG_CLK_DIVIDER_A00
SPI_SCBCLK__ENABLE_MASK EQU 0x80000000
SPI_SCBCLK__MASK EQU 0x80000000
SPI_SCBCLK__REGISTER EQU CYREG_CLK_DIVIDER_A00

; SPI_sclk_s
SPI_sclk_s__0__DM__MASK EQU 0x1C0000
SPI_sclk_s__0__DM__SHIFT EQU 18
SPI_sclk_s__0__DR EQU CYREG_PRT0_DR
SPI_sclk_s__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SPI_sclk_s__0__HSIOM_MASK EQU 0x0F000000
SPI_sclk_s__0__HSIOM_SHIFT EQU 24
SPI_sclk_s__0__INTCFG EQU CYREG_PRT0_INTCFG
SPI_sclk_s__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_sclk_s__0__MASK EQU 0x40
SPI_sclk_s__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_sclk_s__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_sclk_s__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_sclk_s__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_sclk_s__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_sclk_s__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_sclk_s__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_sclk_s__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_sclk_s__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_sclk_s__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_sclk_s__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_sclk_s__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_sclk_s__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_sclk_s__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_sclk_s__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_sclk_s__0__PC EQU CYREG_PRT0_PC
SPI_sclk_s__0__PC2 EQU CYREG_PRT0_PC2
SPI_sclk_s__0__PORT EQU 0
SPI_sclk_s__0__PS EQU CYREG_PRT0_PS
SPI_sclk_s__0__SHIFT EQU 6
SPI_sclk_s__DR EQU CYREG_PRT0_DR
SPI_sclk_s__INTCFG EQU CYREG_PRT0_INTCFG
SPI_sclk_s__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_sclk_s__MASK EQU 0x40
SPI_sclk_s__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_sclk_s__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_sclk_s__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_sclk_s__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_sclk_s__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_sclk_s__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_sclk_s__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_sclk_s__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_sclk_s__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_sclk_s__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_sclk_s__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_sclk_s__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_sclk_s__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_sclk_s__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_sclk_s__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_sclk_s__PC EQU CYREG_PRT0_PC
SPI_sclk_s__PC2 EQU CYREG_PRT0_PC2
SPI_sclk_s__PORT EQU 0
SPI_sclk_s__PS EQU CYREG_PRT0_PS
SPI_sclk_s__SHIFT EQU 6

; SPI_ss_s
SPI_ss_s__0__DM__MASK EQU 0xE00000
SPI_ss_s__0__DM__SHIFT EQU 21
SPI_ss_s__0__DR EQU CYREG_PRT0_DR
SPI_ss_s__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SPI_ss_s__0__HSIOM_MASK EQU 0xF0000000
SPI_ss_s__0__HSIOM_SHIFT EQU 28
SPI_ss_s__0__INTCFG EQU CYREG_PRT0_INTCFG
SPI_ss_s__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_ss_s__0__MASK EQU 0x80
SPI_ss_s__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_ss_s__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_ss_s__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_ss_s__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_ss_s__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_ss_s__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_ss_s__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_ss_s__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_ss_s__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_ss_s__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_ss_s__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_ss_s__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_ss_s__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_ss_s__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_ss_s__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_ss_s__0__PC EQU CYREG_PRT0_PC
SPI_ss_s__0__PC2 EQU CYREG_PRT0_PC2
SPI_ss_s__0__PORT EQU 0
SPI_ss_s__0__PS EQU CYREG_PRT0_PS
SPI_ss_s__0__SHIFT EQU 7
SPI_ss_s__DR EQU CYREG_PRT0_DR
SPI_ss_s__INTCFG EQU CYREG_PRT0_INTCFG
SPI_ss_s__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI_ss_s__MASK EQU 0x80
SPI_ss_s__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI_ss_s__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI_ss_s__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI_ss_s__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI_ss_s__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI_ss_s__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI_ss_s__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI_ss_s__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI_ss_s__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI_ss_s__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI_ss_s__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI_ss_s__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI_ss_s__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI_ss_s__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI_ss_s__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI_ss_s__PC EQU CYREG_PRT0_PC
SPI_ss_s__PC2 EQU CYREG_PRT0_PC2
SPI_ss_s__PORT EQU 0
SPI_ss_s__PS EQU CYREG_PRT0_PS
SPI_ss_s__SHIFT EQU 7

; UART_rx
UART_rx__0__DM__MASK EQU 0x07
UART_rx__0__DM__SHIFT EQU 0
UART_rx__0__DR EQU CYREG_PRT4_DR
UART_rx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL4
UART_rx__0__HSIOM_MASK EQU 0x0000000F
UART_rx__0__HSIOM_SHIFT EQU 0
UART_rx__0__INTCFG EQU CYREG_PRT4_INTCFG
UART_rx__0__INTSTAT EQU CYREG_PRT4_INTSTAT
UART_rx__0__MASK EQU 0x01
UART_rx__0__PC EQU CYREG_PRT4_PC
UART_rx__0__PC2 EQU CYREG_PRT4_PC2
UART_rx__0__PORT EQU 4
UART_rx__0__PS EQU CYREG_PRT4_PS
UART_rx__0__SHIFT EQU 0
UART_rx__DR EQU CYREG_PRT4_DR
UART_rx__INTCFG EQU CYREG_PRT4_INTCFG
UART_rx__INTSTAT EQU CYREG_PRT4_INTSTAT
UART_rx__MASK EQU 0x01
UART_rx__PC EQU CYREG_PRT4_PC
UART_rx__PC2 EQU CYREG_PRT4_PC2
UART_rx__PORT EQU 4
UART_rx__PS EQU CYREG_PRT4_PS
UART_rx__SHIFT EQU 0

; UART_SCB
UART_SCB__BIST_CONTROL EQU CYREG_SCB0_BIST_CONTROL
UART_SCB__BIST_DATA EQU CYREG_SCB0_BIST_DATA
UART_SCB__CTRL EQU CYREG_SCB0_CTRL
UART_SCB__EZ_DATA00 EQU CYREG_SCB0_EZ_DATA00
UART_SCB__EZ_DATA01 EQU CYREG_SCB0_EZ_DATA01
UART_SCB__EZ_DATA02 EQU CYREG_SCB0_EZ_DATA02
UART_SCB__EZ_DATA03 EQU CYREG_SCB0_EZ_DATA03
UART_SCB__EZ_DATA04 EQU CYREG_SCB0_EZ_DATA04
UART_SCB__EZ_DATA05 EQU CYREG_SCB0_EZ_DATA05
UART_SCB__EZ_DATA06 EQU CYREG_SCB0_EZ_DATA06
UART_SCB__EZ_DATA07 EQU CYREG_SCB0_EZ_DATA07
UART_SCB__EZ_DATA08 EQU CYREG_SCB0_EZ_DATA08
UART_SCB__EZ_DATA09 EQU CYREG_SCB0_EZ_DATA09
UART_SCB__EZ_DATA10 EQU CYREG_SCB0_EZ_DATA10
UART_SCB__EZ_DATA11 EQU CYREG_SCB0_EZ_DATA11
UART_SCB__EZ_DATA12 EQU CYREG_SCB0_EZ_DATA12
UART_SCB__EZ_DATA13 EQU CYREG_SCB0_EZ_DATA13
UART_SCB__EZ_DATA14 EQU CYREG_SCB0_EZ_DATA14
UART_SCB__EZ_DATA15 EQU CYREG_SCB0_EZ_DATA15
UART_SCB__EZ_DATA16 EQU CYREG_SCB0_EZ_DATA16
UART_SCB__EZ_DATA17 EQU CYREG_SCB0_EZ_DATA17
UART_SCB__EZ_DATA18 EQU CYREG_SCB0_EZ_DATA18
UART_SCB__EZ_DATA19 EQU CYREG_SCB0_EZ_DATA19
UART_SCB__EZ_DATA20 EQU CYREG_SCB0_EZ_DATA20
UART_SCB__EZ_DATA21 EQU CYREG_SCB0_EZ_DATA21
UART_SCB__EZ_DATA22 EQU CYREG_SCB0_EZ_DATA22
UART_SCB__EZ_DATA23 EQU CYREG_SCB0_EZ_DATA23
UART_SCB__EZ_DATA24 EQU CYREG_SCB0_EZ_DATA24
UART_SCB__EZ_DATA25 EQU CYREG_SCB0_EZ_DATA25
UART_SCB__EZ_DATA26 EQU CYREG_SCB0_EZ_DATA26
UART_SCB__EZ_DATA27 EQU CYREG_SCB0_EZ_DATA27
UART_SCB__EZ_DATA28 EQU CYREG_SCB0_EZ_DATA28
UART_SCB__EZ_DATA29 EQU CYREG_SCB0_EZ_DATA29
UART_SCB__EZ_DATA30 EQU CYREG_SCB0_EZ_DATA30
UART_SCB__EZ_DATA31 EQU CYREG_SCB0_EZ_DATA31
UART_SCB__I2C_CFG EQU CYREG_SCB0_I2C_CFG
UART_SCB__I2C_CTRL EQU CYREG_SCB0_I2C_CTRL
UART_SCB__I2C_M_CMD EQU CYREG_SCB0_I2C_M_CMD
UART_SCB__I2C_S_CMD EQU CYREG_SCB0_I2C_S_CMD
UART_SCB__I2C_STATUS EQU CYREG_SCB0_I2C_STATUS
UART_SCB__INTR_CAUSE EQU CYREG_SCB0_INTR_CAUSE
UART_SCB__INTR_I2C_EC EQU CYREG_SCB0_INTR_I2C_EC
UART_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB0_INTR_I2C_EC_MASK
UART_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB0_INTR_I2C_EC_MASKED
UART_SCB__INTR_M EQU CYREG_SCB0_INTR_M
UART_SCB__INTR_M_MASK EQU CYREG_SCB0_INTR_M_MASK
UART_SCB__INTR_M_MASKED EQU CYREG_SCB0_INTR_M_MASKED
UART_SCB__INTR_M_SET EQU CYREG_SCB0_INTR_M_SET
UART_SCB__INTR_RX EQU CYREG_SCB0_INTR_RX
UART_SCB__INTR_RX_MASK EQU CYREG_SCB0_INTR_RX_MASK
UART_SCB__INTR_RX_MASKED EQU CYREG_SCB0_INTR_RX_MASKED
UART_SCB__INTR_RX_SET EQU CYREG_SCB0_INTR_RX_SET
UART_SCB__INTR_S EQU CYREG_SCB0_INTR_S
UART_SCB__INTR_S_MASK EQU CYREG_SCB0_INTR_S_MASK
UART_SCB__INTR_S_MASKED EQU CYREG_SCB0_INTR_S_MASKED
UART_SCB__INTR_S_SET EQU CYREG_SCB0_INTR_S_SET
UART_SCB__INTR_SPI_EC EQU CYREG_SCB0_INTR_SPI_EC
UART_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB0_INTR_SPI_EC_MASK
UART_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB0_INTR_SPI_EC_MASKED
UART_SCB__INTR_TX EQU CYREG_SCB0_INTR_TX
UART_SCB__INTR_TX_MASK EQU CYREG_SCB0_INTR_TX_MASK
UART_SCB__INTR_TX_MASKED EQU CYREG_SCB0_INTR_TX_MASKED
UART_SCB__INTR_TX_SET EQU CYREG_SCB0_INTR_TX_SET
UART_SCB__RX_CTRL EQU CYREG_SCB0_RX_CTRL
UART_SCB__RX_FIFO_CTRL EQU CYREG_SCB0_RX_FIFO_CTRL
UART_SCB__RX_FIFO_RD EQU CYREG_SCB0_RX_FIFO_RD
UART_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB0_RX_FIFO_RD_SILENT
UART_SCB__RX_FIFO_STATUS EQU CYREG_SCB0_RX_FIFO_STATUS
UART_SCB__RX_MATCH EQU CYREG_SCB0_RX_MATCH
UART_SCB__SPI_CTRL EQU CYREG_SCB0_SPI_CTRL
UART_SCB__SPI_STATUS EQU CYREG_SCB0_SPI_STATUS
UART_SCB__STATUS EQU CYREG_SCB0_STATUS
UART_SCB__TX_CTRL EQU CYREG_SCB0_TX_CTRL
UART_SCB__TX_FIFO_CTRL EQU CYREG_SCB0_TX_FIFO_CTRL
UART_SCB__TX_FIFO_STATUS EQU CYREG_SCB0_TX_FIFO_STATUS
UART_SCB__TX_FIFO_WR EQU CYREG_SCB0_TX_FIFO_WR
UART_SCB__UART_CTRL EQU CYREG_SCB0_UART_CTRL
UART_SCB__UART_RX_CTRL EQU CYREG_SCB0_UART_RX_CTRL
UART_SCB__UART_RX_STATUS EQU CYREG_SCB0_UART_RX_STATUS
UART_SCB__UART_TX_CTRL EQU CYREG_SCB0_UART_TX_CTRL

; UART_SCBCLK
UART_SCBCLK__DIVIDER_MASK EQU 0x0000FFFF
UART_SCBCLK__ENABLE EQU CYREG_CLK_DIVIDER_B00
UART_SCBCLK__ENABLE_MASK EQU 0x80000000
UART_SCBCLK__MASK EQU 0x80000000
UART_SCBCLK__REGISTER EQU CYREG_CLK_DIVIDER_B00

; UART_tx
UART_tx__0__DM__MASK EQU 0x38
UART_tx__0__DM__SHIFT EQU 3
UART_tx__0__DR EQU CYREG_PRT4_DR
UART_tx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL4
UART_tx__0__HSIOM_MASK EQU 0x000000F0
UART_tx__0__HSIOM_SHIFT EQU 4
UART_tx__0__INTCFG EQU CYREG_PRT4_INTCFG
UART_tx__0__INTSTAT EQU CYREG_PRT4_INTSTAT
UART_tx__0__MASK EQU 0x02
UART_tx__0__PC EQU CYREG_PRT4_PC
UART_tx__0__PC2 EQU CYREG_PRT4_PC2
UART_tx__0__PORT EQU 4
UART_tx__0__PS EQU CYREG_PRT4_PS
UART_tx__0__SHIFT EQU 1
UART_tx__DR EQU CYREG_PRT4_DR
UART_tx__INTCFG EQU CYREG_PRT4_INTCFG
UART_tx__INTSTAT EQU CYREG_PRT4_INTSTAT
UART_tx__MASK EQU 0x02
UART_tx__PC EQU CYREG_PRT4_PC
UART_tx__PC2 EQU CYREG_PRT4_PC2
UART_tx__PORT EQU 4
UART_tx__PS EQU CYREG_PRT4_PS
UART_tx__SHIFT EQU 1

; isr_SPI
isr_SPI__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
isr_SPI__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
isr_SPI__INTC_MASK EQU 0x800
isr_SPI__INTC_NUMBER EQU 11
isr_SPI__INTC_PRIOR_MASK EQU 0xC0000000
isr_SPI__INTC_PRIOR_NUM EQU 3
isr_SPI__INTC_PRIOR_REG EQU CYREG_CM0_IPR2
isr_SPI__INTC_SET_EN_REG EQU CYREG_CM0_ISER
isr_SPI__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; isr_UART
isr_UART__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
isr_UART__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
isr_UART__INTC_MASK EQU 0x400
isr_UART__INTC_NUMBER EQU 10
isr_UART__INTC_PRIOR_MASK EQU 0xC00000
isr_UART__INTC_PRIOR_NUM EQU 3
isr_UART__INTC_PRIOR_REG EQU CYREG_CM0_IPR2
isr_UART__INTC_SET_EN_REG EQU CYREG_CM0_ISER
isr_UART__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 4
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 5
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_4D EQU 3
CYDEV_CHIP_MEMBER_5A EQU 4
CYDEV_CHIP_MEMBER_5B EQU 5
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_ES0 EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_HEAP_SIZE EQU 0x0100
CYDEV_PROJ_TYPE EQU 2
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
