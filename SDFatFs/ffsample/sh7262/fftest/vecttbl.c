/***********************************************************************/
/*                                                                     */
/*  FILE        :vecttbl.c                                             */
/*  DATE        :Tue, Mar 09, 2010                                     */
/*  DESCRIPTION :Initialize of Vector Table                            */
/*  CPU TYPE    :SH72623                                               */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.16).    */
/*                                                                     */
/***********************************************************************/
                  
/*********************************************************************
*
* Device     : SH2A-FPU/SH7262,SH7264
*
* File Name  : vecttbl.c
*
* Abstract   : Initialize of Vector Table.
*
* History    : 1.00  (2009-02-24)  [Hardware Manual Revision : 2.00]
*
* NOTE       : THIS IS A TYPICAL EXAMPLE.
*
* Copyright(c) 2008 Renesas Technology Corp.
*               And Renesas Solutions Corp.,All Rights Reserved. 
*
*********************************************************************/
#include <machine.h>
#include "vect.h"


// 4 Illegal code handler
void INT_Illegal_code(void)
{
	sleep();
}

// Unwanted interrupt handler
void Dummy(void)
{
	sleep();
}



#pragma section VECTTBL		// リセットベクタテーブル (0x1C000000)

void *RESET_Vectors[] = {
//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
    (void*)	PowerON_Reset_PC,                                                                                                                
//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP
    __secend("S"),
//;<<VECTOR DATA START (MANUAL RESET)>>
//;2 Manual Reset PC
    (void*)	Manual_Reset_PC,                                                                                                                 
//;<<VECTOR DATA END (MANUAL RESET)>>
// 3 Manual Reset SP
    __secend("S")

};


#pragma section INTTBL		// 割り込みベクタテーブル (0x0C000010)

void *INT_Vectors[] = {
// 4 Illegal code
	(void*) INT_Illegal_code,
// 5 Reserved
	(void*) Dummy,
// 6 Illegal slot
	(void*) Dummy,//INT_Illegal_slot,
// 7 Reserved
	(void*) Dummy,
// 8 Reserved
	(void*) RESET_Vectors,// Dummy, Used by SPI-Flash boot
// 9 CPU Address error
	(void*) Dummy,//INT_CPU_Address,
// 10 DMAC Address erro
	(void*) Dummy,//INT_DMAC_Address,
// 11 NMI
	(void*) Dummy,//INT_NMI,
// 12 Reserved
	(void*) Dummy,
// 13 INT_FPU
	(void*) Dummy,//INT_FPU,
// 14 User debug interface
	(void*) Dummy,//INT_UDI,
// 15 Bank Overflow
	(void*) Dummy,//INT_Bank_Overflow,
// 16 Bank Underflow
	(void*) Dummy,//INT_Bank_Underflow,
// 17 Divide by zero
	(void*) Dummy,//INT_Divide_by_Zero,
// 18 Divide Overflow
	(void*) Dummy,//INT_Divide_Overflow,
// 19 Reserved
	(void*) Dummy,
// 20 Reserved
	(void*) Dummy,
// 21 Reserved
	(void*) Dummy,
// 22 Reserved
	(void*) Dummy,
// 23 Reserved
	(void*) Dummy,
// 24 Reserved
	(void*) Dummy,
// 25 Reserved
	(void*) Dummy,
// 26 Reserved
	(void*) Dummy,
// 27 Reserved
	(void*) Dummy,
// 28 Reserved
	(void*) Dummy,
// 29 Reserved
	(void*) Dummy,
// 30 Reserved
	(void*) Dummy,
// 31 Reserved
	(void*) Dummy,
// 32 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA32,
// 33 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA33,
// 34 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA34,
// 35 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA35,
// 36 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA36,
// 37 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA37,
// 38 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA38,
// 39 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA39,
// 40 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA40,
// 41 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA41,
// 42 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA42,
// 43 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA43,
// 44 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA44,
// 45 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA45,
// 46 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA46,
// 47 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA47,
// 48 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA48,
// 49 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA49,
// 50 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA50,
// 51 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA51,
// 52 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA52,
// 53 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA53,
// 54 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA54,
// 55 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA55,
// 56 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA56,
// 57 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA57,
// 58 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA58,
// 59 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA59,
// 60 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA60,
// 61 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA61,
// 62 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA62,
// 63 TRAPA (User Vector)
	(void*) Dummy,//INT_TRAPA63,
// 64 Interrupt IRQ0
	(void*) Dummy,//INT_IRQ0,
// 65 Interrupt IRQ1
	(void*) Dummy,//INT_IRQ1,
// 66 Interrupt IRQ2
	(void*) Dummy,//INT_IRQ2,
// 67 Interrupt IRQ3
	(void*) Dummy,//INT_IRQ3,
// 68 Interrupt IRQ4
	(void*) Dummy,//INT_IRQ4,
// 69 Interrupt IRQ5
	(void*) Dummy,//INT_IRQ5,
// 70 Interrupt IRQ6
	(void*) Dummy,//INT_IRQ6,
// 71 Interrupt IRQ7
	(void*) Dummy,//INT_IRQ7,
// 72 Reserved
	(void*) Dummy,
// 73 Reserved
	(void*) Dummy,
// 74 Reserved
	(void*) Dummy,
// 75 Reserved
	(void*) Dummy,
// 76 Reserved
	(void*) Dummy,
// 77 Reserved
	(void*) Dummy,
// 78 Reserved
	(void*) Dummy,
// 79 Reserved
	(void*) Dummy,
// 80 PINT PINT0
	(void*) Dummy,//INT_PINT_PINT0,
// 81 PINT PINT1
	(void*) Dummy,//INT_PINT_PINT1,
// 82 PINT PINT2
	(void*) Dummy,//INT_PINT_PINT2,
// 83 PINT PINT3
	(void*) Dummy,//INT_PINT_PINT3,
// 84 PINT PINT4
	(void*) Dummy,//INT_PINT_PINT4,
// 85 PINT PINT5
	(void*) Dummy,//INT_PINT_PINT5,
// 86 PINT PINT6
	(void*) Dummy,//INT_PINT_PINT6,
// 87 PINT PINT7
	(void*) Dummy,//INT_PINT_PINT7,
// 88 Reserved
	(void*) Dummy,
// 89 Reserved
	(void*) Dummy,
// 90 Reserved
	(void*) Dummy,
// 91 Reserved
	(void*) Dummy,
// 92 Reserved
	(void*) Dummy,
// 93 Reserved
	(void*) Dummy,
// 94 Reserved
	(void*) Dummy,
// 95 Reserved
	(void*) Dummy,
// 96 Reserved
	(void*) Dummy,
// 97 Reserved
	(void*) Dummy,
// 98 Reserved
	(void*) Dummy,
// 99 Reserved
	(void*) Dummy,
// 100 Reserved
	(void*) Dummy,
// 101 Reserved
	(void*) Dummy,
// 102 Reserved
	(void*) Dummy,
// 103 Reserved
	(void*) Dummy,
// 104 Reserved
	(void*) Dummy,
// 105 Reserved
	(void*) Dummy,
// 106 Reserved
	(void*) Dummy,
// 107 Reserved
	(void*) Dummy,
// 108 DMAC0 DEI
	(void*) Dummy,//INT_DMAC0_DEI0,
// 109 DMAC0 HEI
	(void*) Dummy,//INT_DMAC0_HEI0,
// 110 Reserved
	(void*) Dummy,
// 111 Reserved
	(void*) Dummy,
// 112 DMAC1 DEI
	(void*) Dummy,//INT_DMAC1_DEI1,
// 113 DMAC1 HEI
	(void*) Dummy,//INT_DMAC1_HEI1,
// 114 Reserved
	(void*) Dummy,
// 115 Reserved
	(void*) Dummy,
// 116 DMAC2 DEI
	(void*) Dummy,//INT_DMAC2_DEI2,
// 117 DMAC2 HEI
	(void*) Dummy,//INT_DMAC2_HEI2,
// 118 Reserved
	(void*) Dummy,
// 119 Reserved
	(void*) Dummy,
// 120 DMAC3 DEI
	(void*) Dummy,//INT_DMAC3_DEI3,
// 121 DMAC3 HEI
	(void*) Dummy,//INT_DMAC3_HEI3,
// 122 Reserved
	(void*) Dummy,
// 123 Reserved
	(void*) Dummy,
// 124 DMAC4 DEI
	(void*) Dummy,//INT_DMAC4_DEI4,
// 125 DMAC4 HEI
	(void*) Dummy,//INT_DMAC4_HEI4,
// 126 Reserved
	(void*) Dummy,
// 127 Reserved
	(void*) Dummy,
// 128 DMAC5 DEI
	(void*) Dummy,//INT_DMAC5_DEI5,
// 129 DMAC5 HEI
	(void*) Dummy,//INT_DMAC5_HEI5,
// 130 Reserved
	(void*) Dummy,
// 131 Reserved
	(void*) Dummy,
// 132 DMAC6 DEI
	(void*) Dummy,//INT_DMAC6_DEI6,
// 133 DMAC6 HEI
	(void*) Dummy,//INT_DMAC6_HEI6,
// 134 Reserved
	(void*) Dummy,
// 135 Reserved
	(void*) Dummy,
// 136 DMAC7 DEI
	(void*) Dummy,//INT_DMAC7_DEI7,
// 137 DMAC7 HEI
	(void*) Dummy,//INT_DMAC7_HEI7,
// 138 Reserved
	(void*) Dummy,
// 139 Reserved
	(void*) Dummy,
// 140 DMAC8 DEI
	(void*) Dummy,//INT_DMAC8_DEI8,
// 141 DMAC8 HEI
	(void*) Dummy,//INT_DMAC8_HEI8,
// 142 Reserved
	(void*) Dummy,
// 143 Reserved
	(void*) Dummy,
// 144 DMAC9 DEI
	(void*) Dummy,//INT_DMAC9_DEI9,
// 145 DMAC9 HEI
	(void*) Dummy,//INT_DMAC9_HEI9,
// 146 Reserved
	(void*) Dummy,
// 147 Reserved
	(void*) Dummy,
// 148 DMAC10 DEI
	(void*) Dummy,//INT_DMAC10_DEI10,
// 149 DMAC10 HEI
	(void*) Dummy,//INT_DMAC10_HEI10,
// 150 Reserved
	(void*) Dummy,
// 151 Reserved
	(void*) Dummy,
// 152 DMAC11 DEI
	(void*) Dummy,//INT_DMAC11_DEI11,
// 153 DMAC11 HEI
	(void*) Dummy,//INT_DMAC11_HEI11,
// 154 Reserved
	(void*) Dummy,
// 155 Reserved
	(void*) Dummy,
// 156 DMAC12 DEI
	(void*) Dummy,//INT_DMAC12_DEI12,
// 157 DMAC12 HEI
	(void*) Dummy,//INT_DMAC12_HEI12,
// 158 Reserved
	(void*) Dummy,
// 159 Reserved
	(void*) Dummy,
// 160 DMAC13 DEI
	(void*) Dummy,//INT_DMAC13_DEI13,
// 161 DMAC13 HEI
	(void*) Dummy,//INT_DMAC13_HEI13,
// 162 Reserved
	(void*) Dummy,
// 163 Reserved
	(void*) Dummy,
// 164 DMAC14 DEI
	(void*) Dummy,//INT_DMAC14_DEI14,
// 165 DMAC14 HEI
	(void*) Dummy,//INT_DMAC14_HEI14,
// 166 Reserved
	(void*) Dummy,
// 167 Reserved
	(void*) Dummy,
// 168 DMAC15 DEI
	(void*) Dummy,//INT_DMAC15_DEI15,
// 169 DMAC15 HEI
	(void*) Dummy,//INT_DMAC15_HEI15,
// 170 USB2.0 USBI
	(void*) Dummy,//INT_USB2_USBI,
// 171 VDC VIVSYNCJ
	(void*) Dummy,//INT_VDC_VIVSYNCJ,
// 172 VDC VBUFERR
	(void*) Dummy,//INT_VDC_VBUFERR,
// 173 VDC VIFIELDE
	(void*) Dummy,//INT_VDC_VIFIELDE,
// 174 VDC VOLINE
	(void*) Dummy,//INT_VDC_VOLINE,
// 175 CMT CH0 CMI0
	(void*) INT_CMT_CMI0,	// main.c
// 176 CMT CH1 CMI1
	(void*) Dummy,//INT_CMT_CMI1,
// 177 BSC CMI
	(void*) Dummy,//INT_BSC_CMI,
// 178 WDT ITI
	(void*) Dummy,//INT_WDT_ITI,
// 179 MTU2 MTU0 TGI0A
	(void*) Dummy,//INT_MTU2_MTU0_TGI0A,
// 180 MTU2 MTU0 TGI0B
	(void*) Dummy,//INT_MTU2_MTU0_TGI0B,
// 181 MTU2 MTU0 TGI0C
	(void*) Dummy,//INT_MTU2_MTU0_TGI0C,
// 182 MTU2 MTU0 TGI0D
	(void*) Dummy,//INT_MTU2_MTU0_TGI0D,
// 183 MTU2 MTU0 TCI0V
	(void*) Dummy,//INT_MTU2_MTU0_TCI0V,
// 184 MTU2 MTU0 TGI0E
	(void*) Dummy,//INT_MTU2_MTU0_TGI0E,
// 185 MTU2 MTU0 TGI0F
	(void*) Dummy,//INT_MTU2_MTU0_TGI0F,
// 186 MTU2 MTU1 TGI1A
	(void*) Dummy,//INT_MTU2_MTU1_TGI1A,
// 187 MTU2 MTU1 TGI1B
	(void*) Dummy,//INT_MTU2_MTU1_TGI1B,
// 188 MTU2 MTU1 TCI1V
	(void*) Dummy,//INT_MTU2_MTU1_TCI1V,
// 189 MTU2 MTU1 TCI1U
	(void*) Dummy,//INT_MTU2_MTU1_TCI1U,
// 190 MTU2 MTU2 TGI2A
	(void*) Dummy,//INT_MTU2_MTU2_TGI2A,
// 191 MTU2 MTU2 TGI2B
	(void*) Dummy,//INT_MTU2_MTU2_TGI2B,
// 192 MTU2 MTU2 TCI2V
	(void*) Dummy,//INT_MTU2_MTU2_TCI2V,
// 193 MTU2 MTU2 TCI2U
	(void*) Dummy,//INT_MTU2_MTU2_TCI2U,
// 194 MTU2 MTU3 TGI3A
	(void*) Dummy,//INT_MTU2_MTU3_TGI3A,
// 195 MTU2 MTU3 TGI3B
	(void*) Dummy,//INT_MTU2_MTU3_TGI3B,
// 196 MTU2 MTU3 TGI3C
	(void*) Dummy,//INT_MTU2_MTU3_TGI3C,
// 197 MTU2 MTU3 TGI3D
	(void*) Dummy,//INT_MTU2_MTU3_TGI3D,
// 198 MTU2 MTU3 TCI3V
	(void*) Dummy,//INT_MTU2_MTU3_TCI3V,
// 199 MTU2 MTU4 TGI4A
	(void*) Dummy,//INT_MTU2_MTU4_TGI4A,
// 200 MTU2 MTU4 TGI4B
	(void*) Dummy,//INT_MTU2_MTU4_TGI4B,
// 201 MTU2 MTU4 TGI4C
	(void*) Dummy,//INT_MTU2_MTU4_TGI4C,
// 202 MTU2 MTU4 TGI4D
	(void*) Dummy,//INT_MTU2_MTU4_TGI4D,
// 203 MTU2 MTU4 TCI4V
	(void*) Dummy,//INT_MTU2_MTU4_TCI4V,
// 204 PWM CH1
	(void*) Dummy,//INT_PWM_CH1,
// 205 PWM CH2
	(void*) Dummy,//INT_PWM_CH2,
// 206 ADC ADI
	(void*) Dummy,//INT_ADC_ADI,
// 207 SSI CH0 SSIF0
	(void*) Dummy,//INT_SSI_CH0_SSIF0,
// 208 SSI CH0 SSIRXI0
	(void*) Dummy,//INT_SSI_CH0_SSIRXI0,
// 209 SSI CH0 SSITXI0
	(void*) Dummy,//INT_SSI_CH0_SSITXI0,
// 210 SSI CH1 SSII1
	(void*) Dummy,//INT_SSI_CH1_SSII1,
// 211 SSI CH1 SSIRTI1
	(void*) Dummy,//INT_SSI_CH1_SSIRTI1,
// 212 SSI CH2 SSII2
	(void*) Dummy,//INT_SSI_CH2_SSII2,
// 213 SSI CH2 SSIRTI2
	(void*) Dummy,//INT_SSI_CH2_SSIRTI2,
// 214 SSI CH3 SSII3
	(void*) Dummy,//INT_SSI_CH3_SSII3,
// 215 SSI CH3 SSIRTI3
	(void*) Dummy,//INT_SSI_CH3_SSIRTI3,
// 216 SPDIF SPDIFI
	(void*) Dummy,//INT_SPDIF_SPDIFI,
// 217 PCBI3 CH0 STPI0
	(void*) Dummy,//INT_PCBI3_CH0_STPI0,
// 218 PCBI3 CH0 NAKI0
	(void*) Dummy,//INT_PCBI3_CH0_NAKI0,
// 219 PCBI3 CH0 RXI0
	(void*) Dummy,//INT_PCBI3_CH0_RXI0,
// 220 PCBI3 CH0 TXI0
	(void*) Dummy,//INT_PCBI3_CH0_TXI0,
// 221 PCBI3 CH0 TEI0
	(void*) Dummy,//INT_PCBI3_CH0_TEI0,
// 222 PCBI3 CH1 STPI1
	(void*) Dummy,//INT_PCBI3_CH1_STPI1,
// 223 PCBI3 CH1 NAKI1
	(void*) Dummy,//INT_PCBI3_CH1_NAKI1,
// 224 PCBI3 CH1 RXI1
	(void*) Dummy,//INT_PCBI3_CH1_RXI1,
// 225 PCBI3 CH1 TXI1
	(void*) Dummy,//INT_PCBI3_CH1_TXI1,
// 226 PCBI3 CH1 TEI1
	(void*) Dummy,//INT_PCBI3_CH1_TEI1,
// 227 PCBI3 CH2 STPI2
	(void*) Dummy,//INT_PCBI3_CH2_STPI2,
// 228 PCBI3 CH2 NAKI2
	(void*) Dummy,//INT_PCBI3_CH2_NAKI2,
// 229 PCBI3 CH2 RXI2
	(void*) Dummy,//INT_PCBI3_CH2_RXI2,
// 230 PCBI3 CH2 TXI2
	(void*) Dummy,//INT_PCBI3_CH2_TXI2,
// 231 PCBI3 CH2 TEI2
	(void*) Dummy,//INT_PCBI3_CH2_TEI2,
// 232 SCIF SCIF0 BRI0
	(void*) Dummy,//INT_SCIF_SCIF0_BRI0,
// 233 SCIF SCIF0 ERI0
	(void*) Dummy,//INT_SCIF_SCIF0_ERI0,
// 234 SCIF SCIF0 RXI0
	(void*) Dummy,//INT_SCIF_SCIF0_RXI0,
// 235 SCIF SCIF0 TXI0
	(void*) Dummy,//INT_SCIF_SCIF0_TXI0,
// 236 SCIF SCIF1 BRI1
	(void*) Dummy,//INT_SCIF_SCIF1_BRI1,
// 237 SCIF SCIF1 ERI1
	(void*) Dummy,//INT_SCIF_SCIF1_ERI1,
// 238 SCIF SCIF1 RXI1
	(void*) Dummy,//INT_SCIF_SCIF1_RXI1,
// 239 SCIF SCIF1 TXI1
	(void*) Dummy,//INT_SCIF_SCIF1_TXI1,
// 240 SCIF SCIF2 BRI2
	(void*) Dummy,//INT_SCIF_SCIF2_BRI2,
// 241 SCIF SCIF2 ERI2
	(void*) Dummy,//INT_SCIF_SCIF2_ERI2,
// 242 SCIF SCIF2 RXI2
	(void*) INT_SCIF_SCIF2_RXI2,	// scif.c
// 243 SCIF SCIF2 TXI2
	(void*) INT_SCIF_SCIF2_TXI2,	// scif.c
// 244 SCIF SCIF3 BRI3
	(void*) Dummy,//INT_SCIF_SCIF3_BRI3,
// 245 SCIF SCIF3 ERI3
	(void*) Dummy,//INT_SCIF_SCIF3_ERI3,
// 246 SCIF SCIF3 RXI3
	(void*) Dummy,//INT_SCIF_SCIF3_RXI3,
// 247 SCIF SCIF3 TXI3
	(void*) Dummy,//INT_SCIF_SCIF3_TXI3,
// 248 SCIF SCIF4 BRI4
	(void*) Dummy,//INT_SCIF_SCIF4_BRI4,
// 249 SCIF SCIF4 ERI4
	(void*) Dummy,//INT_SCIF_SCIF4_ERI4,
// 250 SCIF SCIF4 RXI4
	(void*) Dummy,//INT_SCIF_SCIF4_RXI4,
// 251 SCIF SCIF4 TXI4
	(void*) Dummy,//INT_SCIF_SCIF4_TXI4,
// 252 SCIF SCIF5 BRI5
	(void*) Dummy,//INT_SCIF_SCIF5_BRI5,
// 253 SCIF SCIF5 ERI5
	(void*) Dummy,//INT_SCIF_SCIF5_ERI5,
// 254 SCIF SCIF5 RXI5
	(void*) Dummy,//INT_SCIF_SCIF5_RXI5,
// 255 SCIF SCIF5 TXI5
	(void*) Dummy,//INT_SCIF_SCIF5_TXI5,
// 256 SCIF SCIF6 BRI6
	(void*) Dummy,//INT_SCIF_SCIF6_BRI6,
// 257 SCIF SCIF6 ERI6
	(void*) Dummy,//INT_SCIF_SCIF6_ERI6,
// 258 SCIF SCIF6 RXI6
	(void*) Dummy,//INT_SCIF_SCIF6_RXI6,
// 259 SCIF SCIF6 TXI6
	(void*) Dummy,//INT_SCIF_SCIF6_TXI6,
// 260 SCIF SCIF7 BRI7
	(void*) Dummy,//INT_SCIF_SCIF7_BRI7,
// 261 SCIF SCIF7 ERI7
	(void*) Dummy,//INT_SCIF_SCIF7_ERI7,
// 262 SCIF SCIF7 RXI7
	(void*) Dummy,//INT_SCIF_SCIF7_RXI7,
// 263 SCIF SCIF7 TXI7
	(void*) Dummy,//INT_SCIF_SCIF7_TXI7,
// 264 CSSIO SIOFI
	(void*) Dummy,//INT_CSSIO_SIOFI,
// 265 RPI CH0 SPEI0
	(void*) Dummy,//INT_RPI_CH0_SPEI0,
// 266 RPI CH0 SPRI0
	(void*) Dummy,//INT_RPI_CH0_SPRI0,
// 267 RPI CH0 SPTI0
	(void*) Dummy,//INT_RPI_CH0_SPTI0,
// 268 RPI CH1 SPEI1
	(void*) Dummy,//INT_RPI_CH1_SPEI1,
// 269 RPI CH1 SPRI1
	(void*) Dummy,//INT_RPI_CH1_SPRI1,
// 270 RPI CH1 SPTI1
	(void*) Dummy,//INT_RPI_CH1_SPTI1,
// 271 CAN CH0 ERS0
	(void*) Dummy,//INT_CAN_CH0_ERS0,
// 272 CAN CH0 OVR0
	(void*) Dummy,//INT_CAN_CH0_OVR0,
// 273 CAN CH0 RM00
	(void*) Dummy,//INT_CAN_CH0_RM00,
// 274 CAN CH0 RM10
	(void*) Dummy,//INT_CAN_CH0_RM10,
// 275 CAN CH0 SLE0
	(void*) Dummy,//INT_CAN_CH0_SLE0,
// 276 CAN CH1 ERS1
	(void*) Dummy,//INT_CAN_CH1_ERS1,
// 277 CAN CH1 OVR1
	(void*) Dummy,//INT_CAN_CH1_OVR1,
// 278 CAN CH1 RM01
	(void*) Dummy,//INT_CAN_CH1_RM01,
// 279 CAN CH1 RM11
	(void*) Dummy,//INT_CAN_CH1_RM11,
// 280 CAN CH1 SLE1
	(void*) Dummy,//INT_CAN_CH1_SLE1,
// 281 IEBC IEB
	(void*) Dummy,//INT_IEBC_IEB,
// 282 CDROMDEC ISY
	(void*) Dummy,//INT_CDROMDEC_ISY,
// 283 CDROMDEC IERR
	(void*) Dummy,//INT_CDROMDEC_IERR,
// 284 CDROMDEC ITARG
	(void*) Dummy,//INT_CDROMDEC_ITARG,
// 285 CDROMDEC ISEC
	(void*) Dummy,//INT_CDROMDEC_ISEC,
// 286 CDROMDEC IBUF
	(void*) Dummy,//INT_CDROMDEC_IBUF,
// 287 CDROMDEC IREADY
	(void*) Dummy,//INT_CDROMDEC_IREADY,
// 288 FMC FLSTEI
	(void*) Dummy,//INT_FMC_FLSTEI,
// 289 FMC FLTENDI
	(void*) Dummy,//INT_FMC_FLTENDI,
// 290 FMC FLTREQ0I
	(void*) Dummy,//INT_FMC_FLTREQ0I,
// 291 FMC FLTREQ1I
	(void*) Dummy,//INT_FMC_FLTREQ1I,
// 292 SDHI SDHI3
	(void*) Dummy,//INT_SDHI_SDHI3,
// 293 SDHI SDHI0
	(void*) Dummy,//INT_SDHI_SDHI0,
// 294 SDHI SDHI1
	(void*) Dummy,//INT_SDHI_SDHI1,
// 295 Reserved
	(void*) Dummy,
// 296 RTC ARM
	(void*) Dummy,//INT_RTC_ARM,
// 297 RTC PRD
	(void*) Dummy,//INT_RTC_PRD,
// 298 RTC CUP
	(void*) Dummy,//INT_RTC_CUP,
// 299 SRC CH0 OVF0
	(void*) Dummy,//INT_SRC_CH0_OVF0,
// 300 SRC CH0 UDF0
	(void*) Dummy,//INT_SRC_CH0_UDF0,
// 301 SRC CH0 CEF0
	(void*) Dummy,//INT_SRC_CH0_CEF0,
// 302 SRC CH0 ODFI0
	(void*) Dummy,//INT_SRC_CH0_ODFI0,
// 303 SRC CH0 IDEI0
	(void*) Dummy,//INT_SRC_CH0_IDEI0,
// 304 SRC CH1 OVF1
	(void*) Dummy,//INT_SRC_CH1_OVF1,
// 305 SRC CH1 UDF1
	(void*) Dummy,//INT_SRC_CH1_UDF1,
// 306 SRC CH1 CEF1
	(void*) Dummy,//INT_SRC_CH1_CEF1,
// 307 SRC CH1 ODFI1
	(void*) Dummy,//INT_SRC_CH1_ODFI1,
// 308 SRC CH1 IDEI1
	(void*) Dummy,//INT_SRC_CH1_IDEI1,
// 309 DCU DCUEI
	(void*) Dummy,//INT_SRC_DCU_DCUEI,
// 310 DCU OFFI
	(void*) Dummy,//INT_SRC_DCU_OFFI,
// 311 DCU IFEI
	(void*) Dummy,//INT_SRC_DCU_IFEI,
// xx Reserved
    (void*) Dummy
};
