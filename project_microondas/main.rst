                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _esc_RAM_SPI_PARM_2
                                     12 	.globl _fonte
                                     13 	.globl _main
                                     14 	.globl _limpa_tela
                                     15 	.globl _Timer4_ISR
                                     16 	.globl _ISR_TC2
                                     17 	.globl _uart_ISR
                                     18 	.globl _escolher_entrada
                                     19 	.globl _definir_tempo_bluetooth
                                     20 	.globl _le_tecla
                                     21 	.globl _verifica_RAM_SPI
                                     22 	.globl _le_RAM_SPI
                                     23 	.globl _esc_RAM_SPI
                                     24 	.globl _delay_us
                                     25 	.globl _delay_ms
                                     26 	.globl _setup
                                     27 	.globl _escreve_caractere
                                     28 	.globl _caractere_para_ascii
                                     29 	.globl _limpa_glcd
                                     30 	.globl _conf_pag
                                     31 	.globl _conf_Y
                                     32 	.globl _init_GLCD
                                     33 	.globl _esc_glcd
                                     34 	.globl _le_glcd
                                     35 	.globl _Init_Device
                                     36 	.globl _Interrupts_Init
                                     37 	.globl _Oscillator_Init
                                     38 	.globl _Port_IO_Init
                                     39 	.globl _Voltage_Reference_Init
                                     40 	.globl _DAC_Init
                                     41 	.globl _ADC_Init
                                     42 	.globl _SPI_Init
                                     43 	.globl _SMBus_Init
                                     44 	.globl _UART_Init
                                     45 	.globl _Timer_Init
                                     46 	.globl _printf_fast_f
                                     47 	.globl _CANTEST
                                     48 	.globl _CANCCE
                                     49 	.globl _CANDAR
                                     50 	.globl _CANIF
                                     51 	.globl _CANEIE
                                     52 	.globl _CANSIE
                                     53 	.globl _CANIE
                                     54 	.globl _CANINIT
                                     55 	.globl _SPIEN
                                     56 	.globl _TXBMT
                                     57 	.globl _NSSMD0
                                     58 	.globl _NSSMD1
                                     59 	.globl _RXOVRN
                                     60 	.globl _MODF
                                     61 	.globl _WCOL
                                     62 	.globl _SPIF
                                     63 	.globl _AD2WINT
                                     64 	.globl _AD2CM0
                                     65 	.globl _AD2CM1
                                     66 	.globl _AD2CM2
                                     67 	.globl _AD2BUSY
                                     68 	.globl _AD2INT
                                     69 	.globl _AD2TM
                                     70 	.globl _AD2EN
                                     71 	.globl _AD0LJST
                                     72 	.globl _AD0WINT
                                     73 	.globl _AD0CM0
                                     74 	.globl _AD0CM1
                                     75 	.globl _AD0BUSY
                                     76 	.globl _AD0INT
                                     77 	.globl _AD0TM
                                     78 	.globl _AD0EN
                                     79 	.globl _CCF0
                                     80 	.globl _CCF1
                                     81 	.globl _CCF2
                                     82 	.globl _CCF3
                                     83 	.globl _CCF4
                                     84 	.globl _CCF5
                                     85 	.globl _CR
                                     86 	.globl _CF
                                     87 	.globl _P
                                     88 	.globl _F1
                                     89 	.globl _OV
                                     90 	.globl _RS0
                                     91 	.globl _RS1
                                     92 	.globl _F0
                                     93 	.globl _AC
                                     94 	.globl _CY
                                     95 	.globl _CPRL4
                                     96 	.globl _CT4
                                     97 	.globl _TR4
                                     98 	.globl _EXEN4
                                     99 	.globl _EXF4
                                    100 	.globl _TF4
                                    101 	.globl _CPRL3
                                    102 	.globl _CT3
                                    103 	.globl _TR3
                                    104 	.globl _EXEN3
                                    105 	.globl _EXF3
                                    106 	.globl _TF3
                                    107 	.globl _CPRL2
                                    108 	.globl _CT2
                                    109 	.globl _TR2
                                    110 	.globl _EXEN2
                                    111 	.globl _EXF2
                                    112 	.globl _TF2
                                    113 	.globl _LEC0
                                    114 	.globl _LEC1
                                    115 	.globl _LEC2
                                    116 	.globl _TXOK
                                    117 	.globl _RXOK
                                    118 	.globl _EPASS
                                    119 	.globl _EWARN
                                    120 	.globl _BOFF
                                    121 	.globl _SMBTOE
                                    122 	.globl _SMBFTE
                                    123 	.globl _AA
                                    124 	.globl _SI
                                    125 	.globl _STO
                                    126 	.globl _STA
                                    127 	.globl _ENSMB
                                    128 	.globl _BUSY
                                    129 	.globl _PX0
                                    130 	.globl _PT0
                                    131 	.globl _PX1
                                    132 	.globl _PT1
                                    133 	.globl _PS0
                                    134 	.globl _PT2
                                    135 	.globl _EX0
                                    136 	.globl _ET0
                                    137 	.globl _EX1
                                    138 	.globl _ET1
                                    139 	.globl _ES0
                                    140 	.globl _ET2
                                    141 	.globl _EA
                                    142 	.globl _RI1
                                    143 	.globl _TI1
                                    144 	.globl _RB81
                                    145 	.globl _TB81
                                    146 	.globl _REN1
                                    147 	.globl _MCE1
                                    148 	.globl _S1MODE
                                    149 	.globl _RI0
                                    150 	.globl _TI0
                                    151 	.globl _RB80
                                    152 	.globl _TB80
                                    153 	.globl _REN0
                                    154 	.globl _SM20
                                    155 	.globl _SM10
                                    156 	.globl _SM00
                                    157 	.globl _CP2HYN0
                                    158 	.globl _CP2HYN1
                                    159 	.globl _CP2HYP0
                                    160 	.globl _CP2HYP1
                                    161 	.globl _CP2FIF
                                    162 	.globl _CP2RIF
                                    163 	.globl _CP2OUT
                                    164 	.globl _CP2EN
                                    165 	.globl _CP1HYN0
                                    166 	.globl _CP1HYN1
                                    167 	.globl _CP1HYP0
                                    168 	.globl _CP1HYP1
                                    169 	.globl _CP1FIF
                                    170 	.globl _CP1RIF
                                    171 	.globl _CP1OUT
                                    172 	.globl _CP1EN
                                    173 	.globl _CP0HYN0
                                    174 	.globl _CP0HYN1
                                    175 	.globl _CP0HYP0
                                    176 	.globl _CP0HYP1
                                    177 	.globl _CP0FIF
                                    178 	.globl _CP0RIF
                                    179 	.globl _CP0OUT
                                    180 	.globl _CP0EN
                                    181 	.globl _IT0
                                    182 	.globl _IE0
                                    183 	.globl _IT1
                                    184 	.globl _IE1
                                    185 	.globl _TR0
                                    186 	.globl _TF0
                                    187 	.globl _TR1
                                    188 	.globl _TF1
                                    189 	.globl _P7_7
                                    190 	.globl _P7_6
                                    191 	.globl _P7_5
                                    192 	.globl _P7_4
                                    193 	.globl _P7_3
                                    194 	.globl _P7_2
                                    195 	.globl _P7_1
                                    196 	.globl _P7_0
                                    197 	.globl _P6_7
                                    198 	.globl _P6_6
                                    199 	.globl _P6_5
                                    200 	.globl _P6_4
                                    201 	.globl _P6_3
                                    202 	.globl _P6_2
                                    203 	.globl _P6_1
                                    204 	.globl _P6_0
                                    205 	.globl _P5_7
                                    206 	.globl _P5_6
                                    207 	.globl _P5_5
                                    208 	.globl _P5_4
                                    209 	.globl _P5_3
                                    210 	.globl _P5_2
                                    211 	.globl _P5_1
                                    212 	.globl _P5_0
                                    213 	.globl _P4_7
                                    214 	.globl _P4_6
                                    215 	.globl _P4_5
                                    216 	.globl _P4_4
                                    217 	.globl _P4_3
                                    218 	.globl _P4_2
                                    219 	.globl _P4_1
                                    220 	.globl _P4_0
                                    221 	.globl _P3_7
                                    222 	.globl _P3_6
                                    223 	.globl _P3_5
                                    224 	.globl _P3_4
                                    225 	.globl _P3_3
                                    226 	.globl _P3_2
                                    227 	.globl _P3_1
                                    228 	.globl _P3_0
                                    229 	.globl _P2_7
                                    230 	.globl _P2_6
                                    231 	.globl _P2_5
                                    232 	.globl _P2_4
                                    233 	.globl _P2_3
                                    234 	.globl _P2_2
                                    235 	.globl _P2_1
                                    236 	.globl _P2_0
                                    237 	.globl _P1_7
                                    238 	.globl _P1_6
                                    239 	.globl _P1_5
                                    240 	.globl _P1_4
                                    241 	.globl _P1_3
                                    242 	.globl _P1_2
                                    243 	.globl _P1_1
                                    244 	.globl _P1_0
                                    245 	.globl _P0_7
                                    246 	.globl _P0_6
                                    247 	.globl _P0_5
                                    248 	.globl _P0_4
                                    249 	.globl _P0_3
                                    250 	.globl _P0_2
                                    251 	.globl _P0_1
                                    252 	.globl _P0_0
                                    253 	.globl __XPAGE
                                    254 	.globl _DP
                                    255 	.globl _ADC0
                                    256 	.globl _ADC0LT
                                    257 	.globl _ADC0GT
                                    258 	.globl _TMR4
                                    259 	.globl _TMR3
                                    260 	.globl _TMR2
                                    261 	.globl _RCAP4
                                    262 	.globl _RCAP3
                                    263 	.globl _RCAP2
                                    264 	.globl _DAC1
                                    265 	.globl _DAC0
                                    266 	.globl _CAN0DAT
                                    267 	.globl _PCA0CP5
                                    268 	.globl _PCA0CP4
                                    269 	.globl _PCA0CP3
                                    270 	.globl _PCA0CP2
                                    271 	.globl _PCA0CP1
                                    272 	.globl _PCA0CP0
                                    273 	.globl _PCA0
                                    274 	.globl _WDTCN
                                    275 	.globl _PCA0CPH1
                                    276 	.globl _PCA0CPL1
                                    277 	.globl _PCA0CPH0
                                    278 	.globl _PCA0CPL0
                                    279 	.globl _PCA0H
                                    280 	.globl _PCA0L
                                    281 	.globl _P7
                                    282 	.globl _CAN0CN
                                    283 	.globl _SPI0CN
                                    284 	.globl _EIP2
                                    285 	.globl _EIP1
                                    286 	.globl _B
                                    287 	.globl _RSTSRC
                                    288 	.globl _PCA0CPH4
                                    289 	.globl _PCA0CPL4
                                    290 	.globl _PCA0CPH3
                                    291 	.globl _PCA0CPL3
                                    292 	.globl _PCA0CPH2
                                    293 	.globl _PCA0CPL2
                                    294 	.globl _P6
                                    295 	.globl _ADC2CN
                                    296 	.globl _ADC0CN
                                    297 	.globl _EIE2
                                    298 	.globl _EIE1
                                    299 	.globl _XBR3
                                    300 	.globl _XBR2
                                    301 	.globl _XBR1
                                    302 	.globl _PCA0CPH5
                                    303 	.globl _XBR0
                                    304 	.globl _PCA0CPL5
                                    305 	.globl _ACC
                                    306 	.globl _PCA0CPM5
                                    307 	.globl _PCA0CPM4
                                    308 	.globl _PCA0CPM3
                                    309 	.globl _PCA0CPM2
                                    310 	.globl _CAN0TST
                                    311 	.globl _PCA0CPM1
                                    312 	.globl _CAN0ADR
                                    313 	.globl _PCA0CPM0
                                    314 	.globl _CAN0DATH
                                    315 	.globl _PCA0MD
                                    316 	.globl _P5
                                    317 	.globl _CAN0DATL
                                    318 	.globl _PCA0CN
                                    319 	.globl _HVA0CN
                                    320 	.globl _DAC1CN
                                    321 	.globl _DAC0CN
                                    322 	.globl _DAC1H
                                    323 	.globl _DAC0H
                                    324 	.globl _DAC1L
                                    325 	.globl _DAC0L
                                    326 	.globl _REF0CN
                                    327 	.globl _PSW
                                    328 	.globl _SMB0CR
                                    329 	.globl _TMR4H
                                    330 	.globl _TMR3H
                                    331 	.globl _TMR2H
                                    332 	.globl _TMR4L
                                    333 	.globl _TMR3L
                                    334 	.globl _TMR2L
                                    335 	.globl _RCAP4H
                                    336 	.globl _RCAP3H
                                    337 	.globl _RCAP2H
                                    338 	.globl _RCAP4L
                                    339 	.globl _RCAP3L
                                    340 	.globl _RCAP2L
                                    341 	.globl _TMR4CF
                                    342 	.globl _TMR3CF
                                    343 	.globl _TMR2CF
                                    344 	.globl _P4
                                    345 	.globl _TMR4CN
                                    346 	.globl _TMR3CN
                                    347 	.globl _TMR2CN
                                    348 	.globl _ADC0LTH
                                    349 	.globl _ADC2LT
                                    350 	.globl _ADC0LTL
                                    351 	.globl _ADC0GTH
                                    352 	.globl _ADC2GT
                                    353 	.globl _ADC0GTL
                                    354 	.globl _SMB0ADR
                                    355 	.globl _SMB0DAT
                                    356 	.globl _SMB0STA
                                    357 	.globl _CAN0STA
                                    358 	.globl _SMB0CN
                                    359 	.globl _ADC0H
                                    360 	.globl _ADC2
                                    361 	.globl _ADC0L
                                    362 	.globl _ADC2CF
                                    363 	.globl _ADC0CF
                                    364 	.globl _AMX2SL
                                    365 	.globl _AMX0SL
                                    366 	.globl _AMX0CF
                                    367 	.globl _AMX0PRT
                                    368 	.globl _AMX2CF
                                    369 	.globl _SADEN0
                                    370 	.globl _IP
                                    371 	.globl _FLACL
                                    372 	.globl _FLSCL
                                    373 	.globl _P3
                                    374 	.globl _P3MDIN
                                    375 	.globl _P2MDIN
                                    376 	.globl _P1MDIN
                                    377 	.globl _SADDR1
                                    378 	.globl _SADDR0
                                    379 	.globl _IE
                                    380 	.globl _P3MDOUT
                                    381 	.globl _P2MDOUT
                                    382 	.globl _P1MDOUT
                                    383 	.globl _P0MDOUT
                                    384 	.globl _EMI0CF
                                    385 	.globl _EMI0CN
                                    386 	.globl _EMI0TC
                                    387 	.globl _P2
                                    388 	.globl _P7MDOUT
                                    389 	.globl _P6MDOUT
                                    390 	.globl _P5MDOUT
                                    391 	.globl _SPI0CKR
                                    392 	.globl _P4MDOUT
                                    393 	.globl _SPI0DAT
                                    394 	.globl _SPI0CFG
                                    395 	.globl _SBUF1
                                    396 	.globl _SBUF0
                                    397 	.globl _SCON1
                                    398 	.globl _SCON0
                                    399 	.globl _CLKSEL
                                    400 	.globl _SFRPGCN
                                    401 	.globl _SSTA0
                                    402 	.globl _P1
                                    403 	.globl _PSCTL
                                    404 	.globl _CKCON
                                    405 	.globl _TH1
                                    406 	.globl _OSCXCN
                                    407 	.globl _TH0
                                    408 	.globl _OSCICL
                                    409 	.globl _TL1
                                    410 	.globl _OSCICN
                                    411 	.globl _TL0
                                    412 	.globl _CPT2MD
                                    413 	.globl _CPT1MD
                                    414 	.globl _CPT0MD
                                    415 	.globl _TMOD
                                    416 	.globl _CPT2CN
                                    417 	.globl _CPT1CN
                                    418 	.globl _CPT0CN
                                    419 	.globl _TCON
                                    420 	.globl _PCON
                                    421 	.globl _SFRLAST
                                    422 	.globl _SFRNEXT
                                    423 	.globl _SFRPAGE
                                    424 	.globl _DPH
                                    425 	.globl _DPL
                                    426 	.globl _SP
                                    427 	.globl _P0
                                    428 	.globl _x
                                    429 	.globl _escreve_caractere_PARM_2
                                    430 	.globl _limpa_glcd_PARM_1
                                    431 	.globl _conf_pag_PARM_2
                                    432 	.globl _conf_Y_PARM_2
                                    433 	.globl _esc_glcd_PARM_3
                                    434 	.globl _esc_glcd_PARM_2
                                    435 	.globl _le_glcd_PARM_2
                                    436 	.globl _le_glcd_PARM_1
                                    437 	.globl _terminal_ativo
                                    438 	.globl _tecla
                                    439 	.globl _TECLA_ANT
                                    440 	.globl _TECLA
                                    441 	.globl _end_fim_ram
                                    442 	.globl _conta_caractere
                                    443 	.globl _putchar
                                    444 	.globl _ligar_buzzer
                                    445 	.globl _le_tec
                                    446 	.globl _contagemRegressiva
                                    447 	.globl _resetar_tempo
                                    448 	.globl _definir_tempo_botao
                                    449 ;--------------------------------------------------------
                                    450 ; special function registers
                                    451 ;--------------------------------------------------------
                                    452 	.area RSEG    (ABS,DATA)
      000000                        453 	.org 0x0000
                           000080   454 G$P0$0$0 == 0x0080
                           000080   455 _P0	=	0x0080
                           000081   456 G$SP$0$0 == 0x0081
                           000081   457 _SP	=	0x0081
                           000082   458 G$DPL$0$0 == 0x0082
                           000082   459 _DPL	=	0x0082
                           000083   460 G$DPH$0$0 == 0x0083
                           000083   461 _DPH	=	0x0083
                           000084   462 G$SFRPAGE$0$0 == 0x0084
                           000084   463 _SFRPAGE	=	0x0084
                           000085   464 G$SFRNEXT$0$0 == 0x0085
                           000085   465 _SFRNEXT	=	0x0085
                           000086   466 G$SFRLAST$0$0 == 0x0086
                           000086   467 _SFRLAST	=	0x0086
                           000087   468 G$PCON$0$0 == 0x0087
                           000087   469 _PCON	=	0x0087
                           000088   470 G$TCON$0$0 == 0x0088
                           000088   471 _TCON	=	0x0088
                           000088   472 G$CPT0CN$0$0 == 0x0088
                           000088   473 _CPT0CN	=	0x0088
                           000088   474 G$CPT1CN$0$0 == 0x0088
                           000088   475 _CPT1CN	=	0x0088
                           000088   476 G$CPT2CN$0$0 == 0x0088
                           000088   477 _CPT2CN	=	0x0088
                           000089   478 G$TMOD$0$0 == 0x0089
                           000089   479 _TMOD	=	0x0089
                           000089   480 G$CPT0MD$0$0 == 0x0089
                           000089   481 _CPT0MD	=	0x0089
                           000089   482 G$CPT1MD$0$0 == 0x0089
                           000089   483 _CPT1MD	=	0x0089
                           000089   484 G$CPT2MD$0$0 == 0x0089
                           000089   485 _CPT2MD	=	0x0089
                           00008A   486 G$TL0$0$0 == 0x008a
                           00008A   487 _TL0	=	0x008a
                           00008A   488 G$OSCICN$0$0 == 0x008a
                           00008A   489 _OSCICN	=	0x008a
                           00008B   490 G$TL1$0$0 == 0x008b
                           00008B   491 _TL1	=	0x008b
                           00008B   492 G$OSCICL$0$0 == 0x008b
                           00008B   493 _OSCICL	=	0x008b
                           00008C   494 G$TH0$0$0 == 0x008c
                           00008C   495 _TH0	=	0x008c
                           00008C   496 G$OSCXCN$0$0 == 0x008c
                           00008C   497 _OSCXCN	=	0x008c
                           00008D   498 G$TH1$0$0 == 0x008d
                           00008D   499 _TH1	=	0x008d
                           00008E   500 G$CKCON$0$0 == 0x008e
                           00008E   501 _CKCON	=	0x008e
                           00008F   502 G$PSCTL$0$0 == 0x008f
                           00008F   503 _PSCTL	=	0x008f
                           000090   504 G$P1$0$0 == 0x0090
                           000090   505 _P1	=	0x0090
                           000091   506 G$SSTA0$0$0 == 0x0091
                           000091   507 _SSTA0	=	0x0091
                           000096   508 G$SFRPGCN$0$0 == 0x0096
                           000096   509 _SFRPGCN	=	0x0096
                           000097   510 G$CLKSEL$0$0 == 0x0097
                           000097   511 _CLKSEL	=	0x0097
                           000098   512 G$SCON0$0$0 == 0x0098
                           000098   513 _SCON0	=	0x0098
                           000098   514 G$SCON1$0$0 == 0x0098
                           000098   515 _SCON1	=	0x0098
                           000099   516 G$SBUF0$0$0 == 0x0099
                           000099   517 _SBUF0	=	0x0099
                           000099   518 G$SBUF1$0$0 == 0x0099
                           000099   519 _SBUF1	=	0x0099
                           00009A   520 G$SPI0CFG$0$0 == 0x009a
                           00009A   521 _SPI0CFG	=	0x009a
                           00009B   522 G$SPI0DAT$0$0 == 0x009b
                           00009B   523 _SPI0DAT	=	0x009b
                           00009C   524 G$P4MDOUT$0$0 == 0x009c
                           00009C   525 _P4MDOUT	=	0x009c
                           00009D   526 G$SPI0CKR$0$0 == 0x009d
                           00009D   527 _SPI0CKR	=	0x009d
                           00009D   528 G$P5MDOUT$0$0 == 0x009d
                           00009D   529 _P5MDOUT	=	0x009d
                           00009E   530 G$P6MDOUT$0$0 == 0x009e
                           00009E   531 _P6MDOUT	=	0x009e
                           00009F   532 G$P7MDOUT$0$0 == 0x009f
                           00009F   533 _P7MDOUT	=	0x009f
                           0000A0   534 G$P2$0$0 == 0x00a0
                           0000A0   535 _P2	=	0x00a0
                           0000A1   536 G$EMI0TC$0$0 == 0x00a1
                           0000A1   537 _EMI0TC	=	0x00a1
                           0000A2   538 G$EMI0CN$0$0 == 0x00a2
                           0000A2   539 _EMI0CN	=	0x00a2
                           0000A3   540 G$EMI0CF$0$0 == 0x00a3
                           0000A3   541 _EMI0CF	=	0x00a3
                           0000A4   542 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   543 _P0MDOUT	=	0x00a4
                           0000A5   544 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   545 _P1MDOUT	=	0x00a5
                           0000A6   546 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   547 _P2MDOUT	=	0x00a6
                           0000A7   548 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   549 _P3MDOUT	=	0x00a7
                           0000A8   550 G$IE$0$0 == 0x00a8
                           0000A8   551 _IE	=	0x00a8
                           0000A9   552 G$SADDR0$0$0 == 0x00a9
                           0000A9   553 _SADDR0	=	0x00a9
                           0000A9   554 G$SADDR1$0$0 == 0x00a9
                           0000A9   555 _SADDR1	=	0x00a9
                           0000AD   556 G$P1MDIN$0$0 == 0x00ad
                           0000AD   557 _P1MDIN	=	0x00ad
                           0000AE   558 G$P2MDIN$0$0 == 0x00ae
                           0000AE   559 _P2MDIN	=	0x00ae
                           0000AF   560 G$P3MDIN$0$0 == 0x00af
                           0000AF   561 _P3MDIN	=	0x00af
                           0000B0   562 G$P3$0$0 == 0x00b0
                           0000B0   563 _P3	=	0x00b0
                           0000B7   564 G$FLSCL$0$0 == 0x00b7
                           0000B7   565 _FLSCL	=	0x00b7
                           0000B7   566 G$FLACL$0$0 == 0x00b7
                           0000B7   567 _FLACL	=	0x00b7
                           0000B8   568 G$IP$0$0 == 0x00b8
                           0000B8   569 _IP	=	0x00b8
                           0000B9   570 G$SADEN0$0$0 == 0x00b9
                           0000B9   571 _SADEN0	=	0x00b9
                           0000BA   572 G$AMX2CF$0$0 == 0x00ba
                           0000BA   573 _AMX2CF	=	0x00ba
                           0000BD   574 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   575 _AMX0PRT	=	0x00bd
                           0000BA   576 G$AMX0CF$0$0 == 0x00ba
                           0000BA   577 _AMX0CF	=	0x00ba
                           0000BB   578 G$AMX0SL$0$0 == 0x00bb
                           0000BB   579 _AMX0SL	=	0x00bb
                           0000BB   580 G$AMX2SL$0$0 == 0x00bb
                           0000BB   581 _AMX2SL	=	0x00bb
                           0000BC   582 G$ADC0CF$0$0 == 0x00bc
                           0000BC   583 _ADC0CF	=	0x00bc
                           0000BC   584 G$ADC2CF$0$0 == 0x00bc
                           0000BC   585 _ADC2CF	=	0x00bc
                           0000BE   586 G$ADC0L$0$0 == 0x00be
                           0000BE   587 _ADC0L	=	0x00be
                           0000BE   588 G$ADC2$0$0 == 0x00be
                           0000BE   589 _ADC2	=	0x00be
                           0000BF   590 G$ADC0H$0$0 == 0x00bf
                           0000BF   591 _ADC0H	=	0x00bf
                           0000C0   592 G$SMB0CN$0$0 == 0x00c0
                           0000C0   593 _SMB0CN	=	0x00c0
                           0000C0   594 G$CAN0STA$0$0 == 0x00c0
                           0000C0   595 _CAN0STA	=	0x00c0
                           0000C1   596 G$SMB0STA$0$0 == 0x00c1
                           0000C1   597 _SMB0STA	=	0x00c1
                           0000C2   598 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   599 _SMB0DAT	=	0x00c2
                           0000C3   600 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   601 _SMB0ADR	=	0x00c3
                           0000C4   602 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   603 _ADC0GTL	=	0x00c4
                           0000C4   604 G$ADC2GT$0$0 == 0x00c4
                           0000C4   605 _ADC2GT	=	0x00c4
                           0000C5   606 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   607 _ADC0GTH	=	0x00c5
                           0000C6   608 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   609 _ADC0LTL	=	0x00c6
                           0000C6   610 G$ADC2LT$0$0 == 0x00c6
                           0000C6   611 _ADC2LT	=	0x00c6
                           0000C7   612 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   613 _ADC0LTH	=	0x00c7
                           0000C8   614 G$TMR2CN$0$0 == 0x00c8
                           0000C8   615 _TMR2CN	=	0x00c8
                           0000C8   616 G$TMR3CN$0$0 == 0x00c8
                           0000C8   617 _TMR3CN	=	0x00c8
                           0000C8   618 G$TMR4CN$0$0 == 0x00c8
                           0000C8   619 _TMR4CN	=	0x00c8
                           0000C8   620 G$P4$0$0 == 0x00c8
                           0000C8   621 _P4	=	0x00c8
                           0000C9   622 G$TMR2CF$0$0 == 0x00c9
                           0000C9   623 _TMR2CF	=	0x00c9
                           0000C9   624 G$TMR3CF$0$0 == 0x00c9
                           0000C9   625 _TMR3CF	=	0x00c9
                           0000C9   626 G$TMR4CF$0$0 == 0x00c9
                           0000C9   627 _TMR4CF	=	0x00c9
                           0000CA   628 G$RCAP2L$0$0 == 0x00ca
                           0000CA   629 _RCAP2L	=	0x00ca
                           0000CA   630 G$RCAP3L$0$0 == 0x00ca
                           0000CA   631 _RCAP3L	=	0x00ca
                           0000CA   632 G$RCAP4L$0$0 == 0x00ca
                           0000CA   633 _RCAP4L	=	0x00ca
                           0000CB   634 G$RCAP2H$0$0 == 0x00cb
                           0000CB   635 _RCAP2H	=	0x00cb
                           0000CB   636 G$RCAP3H$0$0 == 0x00cb
                           0000CB   637 _RCAP3H	=	0x00cb
                           0000CB   638 G$RCAP4H$0$0 == 0x00cb
                           0000CB   639 _RCAP4H	=	0x00cb
                           0000CC   640 G$TMR2L$0$0 == 0x00cc
                           0000CC   641 _TMR2L	=	0x00cc
                           0000CC   642 G$TMR3L$0$0 == 0x00cc
                           0000CC   643 _TMR3L	=	0x00cc
                           0000CC   644 G$TMR4L$0$0 == 0x00cc
                           0000CC   645 _TMR4L	=	0x00cc
                           0000CD   646 G$TMR2H$0$0 == 0x00cd
                           0000CD   647 _TMR2H	=	0x00cd
                           0000CD   648 G$TMR3H$0$0 == 0x00cd
                           0000CD   649 _TMR3H	=	0x00cd
                           0000CD   650 G$TMR4H$0$0 == 0x00cd
                           0000CD   651 _TMR4H	=	0x00cd
                           0000CF   652 G$SMB0CR$0$0 == 0x00cf
                           0000CF   653 _SMB0CR	=	0x00cf
                           0000D0   654 G$PSW$0$0 == 0x00d0
                           0000D0   655 _PSW	=	0x00d0
                           0000D1   656 G$REF0CN$0$0 == 0x00d1
                           0000D1   657 _REF0CN	=	0x00d1
                           0000D2   658 G$DAC0L$0$0 == 0x00d2
                           0000D2   659 _DAC0L	=	0x00d2
                           0000D2   660 G$DAC1L$0$0 == 0x00d2
                           0000D2   661 _DAC1L	=	0x00d2
                           0000D3   662 G$DAC0H$0$0 == 0x00d3
                           0000D3   663 _DAC0H	=	0x00d3
                           0000D3   664 G$DAC1H$0$0 == 0x00d3
                           0000D3   665 _DAC1H	=	0x00d3
                           0000D4   666 G$DAC0CN$0$0 == 0x00d4
                           0000D4   667 _DAC0CN	=	0x00d4
                           0000D4   668 G$DAC1CN$0$0 == 0x00d4
                           0000D4   669 _DAC1CN	=	0x00d4
                           0000D6   670 G$HVA0CN$0$0 == 0x00d6
                           0000D6   671 _HVA0CN	=	0x00d6
                           0000D8   672 G$PCA0CN$0$0 == 0x00d8
                           0000D8   673 _PCA0CN	=	0x00d8
                           0000D8   674 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   675 _CAN0DATL	=	0x00d8
                           0000D8   676 G$P5$0$0 == 0x00d8
                           0000D8   677 _P5	=	0x00d8
                           0000D9   678 G$PCA0MD$0$0 == 0x00d9
                           0000D9   679 _PCA0MD	=	0x00d9
                           0000D9   680 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   681 _CAN0DATH	=	0x00d9
                           0000DA   682 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   683 _PCA0CPM0	=	0x00da
                           0000DA   684 G$CAN0ADR$0$0 == 0x00da
                           0000DA   685 _CAN0ADR	=	0x00da
                           0000DB   686 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   687 _PCA0CPM1	=	0x00db
                           0000DB   688 G$CAN0TST$0$0 == 0x00db
                           0000DB   689 _CAN0TST	=	0x00db
                           0000DC   690 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   691 _PCA0CPM2	=	0x00dc
                           0000DD   692 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   693 _PCA0CPM3	=	0x00dd
                           0000DE   694 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   695 _PCA0CPM4	=	0x00de
                           0000DF   696 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   697 _PCA0CPM5	=	0x00df
                           0000E0   698 G$ACC$0$0 == 0x00e0
                           0000E0   699 _ACC	=	0x00e0
                           0000E1   700 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   701 _PCA0CPL5	=	0x00e1
                           0000E1   702 G$XBR0$0$0 == 0x00e1
                           0000E1   703 _XBR0	=	0x00e1
                           0000E2   704 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   705 _PCA0CPH5	=	0x00e2
                           0000E2   706 G$XBR1$0$0 == 0x00e2
                           0000E2   707 _XBR1	=	0x00e2
                           0000E3   708 G$XBR2$0$0 == 0x00e3
                           0000E3   709 _XBR2	=	0x00e3
                           0000E4   710 G$XBR3$0$0 == 0x00e4
                           0000E4   711 _XBR3	=	0x00e4
                           0000E6   712 G$EIE1$0$0 == 0x00e6
                           0000E6   713 _EIE1	=	0x00e6
                           0000E7   714 G$EIE2$0$0 == 0x00e7
                           0000E7   715 _EIE2	=	0x00e7
                           0000E8   716 G$ADC0CN$0$0 == 0x00e8
                           0000E8   717 _ADC0CN	=	0x00e8
                           0000E8   718 G$ADC2CN$0$0 == 0x00e8
                           0000E8   719 _ADC2CN	=	0x00e8
                           0000E8   720 G$P6$0$0 == 0x00e8
                           0000E8   721 _P6	=	0x00e8
                           0000E9   722 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   723 _PCA0CPL2	=	0x00e9
                           0000EA   724 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   725 _PCA0CPH2	=	0x00ea
                           0000EB   726 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   727 _PCA0CPL3	=	0x00eb
                           0000EC   728 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   729 _PCA0CPH3	=	0x00ec
                           0000ED   730 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   731 _PCA0CPL4	=	0x00ed
                           0000EE   732 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   733 _PCA0CPH4	=	0x00ee
                           0000EF   734 G$RSTSRC$0$0 == 0x00ef
                           0000EF   735 _RSTSRC	=	0x00ef
                           0000F0   736 G$B$0$0 == 0x00f0
                           0000F0   737 _B	=	0x00f0
                           0000F6   738 G$EIP1$0$0 == 0x00f6
                           0000F6   739 _EIP1	=	0x00f6
                           0000F7   740 G$EIP2$0$0 == 0x00f7
                           0000F7   741 _EIP2	=	0x00f7
                           0000F8   742 G$SPI0CN$0$0 == 0x00f8
                           0000F8   743 _SPI0CN	=	0x00f8
                           0000F8   744 G$CAN0CN$0$0 == 0x00f8
                           0000F8   745 _CAN0CN	=	0x00f8
                           0000F8   746 G$P7$0$0 == 0x00f8
                           0000F8   747 _P7	=	0x00f8
                           0000F9   748 G$PCA0L$0$0 == 0x00f9
                           0000F9   749 _PCA0L	=	0x00f9
                           0000FA   750 G$PCA0H$0$0 == 0x00fa
                           0000FA   751 _PCA0H	=	0x00fa
                           0000FB   752 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   753 _PCA0CPL0	=	0x00fb
                           0000FC   754 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   755 _PCA0CPH0	=	0x00fc
                           0000FD   756 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   757 _PCA0CPL1	=	0x00fd
                           0000FE   758 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   759 _PCA0CPH1	=	0x00fe
                           0000FF   760 G$WDTCN$0$0 == 0x00ff
                           0000FF   761 _WDTCN	=	0x00ff
                           00FAF9   762 G$PCA0$0$0 == 0xfaf9
                           00FAF9   763 _PCA0	=	0xfaf9
                           00FCFB   764 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   765 _PCA0CP0	=	0xfcfb
                           00FEFD   766 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   767 _PCA0CP1	=	0xfefd
                           00EAE9   768 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   769 _PCA0CP2	=	0xeae9
                           00ECEB   770 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   771 _PCA0CP3	=	0xeceb
                           00EEED   772 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   773 _PCA0CP4	=	0xeeed
                           00E2E1   774 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   775 _PCA0CP5	=	0xe2e1
                           00D9D8   776 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   777 _CAN0DAT	=	0xd9d8
                           00D3D2   778 G$DAC0$0$0 == 0xd3d2
                           00D3D2   779 _DAC0	=	0xd3d2
                           00D3D2   780 G$DAC1$0$0 == 0xd3d2
                           00D3D2   781 _DAC1	=	0xd3d2
                           00CBCA   782 G$RCAP2$0$0 == 0xcbca
                           00CBCA   783 _RCAP2	=	0xcbca
                           00CBCA   784 G$RCAP3$0$0 == 0xcbca
                           00CBCA   785 _RCAP3	=	0xcbca
                           00CBCA   786 G$RCAP4$0$0 == 0xcbca
                           00CBCA   787 _RCAP4	=	0xcbca
                           00CDCC   788 G$TMR2$0$0 == 0xcdcc
                           00CDCC   789 _TMR2	=	0xcdcc
                           00CDCC   790 G$TMR3$0$0 == 0xcdcc
                           00CDCC   791 _TMR3	=	0xcdcc
                           00CDCC   792 G$TMR4$0$0 == 0xcdcc
                           00CDCC   793 _TMR4	=	0xcdcc
                           00C5C4   794 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   795 _ADC0GT	=	0xc5c4
                           00C7C6   796 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   797 _ADC0LT	=	0xc7c6
                           00BFBE   798 G$ADC0$0$0 == 0xbfbe
                           00BFBE   799 _ADC0	=	0xbfbe
                           008382   800 G$DP$0$0 == 0x8382
                           008382   801 _DP	=	0x8382
                           0000A2   802 G$_XPAGE$0$0 == 0x00a2
                           0000A2   803 __XPAGE	=	0x00a2
                                    804 ;--------------------------------------------------------
                                    805 ; special function bits
                                    806 ;--------------------------------------------------------
                                    807 	.area RSEG    (ABS,DATA)
      000000                        808 	.org 0x0000
                           000080   809 G$P0_0$0$0 == 0x0080
                           000080   810 _P0_0	=	0x0080
                           000081   811 G$P0_1$0$0 == 0x0081
                           000081   812 _P0_1	=	0x0081
                           000082   813 G$P0_2$0$0 == 0x0082
                           000082   814 _P0_2	=	0x0082
                           000083   815 G$P0_3$0$0 == 0x0083
                           000083   816 _P0_3	=	0x0083
                           000084   817 G$P0_4$0$0 == 0x0084
                           000084   818 _P0_4	=	0x0084
                           000085   819 G$P0_5$0$0 == 0x0085
                           000085   820 _P0_5	=	0x0085
                           000086   821 G$P0_6$0$0 == 0x0086
                           000086   822 _P0_6	=	0x0086
                           000087   823 G$P0_7$0$0 == 0x0087
                           000087   824 _P0_7	=	0x0087
                           000090   825 G$P1_0$0$0 == 0x0090
                           000090   826 _P1_0	=	0x0090
                           000091   827 G$P1_1$0$0 == 0x0091
                           000091   828 _P1_1	=	0x0091
                           000092   829 G$P1_2$0$0 == 0x0092
                           000092   830 _P1_2	=	0x0092
                           000093   831 G$P1_3$0$0 == 0x0093
                           000093   832 _P1_3	=	0x0093
                           000094   833 G$P1_4$0$0 == 0x0094
                           000094   834 _P1_4	=	0x0094
                           000095   835 G$P1_5$0$0 == 0x0095
                           000095   836 _P1_5	=	0x0095
                           000096   837 G$P1_6$0$0 == 0x0096
                           000096   838 _P1_6	=	0x0096
                           000097   839 G$P1_7$0$0 == 0x0097
                           000097   840 _P1_7	=	0x0097
                           0000A0   841 G$P2_0$0$0 == 0x00a0
                           0000A0   842 _P2_0	=	0x00a0
                           0000A1   843 G$P2_1$0$0 == 0x00a1
                           0000A1   844 _P2_1	=	0x00a1
                           0000A2   845 G$P2_2$0$0 == 0x00a2
                           0000A2   846 _P2_2	=	0x00a2
                           0000A3   847 G$P2_3$0$0 == 0x00a3
                           0000A3   848 _P2_3	=	0x00a3
                           0000A4   849 G$P2_4$0$0 == 0x00a4
                           0000A4   850 _P2_4	=	0x00a4
                           0000A5   851 G$P2_5$0$0 == 0x00a5
                           0000A5   852 _P2_5	=	0x00a5
                           0000A6   853 G$P2_6$0$0 == 0x00a6
                           0000A6   854 _P2_6	=	0x00a6
                           0000A7   855 G$P2_7$0$0 == 0x00a7
                           0000A7   856 _P2_7	=	0x00a7
                           0000B0   857 G$P3_0$0$0 == 0x00b0
                           0000B0   858 _P3_0	=	0x00b0
                           0000B1   859 G$P3_1$0$0 == 0x00b1
                           0000B1   860 _P3_1	=	0x00b1
                           0000B2   861 G$P3_2$0$0 == 0x00b2
                           0000B2   862 _P3_2	=	0x00b2
                           0000B3   863 G$P3_3$0$0 == 0x00b3
                           0000B3   864 _P3_3	=	0x00b3
                           0000B4   865 G$P3_4$0$0 == 0x00b4
                           0000B4   866 _P3_4	=	0x00b4
                           0000B5   867 G$P3_5$0$0 == 0x00b5
                           0000B5   868 _P3_5	=	0x00b5
                           0000B6   869 G$P3_6$0$0 == 0x00b6
                           0000B6   870 _P3_6	=	0x00b6
                           0000B7   871 G$P3_7$0$0 == 0x00b7
                           0000B7   872 _P3_7	=	0x00b7
                           0000C8   873 G$P4_0$0$0 == 0x00c8
                           0000C8   874 _P4_0	=	0x00c8
                           0000C9   875 G$P4_1$0$0 == 0x00c9
                           0000C9   876 _P4_1	=	0x00c9
                           0000CA   877 G$P4_2$0$0 == 0x00ca
                           0000CA   878 _P4_2	=	0x00ca
                           0000CB   879 G$P4_3$0$0 == 0x00cb
                           0000CB   880 _P4_3	=	0x00cb
                           0000CC   881 G$P4_4$0$0 == 0x00cc
                           0000CC   882 _P4_4	=	0x00cc
                           0000CD   883 G$P4_5$0$0 == 0x00cd
                           0000CD   884 _P4_5	=	0x00cd
                           0000CE   885 G$P4_6$0$0 == 0x00ce
                           0000CE   886 _P4_6	=	0x00ce
                           0000CF   887 G$P4_7$0$0 == 0x00cf
                           0000CF   888 _P4_7	=	0x00cf
                           0000D8   889 G$P5_0$0$0 == 0x00d8
                           0000D8   890 _P5_0	=	0x00d8
                           0000D9   891 G$P5_1$0$0 == 0x00d9
                           0000D9   892 _P5_1	=	0x00d9
                           0000DA   893 G$P5_2$0$0 == 0x00da
                           0000DA   894 _P5_2	=	0x00da
                           0000DB   895 G$P5_3$0$0 == 0x00db
                           0000DB   896 _P5_3	=	0x00db
                           0000DC   897 G$P5_4$0$0 == 0x00dc
                           0000DC   898 _P5_4	=	0x00dc
                           0000DD   899 G$P5_5$0$0 == 0x00dd
                           0000DD   900 _P5_5	=	0x00dd
                           0000DE   901 G$P5_6$0$0 == 0x00de
                           0000DE   902 _P5_6	=	0x00de
                           0000DF   903 G$P5_7$0$0 == 0x00df
                           0000DF   904 _P5_7	=	0x00df
                           0000E8   905 G$P6_0$0$0 == 0x00e8
                           0000E8   906 _P6_0	=	0x00e8
                           0000E9   907 G$P6_1$0$0 == 0x00e9
                           0000E9   908 _P6_1	=	0x00e9
                           0000EA   909 G$P6_2$0$0 == 0x00ea
                           0000EA   910 _P6_2	=	0x00ea
                           0000EB   911 G$P6_3$0$0 == 0x00eb
                           0000EB   912 _P6_3	=	0x00eb
                           0000EC   913 G$P6_4$0$0 == 0x00ec
                           0000EC   914 _P6_4	=	0x00ec
                           0000ED   915 G$P6_5$0$0 == 0x00ed
                           0000ED   916 _P6_5	=	0x00ed
                           0000EE   917 G$P6_6$0$0 == 0x00ee
                           0000EE   918 _P6_6	=	0x00ee
                           0000EF   919 G$P6_7$0$0 == 0x00ef
                           0000EF   920 _P6_7	=	0x00ef
                           0000F8   921 G$P7_0$0$0 == 0x00f8
                           0000F8   922 _P7_0	=	0x00f8
                           0000F9   923 G$P7_1$0$0 == 0x00f9
                           0000F9   924 _P7_1	=	0x00f9
                           0000FA   925 G$P7_2$0$0 == 0x00fa
                           0000FA   926 _P7_2	=	0x00fa
                           0000FB   927 G$P7_3$0$0 == 0x00fb
                           0000FB   928 _P7_3	=	0x00fb
                           0000FC   929 G$P7_4$0$0 == 0x00fc
                           0000FC   930 _P7_4	=	0x00fc
                           0000FD   931 G$P7_5$0$0 == 0x00fd
                           0000FD   932 _P7_5	=	0x00fd
                           0000FE   933 G$P7_6$0$0 == 0x00fe
                           0000FE   934 _P7_6	=	0x00fe
                           0000FF   935 G$P7_7$0$0 == 0x00ff
                           0000FF   936 _P7_7	=	0x00ff
                           00008F   937 G$TF1$0$0 == 0x008f
                           00008F   938 _TF1	=	0x008f
                           00008E   939 G$TR1$0$0 == 0x008e
                           00008E   940 _TR1	=	0x008e
                           00008D   941 G$TF0$0$0 == 0x008d
                           00008D   942 _TF0	=	0x008d
                           00008C   943 G$TR0$0$0 == 0x008c
                           00008C   944 _TR0	=	0x008c
                           00008B   945 G$IE1$0$0 == 0x008b
                           00008B   946 _IE1	=	0x008b
                           00008A   947 G$IT1$0$0 == 0x008a
                           00008A   948 _IT1	=	0x008a
                           000089   949 G$IE0$0$0 == 0x0089
                           000089   950 _IE0	=	0x0089
                           000088   951 G$IT0$0$0 == 0x0088
                           000088   952 _IT0	=	0x0088
                           00008F   953 G$CP0EN$0$0 == 0x008f
                           00008F   954 _CP0EN	=	0x008f
                           00008E   955 G$CP0OUT$0$0 == 0x008e
                           00008E   956 _CP0OUT	=	0x008e
                           00008D   957 G$CP0RIF$0$0 == 0x008d
                           00008D   958 _CP0RIF	=	0x008d
                           00008C   959 G$CP0FIF$0$0 == 0x008c
                           00008C   960 _CP0FIF	=	0x008c
                           00008B   961 G$CP0HYP1$0$0 == 0x008b
                           00008B   962 _CP0HYP1	=	0x008b
                           00008A   963 G$CP0HYP0$0$0 == 0x008a
                           00008A   964 _CP0HYP0	=	0x008a
                           000089   965 G$CP0HYN1$0$0 == 0x0089
                           000089   966 _CP0HYN1	=	0x0089
                           000088   967 G$CP0HYN0$0$0 == 0x0088
                           000088   968 _CP0HYN0	=	0x0088
                           00008F   969 G$CP1EN$0$0 == 0x008f
                           00008F   970 _CP1EN	=	0x008f
                           00008E   971 G$CP1OUT$0$0 == 0x008e
                           00008E   972 _CP1OUT	=	0x008e
                           00008D   973 G$CP1RIF$0$0 == 0x008d
                           00008D   974 _CP1RIF	=	0x008d
                           00008C   975 G$CP1FIF$0$0 == 0x008c
                           00008C   976 _CP1FIF	=	0x008c
                           00008B   977 G$CP1HYP1$0$0 == 0x008b
                           00008B   978 _CP1HYP1	=	0x008b
                           00008A   979 G$CP1HYP0$0$0 == 0x008a
                           00008A   980 _CP1HYP0	=	0x008a
                           000089   981 G$CP1HYN1$0$0 == 0x0089
                           000089   982 _CP1HYN1	=	0x0089
                           000088   983 G$CP1HYN0$0$0 == 0x0088
                           000088   984 _CP1HYN0	=	0x0088
                           00008F   985 G$CP2EN$0$0 == 0x008f
                           00008F   986 _CP2EN	=	0x008f
                           00008E   987 G$CP2OUT$0$0 == 0x008e
                           00008E   988 _CP2OUT	=	0x008e
                           00008D   989 G$CP2RIF$0$0 == 0x008d
                           00008D   990 _CP2RIF	=	0x008d
                           00008C   991 G$CP2FIF$0$0 == 0x008c
                           00008C   992 _CP2FIF	=	0x008c
                           00008B   993 G$CP2HYP1$0$0 == 0x008b
                           00008B   994 _CP2HYP1	=	0x008b
                           00008A   995 G$CP2HYP0$0$0 == 0x008a
                           00008A   996 _CP2HYP0	=	0x008a
                           000089   997 G$CP2HYN1$0$0 == 0x0089
                           000089   998 _CP2HYN1	=	0x0089
                           000088   999 G$CP2HYN0$0$0 == 0x0088
                           000088  1000 _CP2HYN0	=	0x0088
                           00009F  1001 G$SM00$0$0 == 0x009f
                           00009F  1002 _SM00	=	0x009f
                           00009E  1003 G$SM10$0$0 == 0x009e
                           00009E  1004 _SM10	=	0x009e
                           00009D  1005 G$SM20$0$0 == 0x009d
                           00009D  1006 _SM20	=	0x009d
                           00009C  1007 G$REN0$0$0 == 0x009c
                           00009C  1008 _REN0	=	0x009c
                           00009B  1009 G$TB80$0$0 == 0x009b
                           00009B  1010 _TB80	=	0x009b
                           00009A  1011 G$RB80$0$0 == 0x009a
                           00009A  1012 _RB80	=	0x009a
                           000099  1013 G$TI0$0$0 == 0x0099
                           000099  1014 _TI0	=	0x0099
                           000098  1015 G$RI0$0$0 == 0x0098
                           000098  1016 _RI0	=	0x0098
                           00009F  1017 G$S1MODE$0$0 == 0x009f
                           00009F  1018 _S1MODE	=	0x009f
                           00009D  1019 G$MCE1$0$0 == 0x009d
                           00009D  1020 _MCE1	=	0x009d
                           00009C  1021 G$REN1$0$0 == 0x009c
                           00009C  1022 _REN1	=	0x009c
                           00009B  1023 G$TB81$0$0 == 0x009b
                           00009B  1024 _TB81	=	0x009b
                           00009A  1025 G$RB81$0$0 == 0x009a
                           00009A  1026 _RB81	=	0x009a
                           000099  1027 G$TI1$0$0 == 0x0099
                           000099  1028 _TI1	=	0x0099
                           000098  1029 G$RI1$0$0 == 0x0098
                           000098  1030 _RI1	=	0x0098
                           0000AF  1031 G$EA$0$0 == 0x00af
                           0000AF  1032 _EA	=	0x00af
                           0000AD  1033 G$ET2$0$0 == 0x00ad
                           0000AD  1034 _ET2	=	0x00ad
                           0000AC  1035 G$ES0$0$0 == 0x00ac
                           0000AC  1036 _ES0	=	0x00ac
                           0000AB  1037 G$ET1$0$0 == 0x00ab
                           0000AB  1038 _ET1	=	0x00ab
                           0000AA  1039 G$EX1$0$0 == 0x00aa
                           0000AA  1040 _EX1	=	0x00aa
                           0000A9  1041 G$ET0$0$0 == 0x00a9
                           0000A9  1042 _ET0	=	0x00a9
                           0000A8  1043 G$EX0$0$0 == 0x00a8
                           0000A8  1044 _EX0	=	0x00a8
                           0000BD  1045 G$PT2$0$0 == 0x00bd
                           0000BD  1046 _PT2	=	0x00bd
                           0000BC  1047 G$PS0$0$0 == 0x00bc
                           0000BC  1048 _PS0	=	0x00bc
                           0000BB  1049 G$PT1$0$0 == 0x00bb
                           0000BB  1050 _PT1	=	0x00bb
                           0000BA  1051 G$PX1$0$0 == 0x00ba
                           0000BA  1052 _PX1	=	0x00ba
                           0000B9  1053 G$PT0$0$0 == 0x00b9
                           0000B9  1054 _PT0	=	0x00b9
                           0000B8  1055 G$PX0$0$0 == 0x00b8
                           0000B8  1056 _PX0	=	0x00b8
                           0000C7  1057 G$BUSY$0$0 == 0x00c7
                           0000C7  1058 _BUSY	=	0x00c7
                           0000C6  1059 G$ENSMB$0$0 == 0x00c6
                           0000C6  1060 _ENSMB	=	0x00c6
                           0000C5  1061 G$STA$0$0 == 0x00c5
                           0000C5  1062 _STA	=	0x00c5
                           0000C4  1063 G$STO$0$0 == 0x00c4
                           0000C4  1064 _STO	=	0x00c4
                           0000C3  1065 G$SI$0$0 == 0x00c3
                           0000C3  1066 _SI	=	0x00c3
                           0000C2  1067 G$AA$0$0 == 0x00c2
                           0000C2  1068 _AA	=	0x00c2
                           0000C1  1069 G$SMBFTE$0$0 == 0x00c1
                           0000C1  1070 _SMBFTE	=	0x00c1
                           0000C0  1071 G$SMBTOE$0$0 == 0x00c0
                           0000C0  1072 _SMBTOE	=	0x00c0
                           0000C7  1073 G$BOFF$0$0 == 0x00c7
                           0000C7  1074 _BOFF	=	0x00c7
                           0000C6  1075 G$EWARN$0$0 == 0x00c6
                           0000C6  1076 _EWARN	=	0x00c6
                           0000C5  1077 G$EPASS$0$0 == 0x00c5
                           0000C5  1078 _EPASS	=	0x00c5
                           0000C4  1079 G$RXOK$0$0 == 0x00c4
                           0000C4  1080 _RXOK	=	0x00c4
                           0000C3  1081 G$TXOK$0$0 == 0x00c3
                           0000C3  1082 _TXOK	=	0x00c3
                           0000C2  1083 G$LEC2$0$0 == 0x00c2
                           0000C2  1084 _LEC2	=	0x00c2
                           0000C1  1085 G$LEC1$0$0 == 0x00c1
                           0000C1  1086 _LEC1	=	0x00c1
                           0000C0  1087 G$LEC0$0$0 == 0x00c0
                           0000C0  1088 _LEC0	=	0x00c0
                           0000CF  1089 G$TF2$0$0 == 0x00cf
                           0000CF  1090 _TF2	=	0x00cf
                           0000CE  1091 G$EXF2$0$0 == 0x00ce
                           0000CE  1092 _EXF2	=	0x00ce
                           0000CB  1093 G$EXEN2$0$0 == 0x00cb
                           0000CB  1094 _EXEN2	=	0x00cb
                           0000CA  1095 G$TR2$0$0 == 0x00ca
                           0000CA  1096 _TR2	=	0x00ca
                           0000C9  1097 G$CT2$0$0 == 0x00c9
                           0000C9  1098 _CT2	=	0x00c9
                           0000C8  1099 G$CPRL2$0$0 == 0x00c8
                           0000C8  1100 _CPRL2	=	0x00c8
                           0000CF  1101 G$TF3$0$0 == 0x00cf
                           0000CF  1102 _TF3	=	0x00cf
                           0000CE  1103 G$EXF3$0$0 == 0x00ce
                           0000CE  1104 _EXF3	=	0x00ce
                           0000CB  1105 G$EXEN3$0$0 == 0x00cb
                           0000CB  1106 _EXEN3	=	0x00cb
                           0000CA  1107 G$TR3$0$0 == 0x00ca
                           0000CA  1108 _TR3	=	0x00ca
                           0000C9  1109 G$CT3$0$0 == 0x00c9
                           0000C9  1110 _CT3	=	0x00c9
                           0000C8  1111 G$CPRL3$0$0 == 0x00c8
                           0000C8  1112 _CPRL3	=	0x00c8
                           0000CF  1113 G$TF4$0$0 == 0x00cf
                           0000CF  1114 _TF4	=	0x00cf
                           0000CE  1115 G$EXF4$0$0 == 0x00ce
                           0000CE  1116 _EXF4	=	0x00ce
                           0000CB  1117 G$EXEN4$0$0 == 0x00cb
                           0000CB  1118 _EXEN4	=	0x00cb
                           0000CA  1119 G$TR4$0$0 == 0x00ca
                           0000CA  1120 _TR4	=	0x00ca
                           0000C9  1121 G$CT4$0$0 == 0x00c9
                           0000C9  1122 _CT4	=	0x00c9
                           0000C8  1123 G$CPRL4$0$0 == 0x00c8
                           0000C8  1124 _CPRL4	=	0x00c8
                           0000D7  1125 G$CY$0$0 == 0x00d7
                           0000D7  1126 _CY	=	0x00d7
                           0000D6  1127 G$AC$0$0 == 0x00d6
                           0000D6  1128 _AC	=	0x00d6
                           0000D5  1129 G$F0$0$0 == 0x00d5
                           0000D5  1130 _F0	=	0x00d5
                           0000D4  1131 G$RS1$0$0 == 0x00d4
                           0000D4  1132 _RS1	=	0x00d4
                           0000D3  1133 G$RS0$0$0 == 0x00d3
                           0000D3  1134 _RS0	=	0x00d3
                           0000D2  1135 G$OV$0$0 == 0x00d2
                           0000D2  1136 _OV	=	0x00d2
                           0000D1  1137 G$F1$0$0 == 0x00d1
                           0000D1  1138 _F1	=	0x00d1
                           0000D0  1139 G$P$0$0 == 0x00d0
                           0000D0  1140 _P	=	0x00d0
                           0000DF  1141 G$CF$0$0 == 0x00df
                           0000DF  1142 _CF	=	0x00df
                           0000DE  1143 G$CR$0$0 == 0x00de
                           0000DE  1144 _CR	=	0x00de
                           0000DD  1145 G$CCF5$0$0 == 0x00dd
                           0000DD  1146 _CCF5	=	0x00dd
                           0000DC  1147 G$CCF4$0$0 == 0x00dc
                           0000DC  1148 _CCF4	=	0x00dc
                           0000DB  1149 G$CCF3$0$0 == 0x00db
                           0000DB  1150 _CCF3	=	0x00db
                           0000DA  1151 G$CCF2$0$0 == 0x00da
                           0000DA  1152 _CCF2	=	0x00da
                           0000D9  1153 G$CCF1$0$0 == 0x00d9
                           0000D9  1154 _CCF1	=	0x00d9
                           0000D8  1155 G$CCF0$0$0 == 0x00d8
                           0000D8  1156 _CCF0	=	0x00d8
                           0000EF  1157 G$AD0EN$0$0 == 0x00ef
                           0000EF  1158 _AD0EN	=	0x00ef
                           0000EE  1159 G$AD0TM$0$0 == 0x00ee
                           0000EE  1160 _AD0TM	=	0x00ee
                           0000ED  1161 G$AD0INT$0$0 == 0x00ed
                           0000ED  1162 _AD0INT	=	0x00ed
                           0000EC  1163 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1164 _AD0BUSY	=	0x00ec
                           0000EB  1165 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1166 _AD0CM1	=	0x00eb
                           0000EA  1167 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1168 _AD0CM0	=	0x00ea
                           0000E9  1169 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1170 _AD0WINT	=	0x00e9
                           0000E8  1171 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1172 _AD0LJST	=	0x00e8
                           0000EF  1173 G$AD2EN$0$0 == 0x00ef
                           0000EF  1174 _AD2EN	=	0x00ef
                           0000EE  1175 G$AD2TM$0$0 == 0x00ee
                           0000EE  1176 _AD2TM	=	0x00ee
                           0000ED  1177 G$AD2INT$0$0 == 0x00ed
                           0000ED  1178 _AD2INT	=	0x00ed
                           0000EC  1179 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1180 _AD2BUSY	=	0x00ec
                           0000EB  1181 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1182 _AD2CM2	=	0x00eb
                           0000EA  1183 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1184 _AD2CM1	=	0x00ea
                           0000E9  1185 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1186 _AD2CM0	=	0x00e9
                           0000E8  1187 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1188 _AD2WINT	=	0x00e8
                           0000FF  1189 G$SPIF$0$0 == 0x00ff
                           0000FF  1190 _SPIF	=	0x00ff
                           0000FE  1191 G$WCOL$0$0 == 0x00fe
                           0000FE  1192 _WCOL	=	0x00fe
                           0000FD  1193 G$MODF$0$0 == 0x00fd
                           0000FD  1194 _MODF	=	0x00fd
                           0000FC  1195 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1196 _RXOVRN	=	0x00fc
                           0000FB  1197 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1198 _NSSMD1	=	0x00fb
                           0000FA  1199 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1200 _NSSMD0	=	0x00fa
                           0000F9  1201 G$TXBMT$0$0 == 0x00f9
                           0000F9  1202 _TXBMT	=	0x00f9
                           0000F8  1203 G$SPIEN$0$0 == 0x00f8
                           0000F8  1204 _SPIEN	=	0x00f8
                           0000F8  1205 G$CANINIT$0$0 == 0x00f8
                           0000F8  1206 _CANINIT	=	0x00f8
                           0000F9  1207 G$CANIE$0$0 == 0x00f9
                           0000F9  1208 _CANIE	=	0x00f9
                           0000FA  1209 G$CANSIE$0$0 == 0x00fa
                           0000FA  1210 _CANSIE	=	0x00fa
                           0000FB  1211 G$CANEIE$0$0 == 0x00fb
                           0000FB  1212 _CANEIE	=	0x00fb
                           0000FC  1213 G$CANIF$0$0 == 0x00fc
                           0000FC  1214 _CANIF	=	0x00fc
                           0000FD  1215 G$CANDAR$0$0 == 0x00fd
                           0000FD  1216 _CANDAR	=	0x00fd
                           0000FE  1217 G$CANCCE$0$0 == 0x00fe
                           0000FE  1218 _CANCCE	=	0x00fe
                           0000FF  1219 G$CANTEST$0$0 == 0x00ff
                           0000FF  1220 _CANTEST	=	0x00ff
                                   1221 ;--------------------------------------------------------
                                   1222 ; overlayable register banks
                                   1223 ;--------------------------------------------------------
                                   1224 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1225 	.ds 8
                                   1226 ;--------------------------------------------------------
                                   1227 ; overlayable bit register bank
                                   1228 ;--------------------------------------------------------
                                   1229 	.area BIT_BANK	(REL,OVR,DATA)
      000023                       1230 bits:
      000023                       1231 	.ds 1
                           008000  1232 	b0 = bits[0]
                           008100  1233 	b1 = bits[1]
                           008200  1234 	b2 = bits[2]
                           008300  1235 	b3 = bits[3]
                           008400  1236 	b4 = bits[4]
                           008500  1237 	b5 = bits[5]
                           008600  1238 	b6 = bits[6]
                           008700  1239 	b7 = bits[7]
                                   1240 ;--------------------------------------------------------
                                   1241 ; internal ram data
                                   1242 ;--------------------------------------------------------
                                   1243 	.area DSEG    (DATA)
                           000000  1244 G$conta_caractere$0$0==.
      000008                       1245 _conta_caractere::
      000008                       1246 	.ds 1
                           000001  1247 G$end_fim_ram$0$0==.
      000009                       1248 _end_fim_ram::
      000009                       1249 	.ds 2
                           000003  1250 G$TECLA$0$0==.
      00000B                       1251 _TECLA::
      00000B                       1252 	.ds 1
                           000004  1253 G$TECLA_ANT$0$0==.
      00000C                       1254 _TECLA_ANT::
      00000C                       1255 	.ds 1
                           000005  1256 G$tecla$0$0==.
      00000D                       1257 _tecla::
      00000D                       1258 	.ds 1
                                   1259 ;--------------------------------------------------------
                                   1260 ; overlayable items in internal ram 
                                   1261 ;--------------------------------------------------------
                                   1262 	.area	OSEG    (OVR,DATA)
                                   1263 	.area	OSEG    (OVR,DATA)
                                   1264 	.area	OSEG    (OVR,DATA)
                                   1265 	.area	OSEG    (OVR,DATA)
                                   1266 	.area	OSEG    (OVR,DATA)
                                   1267 	.area	OSEG    (OVR,DATA)
                           000000  1268 Lmain.esc_RAM_SPI$dado$1$61==.
      000015                       1269 _esc_RAM_SPI_PARM_2:
      000015                       1270 	.ds 1
                                   1271 	.area	OSEG    (OVR,DATA)
                                   1272 	.area	OSEG    (OVR,DATA)
                                   1273 ;--------------------------------------------------------
                                   1274 ; Stack segment in internal ram 
                                   1275 ;--------------------------------------------------------
                                   1276 	.area	SSEG
      000024                       1277 __start__stack:
      000024                       1278 	.ds	1
                                   1279 
                                   1280 ;--------------------------------------------------------
                                   1281 ; indirectly addressable internal ram data
                                   1282 ;--------------------------------------------------------
                                   1283 	.area ISEG    (DATA)
                                   1284 ;--------------------------------------------------------
                                   1285 ; absolute internal ram data
                                   1286 ;--------------------------------------------------------
                                   1287 	.area IABS    (ABS,DATA)
                                   1288 	.area IABS    (ABS,DATA)
                                   1289 ;--------------------------------------------------------
                                   1290 ; bit data
                                   1291 ;--------------------------------------------------------
                                   1292 	.area BSEG    (BIT)
                           000000  1293 G$terminal_ativo$0$0==.
      000000                       1294 _terminal_ativo::
      000000                       1295 	.ds 1
                           000001  1296 Lmain.le_glcd$cd$1$26==.
      000001                       1297 _le_glcd_PARM_1:
      000001                       1298 	.ds 1
                           000002  1299 Lmain.le_glcd$cs$1$26==.
      000002                       1300 _le_glcd_PARM_2:
      000002                       1301 	.ds 1
                           000003  1302 Lmain.esc_glcd$cd$1$28==.
      000003                       1303 _esc_glcd_PARM_2:
      000003                       1304 	.ds 1
                           000004  1305 Lmain.esc_glcd$cs$1$28==.
      000004                       1306 _esc_glcd_PARM_3:
      000004                       1307 	.ds 1
                           000005  1308 Lmain.init_GLCD$sloc0$1$0==.
      000005                       1309 _init_GLCD_sloc0_1_0:
      000005                       1310 	.ds 1
                           000006  1311 Lmain.conf_Y$cs$1$32==.
      000006                       1312 _conf_Y_PARM_2:
      000006                       1313 	.ds 1
                           000007  1314 Lmain.conf_pag$cs$1$34==.
      000007                       1315 _conf_pag_PARM_2:
      000007                       1316 	.ds 1
                           000008  1317 Lmain.limpa_glcd$cs$1$36==.
      000008                       1318 _limpa_glcd_PARM_1:
      000008                       1319 	.ds 1
                           000009  1320 Lmain.escreve_caractere$cs$1$44==.
      000009                       1321 _escreve_caractere_PARM_2:
      000009                       1322 	.ds 1
                           00000A  1323 Lmain.putchar$lado$1$47==.
      00000A                       1324 _putchar_lado_1_47:
      00000A                       1325 	.ds 1
                           00000B  1326 G$x$0$0==.
      00000B                       1327 _x::
      00000B                       1328 	.ds 1
                                   1329 ;--------------------------------------------------------
                                   1330 ; paged external ram data
                                   1331 ;--------------------------------------------------------
                                   1332 	.area PSEG    (PAG,XDATA)
                                   1333 ;--------------------------------------------------------
                                   1334 ; external ram data
                                   1335 ;--------------------------------------------------------
                                   1336 	.area XSEG    (XDATA)
                                   1337 ;--------------------------------------------------------
                                   1338 ; absolute external ram data
                                   1339 ;--------------------------------------------------------
                                   1340 	.area XABS    (ABS,XDATA)
                                   1341 ;--------------------------------------------------------
                                   1342 ; external initialized ram data
                                   1343 ;--------------------------------------------------------
                                   1344 	.area XISEG   (XDATA)
                                   1345 	.area HOME    (CODE)
                                   1346 	.area GSINIT0 (CODE)
                                   1347 	.area GSINIT1 (CODE)
                                   1348 	.area GSINIT2 (CODE)
                                   1349 	.area GSINIT3 (CODE)
                                   1350 	.area GSINIT4 (CODE)
                                   1351 	.area GSINIT5 (CODE)
                                   1352 	.area GSINIT  (CODE)
                                   1353 	.area GSFINAL (CODE)
                                   1354 	.area CSEG    (CODE)
                                   1355 ;--------------------------------------------------------
                                   1356 ; interrupt vector 
                                   1357 ;--------------------------------------------------------
                                   1358 	.area HOME    (CODE)
      000000                       1359 __interrupt_vect:
      000000 02 00 89         [24] 1360 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1361 	reti
      000004                       1362 	.ds	7
      00000B 32               [24] 1363 	reti
      00000C                       1364 	.ds	7
      000013 32               [24] 1365 	reti
      000014                       1366 	.ds	7
      00001B 32               [24] 1367 	reti
      00001C                       1368 	.ds	7
      000023 02 09 C6         [24] 1369 	ljmp	_uart_ISR
      000026                       1370 	.ds	5
      00002B 02 09 D1         [24] 1371 	ljmp	_ISR_TC2
      00002E                       1372 	.ds	5
      000033 32               [24] 1373 	reti
      000034                       1374 	.ds	7
      00003B 32               [24] 1375 	reti
      00003C                       1376 	.ds	7
      000043 32               [24] 1377 	reti
      000044                       1378 	.ds	7
      00004B 32               [24] 1379 	reti
      00004C                       1380 	.ds	7
      000053 32               [24] 1381 	reti
      000054                       1382 	.ds	7
      00005B 32               [24] 1383 	reti
      00005C                       1384 	.ds	7
      000063 32               [24] 1385 	reti
      000064                       1386 	.ds	7
      00006B 32               [24] 1387 	reti
      00006C                       1388 	.ds	7
      000073 32               [24] 1389 	reti
      000074                       1390 	.ds	7
      00007B 32               [24] 1391 	reti
      00007C                       1392 	.ds	7
      000083 02 0A 30         [24] 1393 	ljmp	_Timer4_ISR
                                   1394 ;--------------------------------------------------------
                                   1395 ; global & static initialisations
                                   1396 ;--------------------------------------------------------
                                   1397 	.area HOME    (CODE)
                                   1398 	.area GSINIT  (CODE)
                                   1399 	.area GSFINAL (CODE)
                                   1400 	.area GSINIT  (CODE)
                                   1401 	.globl __sdcc_gsinit_startup
                                   1402 	.globl __sdcc_program_startup
                                   1403 	.globl __start__stack
                                   1404 	.globl __mcs51_genXINIT
                                   1405 	.globl __mcs51_genXRAMCLEAR
                                   1406 	.globl __mcs51_genRAMCLEAR
                           000000  1407 	C$output_glcd.h$24$1$104 ==.
                                   1408 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:24: volatile unsigned char conta_caractere = 0;
      0000E2 75 08 00         [24] 1409 	mov	_conta_caractere,#0x00
                           000003  1410 	C$mem_spi.h$15$1$104 ==.
                                   1411 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:15: volatile unsigned int end_fim_ram = 0;
      0000E5 E4               [12] 1412 	clr	a
      0000E6 F5 09            [12] 1413 	mov	_end_fim_ram,a
      0000E8 F5 0A            [12] 1414 	mov	(_end_fim_ram + 1),a
                           000008  1415 	C$main.c$25$1$104 ==.
                                   1416 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:25: volatile unsigned char TECLA = TECS_OPEN;
      0000EA 75 0B FF         [24] 1417 	mov	_TECLA,#0xff
                           00000B  1418 	C$main.c$26$1$104 ==.
                                   1419 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:26: volatile unsigned char TECLA_ANT = TECS_OPEN;
      0000ED 75 0C FF         [24] 1420 	mov	_TECLA_ANT,#0xff
                           00000E  1421 	C$output_glcd.h$25$1$104 ==.
                                   1422 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:25: volatile __bit terminal_ativo = 0;
      0000F0 C2 00            [12] 1423 	clr	_terminal_ativo
                           000010  1424 	C$main.c$29$1$104 ==.
                                   1425 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:29: volatile __bit x = 0;
      0000F2 C2 0B            [12] 1426 	clr	_x
                                   1427 	.area GSFINAL (CODE)
      0000F4 02 00 86         [24] 1428 	ljmp	__sdcc_program_startup
                                   1429 ;--------------------------------------------------------
                                   1430 ; Home
                                   1431 ;--------------------------------------------------------
                                   1432 	.area HOME    (CODE)
                                   1433 	.area HOME    (CODE)
      000086                       1434 __sdcc_program_startup:
      000086 02 0A 54         [24] 1435 	ljmp	_main
                                   1436 ;	return from main will return to caller
                                   1437 ;--------------------------------------------------------
                                   1438 ; code
                                   1439 ;--------------------------------------------------------
                                   1440 	.area CSEG    (CODE)
                                   1441 ;------------------------------------------------------------
                                   1442 ;Allocation info for local variables in function 'Timer_Init'
                                   1443 ;------------------------------------------------------------
                           000000  1444 	G$Timer_Init$0$0 ==.
                           000000  1445 	C$config.c$10$0$0 ==.
                                   1446 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:10: void Timer_Init()
                                   1447 ;	-----------------------------------------
                                   1448 ;	 function Timer_Init
                                   1449 ;	-----------------------------------------
      0000F7                       1450 _Timer_Init:
                           000007  1451 	ar7 = 0x07
                           000006  1452 	ar6 = 0x06
                           000005  1453 	ar5 = 0x05
                           000004  1454 	ar4 = 0x04
                           000003  1455 	ar3 = 0x03
                           000002  1456 	ar2 = 0x02
                           000001  1457 	ar1 = 0x01
                           000000  1458 	ar0 = 0x00
                           000000  1459 	C$config.c$12$1$14 ==.
                                   1460 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:12: SFRPAGE   = TIMER01_PAGE;
      0000F7 75 84 00         [24] 1461 	mov	_SFRPAGE,#0x00
                           000003  1462 	C$config.c$13$1$14 ==.
                                   1463 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:13: TCON      = 0x41;
      0000FA 75 88 41         [24] 1464 	mov	_TCON,#0x41
                           000006  1465 	C$config.c$14$1$14 ==.
                                   1466 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:14: TMOD      = 0x21;
      0000FD 75 89 21         [24] 1467 	mov	_TMOD,#0x21
                           000009  1468 	C$config.c$15$1$14 ==.
                                   1469 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:15: CKCON     = 0x18;
      000100 75 8E 18         [24] 1470 	mov	_CKCON,#0x18
                           00000C  1471 	C$config.c$16$1$14 ==.
                                   1472 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:16: TH1       = 0xAF;
      000103 75 8D AF         [24] 1473 	mov	_TH1,#0xaf
                           00000F  1474 	C$config.c$17$1$14 ==.
                                   1475 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:17: SFRPAGE   = TMR2_PAGE;
      000106 75 84 00         [24] 1476 	mov	_SFRPAGE,#0x00
                           000012  1477 	C$config.c$18$1$14 ==.
                                   1478 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:18: TMR2CN    = 0x04;
      000109 75 C8 04         [24] 1479 	mov	_TMR2CN,#0x04
                           000015  1480 	C$config.c$19$1$14 ==.
                                   1481 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:19: TMR2CF    = 0x18;
      00010C 75 C9 18         [24] 1482 	mov	_TMR2CF,#0x18
                           000018  1483 	C$config.c$20$1$14 ==.
                                   1484 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:20: RCAP2L    = 0xDC;
      00010F 75 CA DC         [24] 1485 	mov	_RCAP2L,#0xdc
                           00001B  1486 	C$config.c$21$1$14 ==.
                                   1487 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:21: RCAP2H    = 0x0B;
      000112 75 CB 0B         [24] 1488 	mov	_RCAP2H,#0x0b
                           00001E  1489 	C$config.c$22$1$14 ==.
                                   1490 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:22: TMR2L     = 0xDC;
      000115 75 CC DC         [24] 1491 	mov	_TMR2L,#0xdc
                           000021  1492 	C$config.c$23$1$14 ==.
                                   1493 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:23: TMR2H     = 0x0B;
      000118 75 CD 0B         [24] 1494 	mov	_TMR2H,#0x0b
                           000024  1495 	C$config.c$24$1$14 ==.
                                   1496 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:24: SFRPAGE   = TMR4_PAGE;
      00011B 75 84 02         [24] 1497 	mov	_SFRPAGE,#0x02
                           000027  1498 	C$config.c$25$1$14 ==.
                                   1499 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:25: TMR4CN    = 0x04;
      00011E 75 C8 04         [24] 1500 	mov	_TMR4CN,#0x04
                           00002A  1501 	C$config.c$26$1$14 ==.
                                   1502 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:26: TMR4CF    = 0x02;
      000121 75 C9 02         [24] 1503 	mov	_TMR4CF,#0x02
                           00002D  1504 	C$config.c$27$1$14 ==.
                                   1505 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:27: RCAP4L    = 0x8D;
      000124 75 CA 8D         [24] 1506 	mov	_RCAP4L,#0x8d
                           000030  1507 	C$config.c$28$1$14 ==.
                                   1508 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:28: RCAP4H    = 0x34;
      000127 75 CB 34         [24] 1509 	mov	_RCAP4H,#0x34
                           000033  1510 	C$config.c$29$1$14 ==.
                           000033  1511 	XG$Timer_Init$0$0 ==.
      00012A 22               [24] 1512 	ret
                                   1513 ;------------------------------------------------------------
                                   1514 ;Allocation info for local variables in function 'UART_Init'
                                   1515 ;------------------------------------------------------------
                           000034  1516 	G$UART_Init$0$0 ==.
                           000034  1517 	C$config.c$31$1$14 ==.
                                   1518 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:31: void UART_Init()
                                   1519 ;	-----------------------------------------
                                   1520 ;	 function UART_Init
                                   1521 ;	-----------------------------------------
      00012B                       1522 _UART_Init:
                           000034  1523 	C$config.c$33$1$15 ==.
                                   1524 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:33: SFRPAGE   = UART0_PAGE;
      00012B 75 84 00         [24] 1525 	mov	_SFRPAGE,#0x00
                           000037  1526 	C$config.c$34$1$15 ==.
                                   1527 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:34: SCON0     = 0x70;
      00012E 75 98 70         [24] 1528 	mov	_SCON0,#0x70
                           00003A  1529 	C$config.c$35$1$15 ==.
                           00003A  1530 	XG$UART_Init$0$0 ==.
      000131 22               [24] 1531 	ret
                                   1532 ;------------------------------------------------------------
                                   1533 ;Allocation info for local variables in function 'SMBus_Init'
                                   1534 ;------------------------------------------------------------
                           00003B  1535 	G$SMBus_Init$0$0 ==.
                           00003B  1536 	C$config.c$37$1$15 ==.
                                   1537 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:37: void SMBus_Init()
                                   1538 ;	-----------------------------------------
                                   1539 ;	 function SMBus_Init
                                   1540 ;	-----------------------------------------
      000132                       1541 _SMBus_Init:
                           00003B  1542 	C$config.c$39$1$16 ==.
                                   1543 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:39: SFRPAGE   = SMB0_PAGE;
      000132 75 84 00         [24] 1544 	mov	_SFRPAGE,#0x00
                           00003E  1545 	C$config.c$40$1$16 ==.
                                   1546 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:40: SMB0CR    = 0xE9;
      000135 75 CF E9         [24] 1547 	mov	_SMB0CR,#0xe9
                           000041  1548 	C$config.c$41$1$16 ==.
                           000041  1549 	XG$SMBus_Init$0$0 ==.
      000138 22               [24] 1550 	ret
                                   1551 ;------------------------------------------------------------
                                   1552 ;Allocation info for local variables in function 'SPI_Init'
                                   1553 ;------------------------------------------------------------
                           000042  1554 	G$SPI_Init$0$0 ==.
                           000042  1555 	C$config.c$43$1$16 ==.
                                   1556 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:43: void SPI_Init()
                                   1557 ;	-----------------------------------------
                                   1558 ;	 function SPI_Init
                                   1559 ;	-----------------------------------------
      000139                       1560 _SPI_Init:
                           000042  1561 	C$config.c$45$1$17 ==.
                                   1562 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:45: SFRPAGE   = SPI0_PAGE;
      000139 75 84 00         [24] 1563 	mov	_SFRPAGE,#0x00
                           000045  1564 	C$config.c$46$1$17 ==.
                                   1565 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:46: SPI0CFG   = 0x40;
      00013C 75 9A 40         [24] 1566 	mov	_SPI0CFG,#0x40
                           000048  1567 	C$config.c$47$1$17 ==.
                                   1568 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:47: SPI0CN    = 0x01;
      00013F 75 F8 01         [24] 1569 	mov	_SPI0CN,#0x01
                           00004B  1570 	C$config.c$48$1$17 ==.
                                   1571 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:48: SPI0CKR   = 0x7C;
      000142 75 9D 7C         [24] 1572 	mov	_SPI0CKR,#0x7c
                           00004E  1573 	C$config.c$49$1$17 ==.
                           00004E  1574 	XG$SPI_Init$0$0 ==.
      000145 22               [24] 1575 	ret
                                   1576 ;------------------------------------------------------------
                                   1577 ;Allocation info for local variables in function 'ADC_Init'
                                   1578 ;------------------------------------------------------------
                           00004F  1579 	G$ADC_Init$0$0 ==.
                           00004F  1580 	C$config.c$51$1$17 ==.
                                   1581 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:51: void ADC_Init()
                                   1582 ;	-----------------------------------------
                                   1583 ;	 function ADC_Init
                                   1584 ;	-----------------------------------------
      000146                       1585 _ADC_Init:
                           00004F  1586 	C$config.c$53$1$18 ==.
                                   1587 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:53: SFRPAGE   = ADC0_PAGE;
      000146 75 84 00         [24] 1588 	mov	_SFRPAGE,#0x00
                           000052  1589 	C$config.c$54$1$18 ==.
                                   1590 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:54: ADC0CN    = 0x80;
      000149 75 E8 80         [24] 1591 	mov	_ADC0CN,#0x80
                           000055  1592 	C$config.c$55$1$18 ==.
                           000055  1593 	XG$ADC_Init$0$0 ==.
      00014C 22               [24] 1594 	ret
                                   1595 ;------------------------------------------------------------
                                   1596 ;Allocation info for local variables in function 'DAC_Init'
                                   1597 ;------------------------------------------------------------
                           000056  1598 	G$DAC_Init$0$0 ==.
                           000056  1599 	C$config.c$57$1$18 ==.
                                   1600 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:57: void DAC_Init()
                                   1601 ;	-----------------------------------------
                                   1602 ;	 function DAC_Init
                                   1603 ;	-----------------------------------------
      00014D                       1604 _DAC_Init:
                           000056  1605 	C$config.c$59$1$19 ==.
                                   1606 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:59: SFRPAGE   = DAC0_PAGE;
      00014D 75 84 00         [24] 1607 	mov	_SFRPAGE,#0x00
                           000059  1608 	C$config.c$60$1$19 ==.
                                   1609 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:60: DAC0CN    = 0x9C;
      000150 75 D4 9C         [24] 1610 	mov	_DAC0CN,#0x9c
                           00005C  1611 	C$config.c$61$1$19 ==.
                           00005C  1612 	XG$DAC_Init$0$0 ==.
      000153 22               [24] 1613 	ret
                                   1614 ;------------------------------------------------------------
                                   1615 ;Allocation info for local variables in function 'Voltage_Reference_Init'
                                   1616 ;------------------------------------------------------------
                           00005D  1617 	G$Voltage_Reference_Init$0$0 ==.
                           00005D  1618 	C$config.c$63$1$19 ==.
                                   1619 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:63: void Voltage_Reference_Init()
                                   1620 ;	-----------------------------------------
                                   1621 ;	 function Voltage_Reference_Init
                                   1622 ;	-----------------------------------------
      000154                       1623 _Voltage_Reference_Init:
                           00005D  1624 	C$config.c$65$1$20 ==.
                                   1625 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:65: SFRPAGE   = ADC0_PAGE;
      000154 75 84 00         [24] 1626 	mov	_SFRPAGE,#0x00
                           000060  1627 	C$config.c$66$1$20 ==.
                                   1628 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:66: REF0CN    = 0x03;
      000157 75 D1 03         [24] 1629 	mov	_REF0CN,#0x03
                           000063  1630 	C$config.c$67$1$20 ==.
                           000063  1631 	XG$Voltage_Reference_Init$0$0 ==.
      00015A 22               [24] 1632 	ret
                                   1633 ;------------------------------------------------------------
                                   1634 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1635 ;------------------------------------------------------------
                           000064  1636 	G$Port_IO_Init$0$0 ==.
                           000064  1637 	C$config.c$69$1$20 ==.
                                   1638 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:69: void Port_IO_Init()
                                   1639 ;	-----------------------------------------
                                   1640 ;	 function Port_IO_Init
                                   1641 ;	-----------------------------------------
      00015B                       1642 _Port_IO_Init:
                           000064  1643 	C$config.c$107$1$21 ==.
                                   1644 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:107: SFRPAGE   = CONFIG_PAGE;
      00015B 75 84 0F         [24] 1645 	mov	_SFRPAGE,#0x0f
                           000067  1646 	C$config.c$108$1$21 ==.
                                   1647 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:108: P0MDOUT   = 0x35;
      00015E 75 A4 35         [24] 1648 	mov	_P0MDOUT,#0x35
                           00006A  1649 	C$config.c$109$1$21 ==.
                                   1650 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:109: P2MDOUT   = 0xFF;
      000161 75 A6 FF         [24] 1651 	mov	_P2MDOUT,#0xff
                           00006D  1652 	C$config.c$110$1$21 ==.
                                   1653 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:110: P3MDOUT   = 0xFF;
      000164 75 A7 FF         [24] 1654 	mov	_P3MDOUT,#0xff
                           000070  1655 	C$config.c$111$1$21 ==.
                                   1656 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:111: XBR0      = 0x06;
      000167 75 E1 06         [24] 1657 	mov	_XBR0,#0x06
                           000073  1658 	C$config.c$112$1$21 ==.
                                   1659 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:112: XBR1      = 0x04;
      00016A 75 E2 04         [24] 1660 	mov	_XBR1,#0x04
                           000076  1661 	C$config.c$113$1$21 ==.
                                   1662 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:113: XBR2      = 0x40;
      00016D 75 E3 40         [24] 1663 	mov	_XBR2,#0x40
                           000079  1664 	C$config.c$114$1$21 ==.
                           000079  1665 	XG$Port_IO_Init$0$0 ==.
      000170 22               [24] 1666 	ret
                                   1667 ;------------------------------------------------------------
                                   1668 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1669 ;------------------------------------------------------------
                                   1670 ;i                         Allocated to registers r6 r7 
                                   1671 ;------------------------------------------------------------
                           00007A  1672 	G$Oscillator_Init$0$0 ==.
                           00007A  1673 	C$config.c$116$1$21 ==.
                                   1674 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:116: void Oscillator_Init()
                                   1675 ;	-----------------------------------------
                                   1676 ;	 function Oscillator_Init
                                   1677 ;	-----------------------------------------
      000171                       1678 _Oscillator_Init:
                           00007A  1679 	C$config.c$119$1$22 ==.
                                   1680 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:119: SFRPAGE   = CONFIG_PAGE;
      000171 75 84 0F         [24] 1681 	mov	_SFRPAGE,#0x0f
                           00007D  1682 	C$config.c$120$1$22 ==.
                                   1683 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:120: OSCXCN    = 0x67;
      000174 75 8C 67         [24] 1684 	mov	_OSCXCN,#0x67
                           000080  1685 	C$config.c$121$1$22 ==.
                                   1686 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:121: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      000177 7E B8            [12] 1687 	mov	r6,#0xb8
      000179 7F 0B            [12] 1688 	mov	r7,#0x0b
      00017B                       1689 00107$:
      00017B EE               [12] 1690 	mov	a,r6
      00017C 24 FF            [12] 1691 	add	a,#0xff
      00017E FC               [12] 1692 	mov	r4,a
      00017F EF               [12] 1693 	mov	a,r7
      000180 34 FF            [12] 1694 	addc	a,#0xff
      000182 FD               [12] 1695 	mov	r5,a
      000183 8C 06            [24] 1696 	mov	ar6,r4
      000185 8D 07            [24] 1697 	mov	ar7,r5
      000187 EC               [12] 1698 	mov	a,r4
      000188 4D               [12] 1699 	orl	a,r5
      000189 70 F0            [24] 1700 	jnz	00107$
                           000094  1701 	C$config.c$122$1$22 ==.
                                   1702 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:122: while ((OSCXCN & 0x80) == 0);
      00018B                       1703 00102$:
      00018B E5 8C            [12] 1704 	mov	a,_OSCXCN
      00018D 30 E7 FB         [24] 1705 	jnb	acc.7,00102$
                           000099  1706 	C$config.c$123$1$22 ==.
                                   1707 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:123: CLKSEL    = 0x01;
      000190 75 97 01         [24] 1708 	mov	_CLKSEL,#0x01
                           00009C  1709 	C$config.c$124$1$22 ==.
                           00009C  1710 	XG$Oscillator_Init$0$0 ==.
      000193 22               [24] 1711 	ret
                                   1712 ;------------------------------------------------------------
                                   1713 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1714 ;------------------------------------------------------------
                           00009D  1715 	G$Interrupts_Init$0$0 ==.
                           00009D  1716 	C$config.c$126$1$22 ==.
                                   1717 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:126: void Interrupts_Init()
                                   1718 ;	-----------------------------------------
                                   1719 ;	 function Interrupts_Init
                                   1720 ;	-----------------------------------------
      000194                       1721 _Interrupts_Init:
                           00009D  1722 	C$config.c$128$1$23 ==.
                                   1723 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:128: IE        = 0xB1;
      000194 75 A8 B1         [24] 1724 	mov	_IE,#0xb1
                           0000A0  1725 	C$config.c$129$1$23 ==.
                           0000A0  1726 	XG$Interrupts_Init$0$0 ==.
      000197 22               [24] 1727 	ret
                                   1728 ;------------------------------------------------------------
                                   1729 ;Allocation info for local variables in function 'Init_Device'
                                   1730 ;------------------------------------------------------------
                           0000A1  1731 	G$Init_Device$0$0 ==.
                           0000A1  1732 	C$config.c$133$1$23 ==.
                                   1733 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:133: void Init_Device(void)
                                   1734 ;	-----------------------------------------
                                   1735 ;	 function Init_Device
                                   1736 ;	-----------------------------------------
      000198                       1737 _Init_Device:
                           0000A1  1738 	C$config.c$135$1$25 ==.
                                   1739 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:135: Timer_Init();
      000198 12 00 F7         [24] 1740 	lcall	_Timer_Init
                           0000A4  1741 	C$config.c$136$1$25 ==.
                                   1742 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:136: UART_Init();
      00019B 12 01 2B         [24] 1743 	lcall	_UART_Init
                           0000A7  1744 	C$config.c$137$1$25 ==.
                                   1745 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:137: SMBus_Init();
      00019E 12 01 32         [24] 1746 	lcall	_SMBus_Init
                           0000AA  1747 	C$config.c$138$1$25 ==.
                                   1748 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:138: SPI_Init();
      0001A1 12 01 39         [24] 1749 	lcall	_SPI_Init
                           0000AD  1750 	C$config.c$139$1$25 ==.
                                   1751 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:139: ADC_Init();
      0001A4 12 01 46         [24] 1752 	lcall	_ADC_Init
                           0000B0  1753 	C$config.c$140$1$25 ==.
                                   1754 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:140: DAC_Init();
      0001A7 12 01 4D         [24] 1755 	lcall	_DAC_Init
                           0000B3  1756 	C$config.c$141$1$25 ==.
                                   1757 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:141: Voltage_Reference_Init();
      0001AA 12 01 54         [24] 1758 	lcall	_Voltage_Reference_Init
                           0000B6  1759 	C$config.c$142$1$25 ==.
                                   1760 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:142: Port_IO_Init();
      0001AD 12 01 5B         [24] 1761 	lcall	_Port_IO_Init
                           0000B9  1762 	C$config.c$143$1$25 ==.
                                   1763 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:143: Oscillator_Init();
      0001B0 12 01 71         [24] 1764 	lcall	_Oscillator_Init
                           0000BC  1765 	C$config.c$144$1$25 ==.
                                   1766 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/config.c:144: Interrupts_Init();
      0001B3 12 01 94         [24] 1767 	lcall	_Interrupts_Init
                           0000BF  1768 	C$config.c$145$1$25 ==.
                           0000BF  1769 	XG$Init_Device$0$0 ==.
      0001B6 22               [24] 1770 	ret
                                   1771 ;------------------------------------------------------------
                                   1772 ;Allocation info for local variables in function 'le_glcd'
                                   1773 ;------------------------------------------------------------
                                   1774 ;byte                      Allocated to registers 
                                   1775 ;------------------------------------------------------------
                           0000C0  1776 	G$le_glcd$0$0 ==.
                           0000C0  1777 	C$output_glcd.h$27$1$25 ==.
                                   1778 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:27: unsigned char le_glcd(__bit cd, __bit cs){
                                   1779 ;	-----------------------------------------
                                   1780 ;	 function le_glcd
                                   1781 ;	-----------------------------------------
      0001B7                       1782 _le_glcd:
                           0000C0  1783 	C$output_glcd.h$32$1$27 ==.
                                   1784 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:32: RW = HI;
      0001B7 D2 A3            [12] 1785 	setb	_P2_3
                           0000C2  1786 	C$output_glcd.h$33$1$27 ==.
                                   1787 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:33: CS1 = cs;
      0001B9 A2 02            [12] 1788 	mov	c,_le_glcd_PARM_2
      0001BB 92 A0            [24] 1789 	mov	_P2_0,c
                           0000C6  1790 	C$output_glcd.h$34$1$27 ==.
                                   1791 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:34: CS2 = !cs;
      0001BD A2 02            [12] 1792 	mov	c,_le_glcd_PARM_2
      0001BF B3               [12] 1793 	cpl	c
      0001C0 92 A1            [24] 1794 	mov	_P2_1,c
                           0000CB  1795 	C$output_glcd.h$35$1$27 ==.
                                   1796 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:35: RS = cd;
      0001C2 A2 01            [12] 1797 	mov	c,_le_glcd_PARM_1
      0001C4 92 A2            [24] 1798 	mov	_P2_2,c
                           0000CF  1799 	C$output_glcd.h$36$1$27 ==.
                                   1800 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:36: NOP4();
      0001C6 00               [12] 1801 	NOP	
      0001C7 00               [12] 1802 	NOP	
      0001C8 00               [12] 1803 	NOP	
      0001C9 00               [12] 1804 	NOP	
                           0000D3  1805 	C$output_glcd.h$38$1$27 ==.
                                   1806 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:38: E = HI;
      0001CA D2 A4            [12] 1807 	setb	_P2_4
                           0000D5  1808 	C$output_glcd.h$39$1$27 ==.
                                   1809 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:39: NOP8();
      0001CC 00               [12] 1810 	NOP	
      0001CD 00               [12] 1811 	NOP	
      0001CE 00               [12] 1812 	NOP	
      0001CF 00               [12] 1813 	NOP	
      0001D0 00               [12] 1814 	NOP	
      0001D1 00               [12] 1815 	NOP	
      0001D2 00               [12] 1816 	NOP	
      0001D3 00               [12] 1817 	NOP	
                           0000DD  1818 	C$output_glcd.h$41$1$27 ==.
                                   1819 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:41: SFRPAGE=CONFIG_PAGE;
      0001D4 75 84 0F         [24] 1820 	mov	_SFRPAGE,#0x0f
                           0000E0  1821 	C$output_glcd.h$42$1$27 ==.
                                   1822 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:42: byte = DB;
      0001D7 85 C8 82         [24] 1823 	mov	dpl,_P4
                           0000E3  1824 	C$output_glcd.h$43$1$27 ==.
                                   1825 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:43: SFRPAGE=LEGACY_PAGE;
      0001DA 75 84 00         [24] 1826 	mov	_SFRPAGE,#0x00
                           0000E6  1827 	C$output_glcd.h$44$1$27 ==.
                                   1828 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:44: NOP4();
      0001DD 00               [12] 1829 	NOP	
      0001DE 00               [12] 1830 	NOP	
      0001DF 00               [12] 1831 	NOP	
      0001E0 00               [12] 1832 	NOP	
                           0000EA  1833 	C$output_glcd.h$46$1$27 ==.
                                   1834 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:46: E = LO;
      0001E1 C2 A4            [12] 1835 	clr	_P2_4
                           0000EC  1836 	C$output_glcd.h$47$1$27 ==.
                                   1837 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:47: NOP12();
      0001E3 00               [12] 1838 	NOP	
      0001E4 00               [12] 1839 	NOP	
      0001E5 00               [12] 1840 	NOP	
      0001E6 00               [12] 1841 	NOP	
      0001E7 00               [12] 1842 	NOP	
      0001E8 00               [12] 1843 	NOP	
      0001E9 00               [12] 1844 	NOP	
      0001EA 00               [12] 1845 	NOP	
      0001EB 00               [12] 1846 	NOP	
      0001EC 00               [12] 1847 	NOP	
      0001ED 00               [12] 1848 	NOP	
      0001EE 00               [12] 1849 	NOP	
                           0000F8  1850 	C$output_glcd.h$48$1$27 ==.
                                   1851 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:48: return (byte);
                           0000F8  1852 	C$output_glcd.h$50$1$27 ==.
                           0000F8  1853 	XG$le_glcd$0$0 ==.
      0001EF 22               [24] 1854 	ret
                                   1855 ;------------------------------------------------------------
                                   1856 ;Allocation info for local variables in function 'esc_glcd'
                                   1857 ;------------------------------------------------------------
                                   1858 ;byte                      Allocated to registers r7 
                                   1859 ;------------------------------------------------------------
                           0000F9  1860 	G$esc_glcd$0$0 ==.
                           0000F9  1861 	C$output_glcd.h$52$1$27 ==.
                                   1862 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:52: void esc_glcd(unsigned char byte, __bit cd, __bit cs){
                                   1863 ;	-----------------------------------------
                                   1864 ;	 function esc_glcd
                                   1865 ;	-----------------------------------------
      0001F0                       1866 _esc_glcd:
      0001F0 AF 82            [24] 1867 	mov	r7,dpl
                           0000FB  1868 	C$output_glcd.h$55$1$29 ==.
                                   1869 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:55: while(le_glcd(CO, cs) & 0x80); // Espera enquanto BUSY for 1
      0001F2                       1870 00101$:
      0001F2 C2 01            [12] 1871 	clr	_le_glcd_PARM_1
      0001F4 A2 04            [12] 1872 	mov	c,_esc_glcd_PARM_3
      0001F6 92 02            [24] 1873 	mov	_le_glcd_PARM_2,c
      0001F8 C0 07            [24] 1874 	push	ar7
      0001FA 12 01 B7         [24] 1875 	lcall	_le_glcd
      0001FD E5 82            [12] 1876 	mov	a,dpl
      0001FF D0 07            [24] 1877 	pop	ar7
      000201 20 E7 EE         [24] 1878 	jb	acc.7,00101$
                           00010D  1879 	C$output_glcd.h$57$1$29 ==.
                                   1880 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:57: RW = LO;
      000204 C2 A3            [12] 1881 	clr	_P2_3
                           00010F  1882 	C$output_glcd.h$58$1$29 ==.
                                   1883 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:58: CS1 = cs;
      000206 A2 04            [12] 1884 	mov	c,_esc_glcd_PARM_3
      000208 92 A0            [24] 1885 	mov	_P2_0,c
                           000113  1886 	C$output_glcd.h$59$1$29 ==.
                                   1887 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:59: CS2 = !cs;
      00020A A2 04            [12] 1888 	mov	c,_esc_glcd_PARM_3
      00020C B3               [12] 1889 	cpl	c
      00020D 92 A1            [24] 1890 	mov	_P2_1,c
                           000118  1891 	C$output_glcd.h$60$1$29 ==.
                                   1892 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:60: RS = cd;
      00020F A2 03            [12] 1893 	mov	c,_esc_glcd_PARM_2
      000211 92 A2            [24] 1894 	mov	_P2_2,c
                           00011C  1895 	C$output_glcd.h$61$1$29 ==.
                                   1896 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:61: SFRPAGE=CONFIG_PAGE;
      000213 75 84 0F         [24] 1897 	mov	_SFRPAGE,#0x0f
                           00011F  1898 	C$output_glcd.h$62$1$29 ==.
                                   1899 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:62: DB = byte;
      000216 8F C8            [24] 1900 	mov	_P4,r7
                           000121  1901 	C$output_glcd.h$63$1$29 ==.
                                   1902 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:63: SFRPAGE=LEGACY_PAGE;
      000218 75 84 00         [24] 1903 	mov	_SFRPAGE,#0x00
                           000124  1904 	C$output_glcd.h$64$1$29 ==.
                                   1905 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:64: NOP4();
      00021B 00               [12] 1906 	NOP	
      00021C 00               [12] 1907 	NOP	
      00021D 00               [12] 1908 	NOP	
      00021E 00               [12] 1909 	NOP	
                           000128  1910 	C$output_glcd.h$66$1$29 ==.
                                   1911 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:66: E = HI;
      00021F D2 A4            [12] 1912 	setb	_P2_4
                           00012A  1913 	C$output_glcd.h$67$1$29 ==.
                                   1914 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:67: NOP12();
      000221 00               [12] 1915 	NOP	
      000222 00               [12] 1916 	NOP	
      000223 00               [12] 1917 	NOP	
      000224 00               [12] 1918 	NOP	
      000225 00               [12] 1919 	NOP	
      000226 00               [12] 1920 	NOP	
      000227 00               [12] 1921 	NOP	
      000228 00               [12] 1922 	NOP	
      000229 00               [12] 1923 	NOP	
      00022A 00               [12] 1924 	NOP	
      00022B 00               [12] 1925 	NOP	
      00022C 00               [12] 1926 	NOP	
                           000136  1927 	C$output_glcd.h$69$1$29 ==.
                                   1928 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:69: E = LO;
      00022D C2 A4            [12] 1929 	clr	_P2_4
                           000138  1930 	C$output_glcd.h$70$1$29 ==.
                                   1931 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:70: SFRPAGE=CONFIG_PAGE;
      00022F 75 84 0F         [24] 1932 	mov	_SFRPAGE,#0x0f
                           00013B  1933 	C$output_glcd.h$71$1$29 ==.
                                   1934 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:71: DB = 0xff; // Para que a porta funcione como um entrada de novo sem nenhum problema
      000232 75 C8 FF         [24] 1935 	mov	_P4,#0xff
                           00013E  1936 	C$output_glcd.h$72$1$29 ==.
                                   1937 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:72: SFRPAGE=LEGACY_PAGE;
      000235 75 84 00         [24] 1938 	mov	_SFRPAGE,#0x00
                           000141  1939 	C$output_glcd.h$73$1$29 ==.
                                   1940 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:73: RW = HI; // RW == P2_3 sao usados pelo GLCD e precisa ser setado 1 para ser usado por outra funcao de outro componente
      000238 D2 A3            [12] 1941 	setb	_P2_3
                           000143  1942 	C$output_glcd.h$74$1$29 ==.
                                   1943 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:74: NOP12();
      00023A 00               [12] 1944 	NOP	
      00023B 00               [12] 1945 	NOP	
      00023C 00               [12] 1946 	NOP	
      00023D 00               [12] 1947 	NOP	
      00023E 00               [12] 1948 	NOP	
      00023F 00               [12] 1949 	NOP	
      000240 00               [12] 1950 	NOP	
      000241 00               [12] 1951 	NOP	
      000242 00               [12] 1952 	NOP	
      000243 00               [12] 1953 	NOP	
      000244 00               [12] 1954 	NOP	
      000245 00               [12] 1955 	NOP	
                           00014F  1956 	C$output_glcd.h$75$1$29 ==.
                           00014F  1957 	XG$esc_glcd$0$0 ==.
      000246 22               [24] 1958 	ret
                                   1959 ;------------------------------------------------------------
                                   1960 ;Allocation info for local variables in function 'init_GLCD'
                                   1961 ;------------------------------------------------------------
                                   1962 ;cs                        Allocated to registers r7 
                                   1963 ;------------------------------------------------------------
                           000150  1964 	G$init_GLCD$0$0 ==.
                           000150  1965 	C$output_glcd.h$77$1$29 ==.
                                   1966 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:77: void init_GLCD(){
                                   1967 ;	-----------------------------------------
                                   1968 ;	 function init_GLCD
                                   1969 ;	-----------------------------------------
      000247                       1970 _init_GLCD:
                           000150  1971 	C$output_glcd.h$82$1$30 ==.
                                   1972 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:82: E = LO;
      000247 C2 A4            [12] 1973 	clr	_P2_4
                           000152  1974 	C$output_glcd.h$83$1$30 ==.
                                   1975 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:83: RST = HI;
      000249 D2 A5            [12] 1976 	setb	_P2_5
                           000154  1977 	C$output_glcd.h$84$1$30 ==.
                                   1978 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:84: CS1 = HI;
      00024B D2 A0            [12] 1979 	setb	_P2_0
                           000156  1980 	C$output_glcd.h$85$1$30 ==.
                                   1981 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:85: CS2 = HI;
      00024D D2 A1            [12] 1982 	setb	_P2_1
                           000158  1983 	C$output_glcd.h$86$1$30 ==.
                                   1984 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:86: SFRPAGE=CONFIG_PAGE;
      00024F 75 84 0F         [24] 1985 	mov	_SFRPAGE,#0x0f
                           00015B  1986 	C$output_glcd.h$87$1$30 ==.
                                   1987 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:87: DB = 0xff;
      000252 75 C8 FF         [24] 1988 	mov	_P4,#0xff
                           00015E  1989 	C$output_glcd.h$88$1$30 ==.
                                   1990 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:88: SFRPAGE=LEGACY_PAGE;
      000255 75 84 00         [24] 1991 	mov	_SFRPAGE,#0x00
                           000161  1992 	C$output_glcd.h$90$1$30 ==.
                                   1993 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:90: while(cs<2){
      000258 7F 00            [12] 1994 	mov	r7,#0x00
      00025A                       1995 00104$:
      00025A BF 02 00         [24] 1996 	cjne	r7,#0x02,00119$
      00025D                       1997 00119$:
      00025D 50 4E            [24] 1998 	jnc	00107$
                           000168  1999 	C$output_glcd.h$92$2$31 ==.
                                   2000 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:92: while(le_glcd(CO, cs) & 0x10);
      00025F                       2001 00101$:
      00025F EF               [12] 2002 	mov	a,r7
      000260 24 FF            [12] 2003 	add	a,#0xff
      000262 92 05            [24] 2004 	mov	_init_GLCD_sloc0_1_0,c
      000264 C2 01            [12] 2005 	clr	_le_glcd_PARM_1
      000266 A2 05            [12] 2006 	mov	c,_init_GLCD_sloc0_1_0
      000268 92 02            [24] 2007 	mov	_le_glcd_PARM_2,c
      00026A C0 07            [24] 2008 	push	ar7
      00026C 12 01 B7         [24] 2009 	lcall	_le_glcd
      00026F E5 82            [12] 2010 	mov	a,dpl
      000271 D0 07            [24] 2011 	pop	ar7
      000273 20 E4 E9         [24] 2012 	jb	acc.4,00101$
                           00017F  2013 	C$output_glcd.h$95$2$31 ==.
                                   2014 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:95: esc_glcd(0x3f, CO, cs);
      000276 C2 03            [12] 2015 	clr	_esc_glcd_PARM_2
      000278 A2 05            [12] 2016 	mov	c,_init_GLCD_sloc0_1_0
      00027A 92 04            [24] 2017 	mov	_esc_glcd_PARM_3,c
      00027C 75 82 3F         [24] 2018 	mov	dpl,#0x3f
      00027F C0 07            [24] 2019 	push	ar7
      000281 12 01 F0         [24] 2020 	lcall	_esc_glcd
                           00018D  2021 	C$output_glcd.h$98$2$31 ==.
                                   2022 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:98: esc_glcd(0x40, CO, cs); // Y
      000284 C2 03            [12] 2023 	clr	_esc_glcd_PARM_2
      000286 A2 05            [12] 2024 	mov	c,_init_GLCD_sloc0_1_0
      000288 92 04            [24] 2025 	mov	_esc_glcd_PARM_3,c
      00028A 75 82 40         [24] 2026 	mov	dpl,#0x40
      00028D 12 01 F0         [24] 2027 	lcall	_esc_glcd
                           000199  2028 	C$output_glcd.h$99$2$31 ==.
                                   2029 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:99: esc_glcd(0xb8, CO, cs); // X
      000290 C2 03            [12] 2030 	clr	_esc_glcd_PARM_2
      000292 A2 05            [12] 2031 	mov	c,_init_GLCD_sloc0_1_0
      000294 92 04            [24] 2032 	mov	_esc_glcd_PARM_3,c
      000296 75 82 B8         [24] 2033 	mov	dpl,#0xb8
      000299 12 01 F0         [24] 2034 	lcall	_esc_glcd
                           0001A5  2035 	C$output_glcd.h$100$2$31 ==.
                                   2036 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:100: esc_glcd(0xc0, CO, cs); // Z
      00029C C2 03            [12] 2037 	clr	_esc_glcd_PARM_2
      00029E A2 05            [12] 2038 	mov	c,_init_GLCD_sloc0_1_0
      0002A0 92 04            [24] 2039 	mov	_esc_glcd_PARM_3,c
      0002A2 75 82 C0         [24] 2040 	mov	dpl,#0xc0
      0002A5 12 01 F0         [24] 2041 	lcall	_esc_glcd
      0002A8 D0 07            [24] 2042 	pop	ar7
                           0001B3  2043 	C$output_glcd.h$101$2$31 ==.
                                   2044 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:101: cs++;
      0002AA 0F               [12] 2045 	inc	r7
      0002AB 80 AD            [24] 2046 	sjmp	00104$
      0002AD                       2047 00107$:
                           0001B6  2048 	C$output_glcd.h$103$1$30 ==.
                           0001B6  2049 	XG$init_GLCD$0$0 ==.
      0002AD 22               [24] 2050 	ret
                                   2051 ;------------------------------------------------------------
                                   2052 ;Allocation info for local variables in function 'conf_Y'
                                   2053 ;------------------------------------------------------------
                                   2054 ;y                         Allocated to registers r7 
                                   2055 ;------------------------------------------------------------
                           0001B7  2056 	G$conf_Y$0$0 ==.
                           0001B7  2057 	C$output_glcd.h$105$1$30 ==.
                                   2058 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:105: void conf_Y(unsigned char y, __bit cs){
                                   2059 ;	-----------------------------------------
                                   2060 ;	 function conf_Y
                                   2061 ;	-----------------------------------------
      0002AE                       2062 _conf_Y:
      0002AE AF 82            [24] 2063 	mov	r7,dpl
                           0001B9  2064 	C$output_glcd.h$108$1$33 ==.
                                   2065 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:108: y &= 0x3f; // para limitar o valor de Y de 0 ate 63
      0002B0 53 07 3F         [24] 2066 	anl	ar7,#0x3f
                           0001BC  2067 	C$output_glcd.h$109$1$33 ==.
                                   2068 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:109: esc_glcd(0x40 | y, CO, cs);
      0002B3 74 40            [12] 2069 	mov	a,#0x40
      0002B5 4F               [12] 2070 	orl	a,r7
      0002B6 F5 82            [12] 2071 	mov	dpl,a
      0002B8 C2 03            [12] 2072 	clr	_esc_glcd_PARM_2
      0002BA A2 06            [12] 2073 	mov	c,_conf_Y_PARM_2
      0002BC 92 04            [24] 2074 	mov	_esc_glcd_PARM_3,c
      0002BE 12 01 F0         [24] 2075 	lcall	_esc_glcd
                           0001CA  2076 	C$output_glcd.h$110$1$33 ==.
                           0001CA  2077 	XG$conf_Y$0$0 ==.
      0002C1 22               [24] 2078 	ret
                                   2079 ;------------------------------------------------------------
                                   2080 ;Allocation info for local variables in function 'conf_pag'
                                   2081 ;------------------------------------------------------------
                                   2082 ;pag                       Allocated to registers r7 
                                   2083 ;------------------------------------------------------------
                           0001CB  2084 	G$conf_pag$0$0 ==.
                           0001CB  2085 	C$output_glcd.h$113$1$33 ==.
                                   2086 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:113: void conf_pag(unsigned char pag, __bit cs){
                                   2087 ;	-----------------------------------------
                                   2088 ;	 function conf_pag
                                   2089 ;	-----------------------------------------
      0002C2                       2090 _conf_pag:
      0002C2 AF 82            [24] 2091 	mov	r7,dpl
                           0001CD  2092 	C$output_glcd.h$116$1$35 ==.
                                   2093 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:116: pag &= 0x07; // Para limitar o valor de X de 0 ate 7
      0002C4 53 07 07         [24] 2094 	anl	ar7,#0x07
                           0001D0  2095 	C$output_glcd.h$117$1$35 ==.
                                   2096 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:117: esc_glcd(0xb8 | pag, CO, cs);
      0002C7 74 B8            [12] 2097 	mov	a,#0xb8
      0002C9 4F               [12] 2098 	orl	a,r7
      0002CA F5 82            [12] 2099 	mov	dpl,a
      0002CC C2 03            [12] 2100 	clr	_esc_glcd_PARM_2
      0002CE A2 07            [12] 2101 	mov	c,_conf_pag_PARM_2
      0002D0 92 04            [24] 2102 	mov	_esc_glcd_PARM_3,c
      0002D2 12 01 F0         [24] 2103 	lcall	_esc_glcd
                           0001DE  2104 	C$output_glcd.h$118$1$35 ==.
                           0001DE  2105 	XG$conf_pag$0$0 ==.
      0002D5 22               [24] 2106 	ret
                                   2107 ;------------------------------------------------------------
                                   2108 ;Allocation info for local variables in function 'limpa_glcd'
                                   2109 ;------------------------------------------------------------
                                   2110 ;x                         Allocated to registers r7 
                                   2111 ;y                         Allocated to registers r6 
                                   2112 ;------------------------------------------------------------
                           0001DF  2113 	G$limpa_glcd$0$0 ==.
                           0001DF  2114 	C$output_glcd.h$120$1$35 ==.
                                   2115 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:120: void limpa_glcd(__bit cs){
                                   2116 ;	-----------------------------------------
                                   2117 ;	 function limpa_glcd
                                   2118 ;	-----------------------------------------
      0002D6                       2119 _limpa_glcd:
                           0001DF  2120 	C$output_glcd.h$125$1$37 ==.
                                   2121 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:125: for(x=0; x<8; x++){
      0002D6 7F 00            [12] 2122 	mov	r7,#0x00
      0002D8                       2123 00105$:
                           0001E1  2124 	C$output_glcd.h$126$2$38 ==.
                                   2125 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:126: conf_pag(x, cs);
      0002D8 A2 08            [12] 2126 	mov	c,_limpa_glcd_PARM_1
      0002DA 92 07            [24] 2127 	mov	_conf_pag_PARM_2,c
      0002DC 8F 82            [24] 2128 	mov	dpl,r7
      0002DE C0 07            [24] 2129 	push	ar7
      0002E0 12 02 C2         [24] 2130 	lcall	_conf_pag
                           0001EC  2131 	C$output_glcd.h$127$2$38 ==.
                                   2132 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:127: conf_Y(0, cs);
      0002E3 A2 08            [12] 2133 	mov	c,_limpa_glcd_PARM_1
      0002E5 92 06            [24] 2134 	mov	_conf_Y_PARM_2,c
      0002E7 75 82 00         [24] 2135 	mov	dpl,#0x00
      0002EA 12 02 AE         [24] 2136 	lcall	_conf_Y
      0002ED D0 07            [24] 2137 	pop	ar7
                           0001F8  2138 	C$output_glcd.h$128$1$37 ==.
                                   2139 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:128: for(y=0; y<64; y++){
      0002EF 7E 00            [12] 2140 	mov	r6,#0x00
      0002F1                       2141 00103$:
                           0001FA  2142 	C$output_glcd.h$129$3$39 ==.
                                   2143 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:129: esc_glcd(0x00, DA, cs);
      0002F1 D2 03            [12] 2144 	setb	_esc_glcd_PARM_2
      0002F3 A2 08            [12] 2145 	mov	c,_limpa_glcd_PARM_1
      0002F5 92 04            [24] 2146 	mov	_esc_glcd_PARM_3,c
      0002F7 75 82 00         [24] 2147 	mov	dpl,#0x00
      0002FA C0 07            [24] 2148 	push	ar7
      0002FC C0 06            [24] 2149 	push	ar6
      0002FE 12 01 F0         [24] 2150 	lcall	_esc_glcd
      000301 D0 06            [24] 2151 	pop	ar6
      000303 D0 07            [24] 2152 	pop	ar7
                           00020E  2153 	C$output_glcd.h$128$2$38 ==.
                                   2154 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:128: for(y=0; y<64; y++){
      000305 0E               [12] 2155 	inc	r6
      000306 BE 40 00         [24] 2156 	cjne	r6,#0x40,00120$
      000309                       2157 00120$:
      000309 40 E6            [24] 2158 	jc	00103$
                           000214  2159 	C$output_glcd.h$125$1$37 ==.
                                   2160 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:125: for(x=0; x<8; x++){
      00030B 0F               [12] 2161 	inc	r7
      00030C BF 08 00         [24] 2162 	cjne	r7,#0x08,00122$
      00030F                       2163 00122$:
      00030F 40 C7            [24] 2164 	jc	00105$
                           00021A  2165 	C$output_glcd.h$132$1$37 ==.
                           00021A  2166 	XG$limpa_glcd$0$0 ==.
      000311 22               [24] 2167 	ret
                                   2168 ;------------------------------------------------------------
                                   2169 ;Allocation info for local variables in function 'caractere_para_ascii'
                                   2170 ;------------------------------------------------------------
                                   2171 ;cod_ascii                 Allocated to registers r7 
                                   2172 ;------------------------------------------------------------
                           00021B  2173 	G$caractere_para_ascii$0$0 ==.
                           00021B  2174 	C$output_glcd.h$134$1$37 ==.
                                   2175 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:134: unsigned char caractere_para_ascii(unsigned char cod_ascii){
                                   2176 ;	-----------------------------------------
                                   2177 ;	 function caractere_para_ascii
                                   2178 ;	-----------------------------------------
      000312                       2179 _caractere_para_ascii:
      000312 AF 82            [24] 2180 	mov	r7,dpl
                           00021D  2181 	C$output_glcd.h$137$1$41 ==.
                                   2182 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:137: if(cod_ascii >= 32 && cod_ascii <= 127){
      000314 BF 20 00         [24] 2183 	cjne	r7,#0x20,00118$
      000317                       2184 00118$:
      000317 40 0C            [24] 2185 	jc	00104$
      000319 EF               [12] 2186 	mov	a,r7
      00031A 24 80            [12] 2187 	add	a,#0xff - 0x7f
      00031C 40 07            [24] 2188 	jc	00104$
                           000227  2189 	C$output_glcd.h$138$2$42 ==.
                                   2190 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:138: return cod_ascii - 32;
      00031E EF               [12] 2191 	mov	a,r7
      00031F 24 E0            [12] 2192 	add	a,#0xe0
      000321 F5 82            [12] 2193 	mov	dpl,a
      000323 80 0B            [24] 2194 	sjmp	00107$
      000325                       2195 00104$:
                           00022E  2196 	C$output_glcd.h$139$1$41 ==.
                                   2197 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:139: }else if(cod_ascii == 176){
      000325 BF B0 05         [24] 2198 	cjne	r7,#0xb0,00105$
                           000231  2199 	C$output_glcd.h$140$2$43 ==.
                                   2200 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:140: return 96;
      000328 75 82 60         [24] 2201 	mov	dpl,#0x60
      00032B 80 03            [24] 2202 	sjmp	00107$
      00032D                       2203 00105$:
                           000236  2204 	C$output_glcd.h$142$1$41 ==.
                                   2205 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:142: return 0;
      00032D 75 82 00         [24] 2206 	mov	dpl,#0x00
      000330                       2207 00107$:
                           000239  2208 	C$output_glcd.h$143$1$41 ==.
                           000239  2209 	XG$caractere_para_ascii$0$0 ==.
      000330 22               [24] 2210 	ret
                                   2211 ;------------------------------------------------------------
                                   2212 ;Allocation info for local variables in function 'escreve_caractere'
                                   2213 ;------------------------------------------------------------
                                   2214 ;c                         Allocated to registers r7 
                                   2215 ;linha                     Allocated to registers r7 
                                   2216 ;------------------------------------------------------------
                           00023A  2217 	G$escreve_caractere$0$0 ==.
                           00023A  2218 	C$output_glcd.h$145$1$41 ==.
                                   2219 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:145: void escreve_caractere(char c, __bit cs){
                                   2220 ;	-----------------------------------------
                                   2221 ;	 function escreve_caractere
                                   2222 ;	-----------------------------------------
      000331                       2223 _escreve_caractere:
                           00023A  2224 	C$output_glcd.h$148$1$45 ==.
                                   2225 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:148: unsigned char linha = caractere_para_ascii(c);
      000331 12 03 12         [24] 2226 	lcall	_caractere_para_ascii
                           00023D  2227 	C$output_glcd.h$150$1$45 ==.
                                   2228 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:150: esc_glcd(fonte[linha][0], DA, cs);
      000334 E5 82            [12] 2229 	mov	a,dpl
      000336 75 F0 05         [24] 2230 	mov	b,#0x05
      000339 A4               [48] 2231 	mul	ab
      00033A 24 CA            [12] 2232 	add	a,#_fonte
      00033C FE               [12] 2233 	mov	r6,a
      00033D 74 10            [12] 2234 	mov	a,#(_fonte >> 8)
      00033F 35 F0            [12] 2235 	addc	a,b
      000341 FF               [12] 2236 	mov	r7,a
      000342 8E 82            [24] 2237 	mov	dpl,r6
      000344 8F 83            [24] 2238 	mov	dph,r7
      000346 E4               [12] 2239 	clr	a
      000347 93               [24] 2240 	movc	a,@a+dptr
      000348 FD               [12] 2241 	mov	r5,a
      000349 D2 03            [12] 2242 	setb	_esc_glcd_PARM_2
      00034B A2 09            [12] 2243 	mov	c,_escreve_caractere_PARM_2
      00034D 92 04            [24] 2244 	mov	_esc_glcd_PARM_3,c
      00034F 8D 82            [24] 2245 	mov	dpl,r5
      000351 C0 07            [24] 2246 	push	ar7
      000353 C0 06            [24] 2247 	push	ar6
      000355 12 01 F0         [24] 2248 	lcall	_esc_glcd
      000358 D0 06            [24] 2249 	pop	ar6
      00035A D0 07            [24] 2250 	pop	ar7
                           000265  2251 	C$output_glcd.h$151$1$45 ==.
                                   2252 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:151: esc_glcd(fonte[linha][1], DA, cs);
      00035C 8E 82            [24] 2253 	mov	dpl,r6
      00035E 8F 83            [24] 2254 	mov	dph,r7
      000360 A3               [24] 2255 	inc	dptr
      000361 E4               [12] 2256 	clr	a
      000362 93               [24] 2257 	movc	a,@a+dptr
      000363 FD               [12] 2258 	mov	r5,a
      000364 D2 03            [12] 2259 	setb	_esc_glcd_PARM_2
      000366 A2 09            [12] 2260 	mov	c,_escreve_caractere_PARM_2
      000368 92 04            [24] 2261 	mov	_esc_glcd_PARM_3,c
      00036A 8D 82            [24] 2262 	mov	dpl,r5
      00036C C0 07            [24] 2263 	push	ar7
      00036E C0 06            [24] 2264 	push	ar6
      000370 12 01 F0         [24] 2265 	lcall	_esc_glcd
      000373 D0 06            [24] 2266 	pop	ar6
      000375 D0 07            [24] 2267 	pop	ar7
                           000280  2268 	C$output_glcd.h$152$1$45 ==.
                                   2269 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:152: esc_glcd(fonte[linha][2], DA, cs);
      000377 8E 82            [24] 2270 	mov	dpl,r6
      000379 8F 83            [24] 2271 	mov	dph,r7
      00037B A3               [24] 2272 	inc	dptr
      00037C A3               [24] 2273 	inc	dptr
      00037D E4               [12] 2274 	clr	a
      00037E 93               [24] 2275 	movc	a,@a+dptr
      00037F FD               [12] 2276 	mov	r5,a
      000380 D2 03            [12] 2277 	setb	_esc_glcd_PARM_2
      000382 A2 09            [12] 2278 	mov	c,_escreve_caractere_PARM_2
      000384 92 04            [24] 2279 	mov	_esc_glcd_PARM_3,c
      000386 8D 82            [24] 2280 	mov	dpl,r5
      000388 C0 07            [24] 2281 	push	ar7
      00038A C0 06            [24] 2282 	push	ar6
      00038C 12 01 F0         [24] 2283 	lcall	_esc_glcd
      00038F D0 06            [24] 2284 	pop	ar6
      000391 D0 07            [24] 2285 	pop	ar7
                           00029C  2286 	C$output_glcd.h$153$1$45 ==.
                                   2287 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:153: esc_glcd(fonte[linha][3], DA, cs);
      000393 8E 82            [24] 2288 	mov	dpl,r6
      000395 8F 83            [24] 2289 	mov	dph,r7
      000397 A3               [24] 2290 	inc	dptr
      000398 A3               [24] 2291 	inc	dptr
      000399 A3               [24] 2292 	inc	dptr
      00039A E4               [12] 2293 	clr	a
      00039B 93               [24] 2294 	movc	a,@a+dptr
      00039C FD               [12] 2295 	mov	r5,a
      00039D D2 03            [12] 2296 	setb	_esc_glcd_PARM_2
      00039F A2 09            [12] 2297 	mov	c,_escreve_caractere_PARM_2
      0003A1 92 04            [24] 2298 	mov	_esc_glcd_PARM_3,c
      0003A3 8D 82            [24] 2299 	mov	dpl,r5
      0003A5 C0 07            [24] 2300 	push	ar7
      0003A7 C0 06            [24] 2301 	push	ar6
      0003A9 12 01 F0         [24] 2302 	lcall	_esc_glcd
      0003AC D0 06            [24] 2303 	pop	ar6
      0003AE D0 07            [24] 2304 	pop	ar7
                           0002B9  2305 	C$output_glcd.h$154$1$45 ==.
                                   2306 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:154: esc_glcd(fonte[linha][4], DA, cs);
      0003B0 8E 82            [24] 2307 	mov	dpl,r6
      0003B2 8F 83            [24] 2308 	mov	dph,r7
      0003B4 A3               [24] 2309 	inc	dptr
      0003B5 A3               [24] 2310 	inc	dptr
      0003B6 A3               [24] 2311 	inc	dptr
      0003B7 A3               [24] 2312 	inc	dptr
      0003B8 E4               [12] 2313 	clr	a
      0003B9 93               [24] 2314 	movc	a,@a+dptr
      0003BA FF               [12] 2315 	mov	r7,a
      0003BB D2 03            [12] 2316 	setb	_esc_glcd_PARM_2
      0003BD A2 09            [12] 2317 	mov	c,_escreve_caractere_PARM_2
      0003BF 92 04            [24] 2318 	mov	_esc_glcd_PARM_3,c
      0003C1 8F 82            [24] 2319 	mov	dpl,r7
      0003C3 12 01 F0         [24] 2320 	lcall	_esc_glcd
                           0002CF  2321 	C$output_glcd.h$155$1$45 ==.
                                   2322 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:155: esc_glcd(0x00, DA, cs);
      0003C6 D2 03            [12] 2323 	setb	_esc_glcd_PARM_2
      0003C8 A2 09            [12] 2324 	mov	c,_escreve_caractere_PARM_2
      0003CA 92 04            [24] 2325 	mov	_esc_glcd_PARM_3,c
      0003CC 75 82 00         [24] 2326 	mov	dpl,#0x00
      0003CF 12 01 F0         [24] 2327 	lcall	_esc_glcd
                           0002DB  2328 	C$output_glcd.h$156$1$45 ==.
                                   2329 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:156: esc_glcd(0x00, DA, cs);
      0003D2 D2 03            [12] 2330 	setb	_esc_glcd_PARM_2
      0003D4 A2 09            [12] 2331 	mov	c,_escreve_caractere_PARM_2
      0003D6 92 04            [24] 2332 	mov	_esc_glcd_PARM_3,c
      0003D8 75 82 00         [24] 2333 	mov	dpl,#0x00
      0003DB 12 01 F0         [24] 2334 	lcall	_esc_glcd
                           0002E7  2335 	C$output_glcd.h$157$1$45 ==.
                                   2336 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:157: esc_glcd(0x00, DA, cs);
      0003DE D2 03            [12] 2337 	setb	_esc_glcd_PARM_2
      0003E0 A2 09            [12] 2338 	mov	c,_escreve_caractere_PARM_2
      0003E2 92 04            [24] 2339 	mov	_esc_glcd_PARM_3,c
      0003E4 75 82 00         [24] 2340 	mov	dpl,#0x00
      0003E7 12 01 F0         [24] 2341 	lcall	_esc_glcd
                           0002F3  2342 	C$output_glcd.h$158$1$45 ==.
                           0002F3  2343 	XG$escreve_caractere$0$0 ==.
      0003EA 22               [24] 2344 	ret
                                   2345 ;------------------------------------------------------------
                                   2346 ;Allocation info for local variables in function 'putchar'
                                   2347 ;------------------------------------------------------------
                                   2348 ;c                         Allocated to registers r7 
                                   2349 ;------------------------------------------------------------
                           0002F4  2350 	G$putchar$0$0 ==.
                           0002F4  2351 	C$output_glcd.h$161$1$45 ==.
                                   2352 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:161: void putchar(char c){
                                   2353 ;	-----------------------------------------
                                   2354 ;	 function putchar
                                   2355 ;	-----------------------------------------
      0003EB                       2356 _putchar:
      0003EB AF 82            [24] 2357 	mov	r7,dpl
                           0002F6  2358 	C$output_glcd.h$164$1$47 ==.
                                   2359 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:164: WDTCN = 0xa5;
      0003ED 75 FF A5         [24] 2360 	mov	_WDTCN,#0xa5
                           0002F9  2361 	C$output_glcd.h$166$1$47 ==.
                                   2362 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:166: if(c<=8){
      0003F0 EF               [12] 2363 	mov	a,r7
      0003F1 24 F7            [12] 2364 	add	a,#0xff - 0x08
      0003F3 40 2C            [24] 2365 	jc	00112$
                           0002FE  2366 	C$output_glcd.h$167$2$48 ==.
                                   2367 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:167: conf_pag(c-1, ESQ);
      0003F5 EF               [12] 2368 	mov	a,r7
      0003F6 14               [12] 2369 	dec	a
      0003F7 FE               [12] 2370 	mov	r6,a
      0003F8 C2 07            [12] 2371 	clr	_conf_pag_PARM_2
      0003FA 8E 82            [24] 2372 	mov	dpl,r6
      0003FC C0 06            [24] 2373 	push	ar6
      0003FE 12 02 C2         [24] 2374 	lcall	_conf_pag
                           00030A  2375 	C$output_glcd.h$168$2$48 ==.
                                   2376 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:168: conf_Y(0, ESQ);
      000401 C2 06            [12] 2377 	clr	_conf_Y_PARM_2
      000403 75 82 00         [24] 2378 	mov	dpl,#0x00
      000406 12 02 AE         [24] 2379 	lcall	_conf_Y
      000409 D0 06            [24] 2380 	pop	ar6
                           000314  2381 	C$output_glcd.h$169$2$48 ==.
                                   2382 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:169: conf_pag(c-1, DIR);
      00040B D2 07            [12] 2383 	setb	_conf_pag_PARM_2
      00040D 8E 82            [24] 2384 	mov	dpl,r6
      00040F 12 02 C2         [24] 2385 	lcall	_conf_pag
                           00031B  2386 	C$output_glcd.h$170$2$48 ==.
                                   2387 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:170: conf_Y(0, DIR);
      000412 D2 06            [12] 2388 	setb	_conf_Y_PARM_2
      000414 75 82 00         [24] 2389 	mov	dpl,#0x00
      000417 12 02 AE         [24] 2390 	lcall	_conf_Y
                           000323  2391 	C$output_glcd.h$171$2$48 ==.
                                   2392 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:171: conta_caractere = 0;
      00041A 75 08 00         [24] 2393 	mov	_conta_caractere,#0x00
                           000326  2394 	C$output_glcd.h$172$2$48 ==.
                                   2395 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:172: terminal_ativo = 0;
      00041D C2 00            [12] 2396 	clr	_terminal_ativo
      00041F 80 22            [24] 2397 	sjmp	00114$
      000421                       2398 00112$:
                           00032A  2399 	C$output_glcd.h$174$1$47 ==.
                                   2400 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:174: }else if(c == 9 || terminal_ativo == 1){
      000421 BF 09 02         [24] 2401 	cjne	r7,#0x09,00132$
      000424 80 03            [24] 2402 	sjmp	00107$
      000426                       2403 00132$:
      000426 30 00 09         [24] 2404 	jnb	_terminal_ativo,00108$
      000429                       2405 00107$:
                           000332  2406 	C$output_glcd.h$175$2$49 ==.
                                   2407 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:175: terminal_ativo = 1;
      000429 D2 00            [12] 2408 	setb	_terminal_ativo
                           000334  2409 	C$output_glcd.h$176$2$49 ==.
                                   2410 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:176: SBUF0 = c;
      00042B 8F 99            [24] 2411 	mov	_SBUF0,r7
                           000336  2412 	C$output_glcd.h$177$2$49 ==.
                                   2413 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:177: while(TI0==0);
      00042D                       2414 00101$:
                           000336  2415 	C$output_glcd.h$178$2$49 ==.
                                   2416 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:178: TI0 = 0;
      00042D 10 99 13         [24] 2417 	jbc	_TI0,00114$
      000430 80 FB            [24] 2418 	sjmp	00101$
      000432                       2419 00108$:
                           00033B  2420 	C$output_glcd.h$181$2$50 ==.
                                   2421 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:181: if(conta_caractere<8){
      000432 74 F8            [12] 2422 	mov	a,#0x100 - 0x08
      000434 25 08            [12] 2423 	add	a,_conta_caractere
                           00033F  2424 	C$output_glcd.h$182$3$51 ==.
                                   2425 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:182: lado = ESQ;
                           00033F  2426 	C$output_glcd.h$184$3$52 ==.
                                   2427 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:184: lado = DIR;
      000436 92 0A            [24] 2428 	mov	_putchar_lado_1_47,c
                           000341  2429 	C$output_glcd.h$187$2$50 ==.
                                   2430 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:187: escreve_caractere(c, lado);
      000438 A2 0A            [12] 2431 	mov	c,_putchar_lado_1_47
      00043A 92 09            [24] 2432 	mov	_escreve_caractere_PARM_2,c
      00043C 8F 82            [24] 2433 	mov	dpl,r7
      00043E 12 03 31         [24] 2434 	lcall	_escreve_caractere
                           00034A  2435 	C$output_glcd.h$188$2$50 ==.
                                   2436 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:188: conta_caractere++;
      000441 05 08            [12] 2437 	inc	_conta_caractere
      000443                       2438 00114$:
                           00034C  2439 	C$output_glcd.h$190$1$47 ==.
                           00034C  2440 	XG$putchar$0$0 ==.
      000443 22               [24] 2441 	ret
                                   2442 ;------------------------------------------------------------
                                   2443 ;Allocation info for local variables in function 'setup'
                                   2444 ;------------------------------------------------------------
                           00034D  2445 	G$setup$0$0 ==.
                           00034D  2446 	C$output_glcd.h$192$1$47 ==.
                                   2447 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:192: void setup(void){
                                   2448 ;	-----------------------------------------
                                   2449 ;	 function setup
                                   2450 ;	-----------------------------------------
      000444                       2451 _setup:
                           00034D  2452 	C$output_glcd.h$193$1$54 ==.
                                   2453 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/output_glcd.h:193: SFRPAGE=LEGACY_PAGE;
      000444 75 84 00         [24] 2454 	mov	_SFRPAGE,#0x00
                           000350  2455 	C$output_glcd.h$194$1$54 ==.
                           000350  2456 	XG$setup$0$0 ==.
      000447 22               [24] 2457 	ret
                                   2458 ;------------------------------------------------------------
                                   2459 ;Allocation info for local variables in function 'delay_ms'
                                   2460 ;------------------------------------------------------------
                                   2461 ;t                         Allocated to registers r6 r7 
                                   2462 ;------------------------------------------------------------
                           000351  2463 	G$delay_ms$0$0 ==.
                           000351  2464 	C$delay.h$6$1$54 ==.
                                   2465 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:6: void delay_ms(unsigned int t){
                                   2466 ;	-----------------------------------------
                                   2467 ;	 function delay_ms
                                   2468 ;	-----------------------------------------
      000448                       2469 _delay_ms:
      000448 AE 82            [24] 2470 	mov	r6,dpl
      00044A AF 83            [24] 2471 	mov	r7,dph
                           000355  2472 	C$delay.h$7$1$56 ==.
                                   2473 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:7: TMOD |= 0x01;
      00044C 43 89 01         [24] 2474 	orl	_TMOD,#0x01
                           000358  2475 	C$delay.h$8$1$56 ==.
                                   2476 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:8: TMOD &= ~0x02;
      00044F 53 89 FD         [24] 2477 	anl	_TMOD,#0xfd
      000452                       2478 00106$:
                           00035B  2479 	C$delay.h$9$1$56 ==.
                                   2480 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:9: for(;t>0;t--){
      000452 EE               [12] 2481 	mov	a,r6
      000453 4F               [12] 2482 	orl	a,r7
      000454 60 19            [24] 2483 	jz	00108$
                           00035F  2484 	C$delay.h$10$2$57 ==.
                                   2485 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:10: WDTCN = 0xa5;
      000456 75 FF A5         [24] 2486 	mov	_WDTCN,#0xa5
                           000362  2487 	C$delay.h$11$2$57 ==.
                                   2488 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:11: TR0 = 0;
      000459 C2 8C            [12] 2489 	clr	_TR0
                           000364  2490 	C$delay.h$12$2$57 ==.
                                   2491 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:12: TF0 = 0;
      00045B C2 8D            [12] 2492 	clr	_TF0
                           000366  2493 	C$delay.h$13$2$57 ==.
                                   2494 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:13: TL0 = 0x58;
      00045D 75 8A 58         [24] 2495 	mov	_TL0,#0x58
                           000369  2496 	C$delay.h$14$2$57 ==.
                                   2497 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:14: TH0 = 0x9E;
      000460 75 8C 9E         [24] 2498 	mov	_TH0,#0x9e
                           00036C  2499 	C$delay.h$15$2$57 ==.
                                   2500 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:15: TR0 = 1;
      000463 D2 8C            [12] 2501 	setb	_TR0
                           00036E  2502 	C$delay.h$16$2$57 ==.
                                   2503 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:16: while(TF0 == 0);
      000465                       2504 00101$:
      000465 30 8D FD         [24] 2505 	jnb	_TF0,00101$
                           000371  2506 	C$delay.h$9$1$56 ==.
                                   2507 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:9: for(;t>0;t--){
      000468 1E               [12] 2508 	dec	r6
      000469 BE FF 01         [24] 2509 	cjne	r6,#0xff,00127$
      00046C 1F               [12] 2510 	dec	r7
      00046D                       2511 00127$:
      00046D 80 E3            [24] 2512 	sjmp	00106$
      00046F                       2513 00108$:
                           000378  2514 	C$delay.h$18$1$56 ==.
                           000378  2515 	XG$delay_ms$0$0 ==.
      00046F 22               [24] 2516 	ret
                                   2517 ;------------------------------------------------------------
                                   2518 ;Allocation info for local variables in function 'delay_us'
                                   2519 ;------------------------------------------------------------
                                   2520 ;t                         Allocated to registers r6 r7 
                                   2521 ;------------------------------------------------------------
                           000379  2522 	G$delay_us$0$0 ==.
                           000379  2523 	C$delay.h$20$1$56 ==.
                                   2524 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:20: void delay_us(unsigned int t){
                                   2525 ;	-----------------------------------------
                                   2526 ;	 function delay_us
                                   2527 ;	-----------------------------------------
      000470                       2528 _delay_us:
      000470 AE 82            [24] 2529 	mov	r6,dpl
      000472 AF 83            [24] 2530 	mov	r7,dph
                           00037D  2531 	C$delay.h$21$1$59 ==.
                                   2532 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:21: TMOD |= 0X02;
      000474 43 89 02         [24] 2533 	orl	_TMOD,#0x02
                           000380  2534 	C$delay.h$22$1$59 ==.
                                   2535 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:22: TMOD &= ~0X01;
      000477 53 89 FE         [24] 2536 	anl	_TMOD,#0xfe
                           000383  2537 	C$delay.h$23$1$59 ==.
                                   2538 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:23: TR0 = 0;
      00047A C2 8C            [12] 2539 	clr	_TR0
                           000385  2540 	C$delay.h$24$1$59 ==.
                                   2541 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:24: TF0 = 0;
      00047C C2 8D            [12] 2542 	clr	_TF0
                           000387  2543 	C$delay.h$25$1$59 ==.
                                   2544 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:25: TL0 = 0xE7;
      00047E 75 8A E7         [24] 2545 	mov	_TL0,#0xe7
                           00038A  2546 	C$delay.h$26$1$59 ==.
                                   2547 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:26: TH0 = 0xE7;
      000481 75 8C E7         [24] 2548 	mov	_TH0,#0xe7
                           00038D  2549 	C$delay.h$27$1$59 ==.
                                   2550 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:27: TR0 = 1;
      000484 D2 8C            [12] 2551 	setb	_TR0
      000486                       2552 00106$:
                           00038F  2553 	C$delay.h$28$1$59 ==.
                                   2554 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:28: for(;t>0;t--){
      000486 EE               [12] 2555 	mov	a,r6
      000487 4F               [12] 2556 	orl	a,r7
      000488 60 0F            [24] 2557 	jz	00108$
                           000393  2558 	C$delay.h$29$2$60 ==.
                                   2559 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:29: WDTCN = 0xa5;
      00048A 75 FF A5         [24] 2560 	mov	_WDTCN,#0xa5
                           000396  2561 	C$delay.h$30$2$60 ==.
                                   2562 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:30: while(TF0 == 0);
      00048D                       2563 00101$:
                           000396  2564 	C$delay.h$31$2$60 ==.
                                   2565 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:31: TF0 = 0;
      00048D 10 8D 02         [24] 2566 	jbc	_TF0,00126$
      000490 80 FB            [24] 2567 	sjmp	00101$
      000492                       2568 00126$:
                           00039B  2569 	C$delay.h$28$1$59 ==.
                                   2570 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/delay.h:28: for(;t>0;t--){
      000492 1E               [12] 2571 	dec	r6
      000493 BE FF 01         [24] 2572 	cjne	r6,#0xff,00127$
      000496 1F               [12] 2573 	dec	r7
      000497                       2574 00127$:
      000497 80 ED            [24] 2575 	sjmp	00106$
      000499                       2576 00108$:
                           0003A2  2577 	C$delay.h$34$1$59 ==.
                           0003A2  2578 	XG$delay_us$0$0 ==.
      000499 22               [24] 2579 	ret
                                   2580 ;------------------------------------------------------------
                                   2581 ;Allocation info for local variables in function 'esc_RAM_SPI'
                                   2582 ;------------------------------------------------------------
                                   2583 ;dado                      Allocated with name '_esc_RAM_SPI_PARM_2'
                                   2584 ;end                       Allocated to registers r6 r7 
                                   2585 ;end_l                     Allocated to registers r5 
                                   2586 ;end_h                     Allocated to registers r7 
                                   2587 ;------------------------------------------------------------
                           0003A3  2588 	G$esc_RAM_SPI$0$0 ==.
                           0003A3  2589 	C$mem_spi.h$17$1$59 ==.
                                   2590 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:17: void esc_RAM_SPI(unsigned int end, unsigned char dado){
                                   2591 ;	-----------------------------------------
                                   2592 ;	 function esc_RAM_SPI
                                   2593 ;	-----------------------------------------
      00049A                       2594 _esc_RAM_SPI:
      00049A AE 82            [24] 2595 	mov	r6,dpl
      00049C AF 83            [24] 2596 	mov	r7,dph
                           0003A7  2597 	C$mem_spi.h$18$1$59 ==.
                                   2598 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:18: unsigned char end_l = end, end_h = end>>8;
      00049E 8E 05            [24] 2599 	mov	ar5,r6
                           0003A9  2600 	C$mem_spi.h$20$1$62 ==.
                                   2601 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:20: CS = LO;
      0004A0 C2 A3            [12] 2602 	clr	_P2_3
                           0003AB  2603 	C$mem_spi.h$22$1$62 ==.
                                   2604 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:22: SPI0DAT = 0x02;
      0004A2 75 9B 02         [24] 2605 	mov	_SPI0DAT,#0x02
                           0003AE  2606 	C$mem_spi.h$23$1$62 ==.
                                   2607 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:23: while(TXBMT==0); // Espera o shift dos 16 bits serem shiftados
      0004A5                       2608 00101$:
      0004A5 30 F9 FD         [24] 2609 	jnb	_TXBMT,00101$
                           0003B1  2610 	C$mem_spi.h$25$1$62 ==.
                                   2611 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:25: SPI0DAT = end_h;
      0004A8 8F 9B            [24] 2612 	mov	_SPI0DAT,r7
                           0003B3  2613 	C$mem_spi.h$26$1$62 ==.
                                   2614 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:26: while(TXBMT==0);
      0004AA                       2615 00104$:
      0004AA 30 F9 FD         [24] 2616 	jnb	_TXBMT,00104$
                           0003B6  2617 	C$mem_spi.h$28$1$62 ==.
                                   2618 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:28: SPI0DAT = end_l;
      0004AD 8D 9B            [24] 2619 	mov	_SPI0DAT,r5
                           0003B8  2620 	C$mem_spi.h$29$1$62 ==.
                                   2621 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:29: while(TXBMT==0);
      0004AF                       2622 00107$:
      0004AF 30 F9 FD         [24] 2623 	jnb	_TXBMT,00107$
                           0003BB  2624 	C$mem_spi.h$31$1$62 ==.
                                   2625 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:31: SPI0DAT = dado;
      0004B2 85 15 9B         [24] 2626 	mov	_SPI0DAT,_esc_RAM_SPI_PARM_2
                           0003BE  2627 	C$mem_spi.h$32$1$62 ==.
                                   2628 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:32: while(TXBMT==0);
      0004B5                       2629 00110$:
      0004B5 30 F9 FD         [24] 2630 	jnb	_TXBMT,00110$
                           0003C1  2631 	C$mem_spi.h$34$1$62 ==.
                                   2632 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:34: SPIF = 0; // Reseta valor para receber bit flag
      0004B8 C2 FF            [12] 2633 	clr	_SPIF
                           0003C3  2634 	C$mem_spi.h$35$1$62 ==.
                                   2635 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:35: while(SPIF==0); // Aguarda a sinalizacao do bit flag do fim da instrucao
      0004BA                       2636 00113$:
                           0003C3  2637 	C$mem_spi.h$36$1$62 ==.
                                   2638 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:36: SPIF = 0; // Reseta valor para receber bit flag
      0004BA 10 FF 02         [24] 2639 	jbc	_SPIF,00152$
      0004BD 80 FB            [24] 2640 	sjmp	00113$
      0004BF                       2641 00152$:
                           0003C8  2642 	C$mem_spi.h$38$1$62 ==.
                                   2643 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:38: CS = 1;
      0004BF D2 A3            [12] 2644 	setb	_P2_3
                           0003CA  2645 	C$mem_spi.h$39$1$62 ==.
                           0003CA  2646 	XG$esc_RAM_SPI$0$0 ==.
      0004C1 22               [24] 2647 	ret
                                   2648 ;------------------------------------------------------------
                                   2649 ;Allocation info for local variables in function 'le_RAM_SPI'
                                   2650 ;------------------------------------------------------------
                                   2651 ;end                       Allocated to registers r6 r7 
                                   2652 ;end_l                     Allocated to registers r5 
                                   2653 ;end_h                     Allocated to registers r7 
                                   2654 ;------------------------------------------------------------
                           0003CB  2655 	G$le_RAM_SPI$0$0 ==.
                           0003CB  2656 	C$mem_spi.h$41$1$62 ==.
                                   2657 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:41: unsigned char le_RAM_SPI(unsigned int end){
                                   2658 ;	-----------------------------------------
                                   2659 ;	 function le_RAM_SPI
                                   2660 ;	-----------------------------------------
      0004C2                       2661 _le_RAM_SPI:
      0004C2 AE 82            [24] 2662 	mov	r6,dpl
      0004C4 AF 83            [24] 2663 	mov	r7,dph
                           0003CF  2664 	C$mem_spi.h$42$1$62 ==.
                                   2665 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:42: unsigned char end_l = end, end_h = end>>8;
      0004C6 8E 05            [24] 2666 	mov	ar5,r6
                           0003D1  2667 	C$mem_spi.h$44$1$64 ==.
                                   2668 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:44: CS = LO;
      0004C8 C2 A3            [12] 2669 	clr	_P2_3
                           0003D3  2670 	C$mem_spi.h$46$1$64 ==.
                                   2671 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:46: SPI0DAT = 0x03; 
      0004CA 75 9B 03         [24] 2672 	mov	_SPI0DAT,#0x03
                           0003D6  2673 	C$mem_spi.h$47$1$64 ==.
                                   2674 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:47: while(TXBMT==0); // Espera o shift dos 16 bits serem shiftados
      0004CD                       2675 00101$:
      0004CD 30 F9 FD         [24] 2676 	jnb	_TXBMT,00101$
                           0003D9  2677 	C$mem_spi.h$49$1$64 ==.
                                   2678 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:49: SPI0DAT = end_h;
      0004D0 8F 9B            [24] 2679 	mov	_SPI0DAT,r7
                           0003DB  2680 	C$mem_spi.h$50$1$64 ==.
                                   2681 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:50: while(TXBMT==0);
      0004D2                       2682 00104$:
      0004D2 30 F9 FD         [24] 2683 	jnb	_TXBMT,00104$
                           0003DE  2684 	C$mem_spi.h$52$1$64 ==.
                                   2685 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:52: SPI0DAT = end_l;
      0004D5 8D 9B            [24] 2686 	mov	_SPI0DAT,r5
                           0003E0  2687 	C$mem_spi.h$53$1$64 ==.
                                   2688 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:53: while(TXBMT==0);
      0004D7                       2689 00107$:
      0004D7 30 F9 FD         [24] 2690 	jnb	_TXBMT,00107$
                           0003E3  2691 	C$mem_spi.h$55$1$64 ==.
                                   2692 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:55: SPI0DAT = 0x00; // Garantir que o dado foi zerado. Limpar a memoria de dados flash
      0004DA 75 9B 00         [24] 2693 	mov	_SPI0DAT,#0x00
                           0003E6  2694 	C$mem_spi.h$56$1$64 ==.
                                   2695 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:56: while(TXBMT==0);
      0004DD                       2696 00110$:
      0004DD 30 F9 FD         [24] 2697 	jnb	_TXBMT,00110$
                           0003E9  2698 	C$mem_spi.h$58$1$64 ==.
                                   2699 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:58: SPIF = 0;
      0004E0 C2 FF            [12] 2700 	clr	_SPIF
                           0003EB  2701 	C$mem_spi.h$59$1$64 ==.
                                   2702 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:59: while(SPIF==0);
      0004E2                       2703 00113$:
                           0003EB  2704 	C$mem_spi.h$60$1$64 ==.
                                   2705 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:60: SPIF = 0;
      0004E2 10 FF 02         [24] 2706 	jbc	_SPIF,00152$
      0004E5 80 FB            [24] 2707 	sjmp	00113$
      0004E7                       2708 00152$:
                           0003F0  2709 	C$mem_spi.h$62$1$64 ==.
                                   2710 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:62: CS = 1;
      0004E7 D2 A3            [12] 2711 	setb	_P2_3
                           0003F2  2712 	C$mem_spi.h$64$1$64 ==.
                                   2713 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:64: return SPI0DAT;
      0004E9 85 9B 82         [24] 2714 	mov	dpl,_SPI0DAT
                           0003F5  2715 	C$mem_spi.h$65$1$64 ==.
                           0003F5  2716 	XG$le_RAM_SPI$0$0 ==.
      0004EC 22               [24] 2717 	ret
                                   2718 ;------------------------------------------------------------
                                   2719 ;Allocation info for local variables in function 'verifica_RAM_SPI'
                                   2720 ;------------------------------------------------------------
                                   2721 ;i                         Allocated to registers r6 r7 
                                   2722 ;aux                       Allocated to registers r3 
                                   2723 ;------------------------------------------------------------
                           0003F6  2724 	G$verifica_RAM_SPI$0$0 ==.
                           0003F6  2725 	C$mem_spi.h$67$1$64 ==.
                                   2726 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:67: unsigned char verifica_RAM_SPI(void){
                                   2727 ;	-----------------------------------------
                                   2728 ;	 function verifica_RAM_SPI
                                   2729 ;	-----------------------------------------
      0004ED                       2730 _verifica_RAM_SPI:
                           0003F6  2731 	C$mem_spi.h$73$1$66 ==.
                                   2732 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:73: for(i=0; i<8192; i++){
      0004ED 7E 00            [12] 2733 	mov	r6,#0x00
      0004EF 7F 00            [12] 2734 	mov	r7,#0x00
      0004F1 7C 00            [12] 2735 	mov	r4,#0x00
      0004F3 7D 00            [12] 2736 	mov	r5,#0x00
      0004F5                       2737 00104$:
                           0003FE  2738 	C$mem_spi.h$74$2$67 ==.
                                   2739 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:74: esc_RAM_SPI(i, 170);
      0004F5 75 15 AA         [24] 2740 	mov	_esc_RAM_SPI_PARM_2,#0xaa
      0004F8 8C 82            [24] 2741 	mov	dpl,r4
      0004FA 8D 83            [24] 2742 	mov	dph,r5
      0004FC C0 07            [24] 2743 	push	ar7
      0004FE C0 06            [24] 2744 	push	ar6
      000500 C0 05            [24] 2745 	push	ar5
      000502 C0 04            [24] 2746 	push	ar4
      000504 12 04 9A         [24] 2747 	lcall	_esc_RAM_SPI
      000507 D0 04            [24] 2748 	pop	ar4
      000509 D0 05            [24] 2749 	pop	ar5
                           000414  2750 	C$mem_spi.h$75$2$67 ==.
                                   2751 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:75: aux = le_RAM_SPI(i);
      00050B 8C 82            [24] 2752 	mov	dpl,r4
      00050D 8D 83            [24] 2753 	mov	dph,r5
      00050F C0 05            [24] 2754 	push	ar5
      000511 C0 04            [24] 2755 	push	ar4
      000513 12 04 C2         [24] 2756 	lcall	_le_RAM_SPI
      000516 AB 82            [24] 2757 	mov	r3,dpl
      000518 D0 04            [24] 2758 	pop	ar4
      00051A D0 05            [24] 2759 	pop	ar5
      00051C D0 06            [24] 2760 	pop	ar6
      00051E D0 07            [24] 2761 	pop	ar7
                           000429  2762 	C$mem_spi.h$77$2$67 ==.
                                   2763 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:77: if(aux != 170){
      000520 BB AA 02         [24] 2764 	cjne	r3,#0xaa,00117$
      000523 80 1A            [24] 2765 	sjmp	00102$
      000525                       2766 00117$:
                           00042E  2767 	C$mem_spi.h$78$3$68 ==.
                                   2768 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:78: printf_fast_f("\x02 ERRO: mem=%05d",i);
      000525 C0 06            [24] 2769 	push	ar6
      000527 C0 07            [24] 2770 	push	ar7
      000529 74 AA            [12] 2771 	mov	a,#___str_0
      00052B C0 E0            [24] 2772 	push	acc
      00052D 74 12            [12] 2773 	mov	a,#(___str_0 >> 8)
      00052F C0 E0            [24] 2774 	push	acc
      000531 12 0A E5         [24] 2775 	lcall	_printf_fast_f
      000534 E5 81            [12] 2776 	mov	a,sp
      000536 24 FC            [12] 2777 	add	a,#0xfc
      000538 F5 81            [12] 2778 	mov	sp,a
                           000443  2779 	C$mem_spi.h$79$3$68 ==.
                                   2780 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:79: return 0; //erro em um endereco
      00053A 75 82 00         [24] 2781 	mov	dpl,#0x00
      00053D 80 2E            [24] 2782 	sjmp	00106$
      00053F                       2783 00102$:
                           000448  2784 	C$mem_spi.h$81$2$67 ==.
                                   2785 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:81: printf_fast_f("\x02 i = %05d",i);
      00053F C0 05            [24] 2786 	push	ar5
      000541 C0 04            [24] 2787 	push	ar4
      000543 C0 04            [24] 2788 	push	ar4
      000545 C0 05            [24] 2789 	push	ar5
      000547 74 BB            [12] 2790 	mov	a,#___str_1
      000549 C0 E0            [24] 2791 	push	acc
      00054B 74 12            [12] 2792 	mov	a,#(___str_1 >> 8)
      00054D C0 E0            [24] 2793 	push	acc
      00054F 12 0A E5         [24] 2794 	lcall	_printf_fast_f
      000552 E5 81            [12] 2795 	mov	a,sp
      000554 24 FC            [12] 2796 	add	a,#0xfc
      000556 F5 81            [12] 2797 	mov	sp,a
      000558 D0 04            [24] 2798 	pop	ar4
      00055A D0 05            [24] 2799 	pop	ar5
                           000465  2800 	C$mem_spi.h$73$1$66 ==.
                                   2801 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:73: for(i=0; i<8192; i++){
      00055C 0C               [12] 2802 	inc	r4
      00055D BC 00 01         [24] 2803 	cjne	r4,#0x00,00118$
      000560 0D               [12] 2804 	inc	r5
      000561                       2805 00118$:
      000561 8C 06            [24] 2806 	mov	ar6,r4
      000563 8D 07            [24] 2807 	mov	ar7,r5
      000565 74 E0            [12] 2808 	mov	a,#0x100 - 0x20
      000567 2D               [12] 2809 	add	a,r5
      000568 50 8B            [24] 2810 	jnc	00104$
                           000473  2811 	C$mem_spi.h$84$1$66 ==.
                                   2812 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\/mem_spi.h:84: return 1; //tudo certo
      00056A 75 82 01         [24] 2813 	mov	dpl,#0x01
      00056D                       2814 00106$:
                           000476  2815 	C$mem_spi.h$85$1$66 ==.
                           000476  2816 	XG$verifica_RAM_SPI$0$0 ==.
      00056D 22               [24] 2817 	ret
                                   2818 ;------------------------------------------------------------
                                   2819 ;Allocation info for local variables in function 'ligar_buzzer'
                                   2820 ;------------------------------------------------------------
                                   2821 ;ciclos                    Allocated to registers r6 r7 
                                   2822 ;meio_periodo              Allocated to registers 
                                   2823 ;------------------------------------------------------------
                           000477  2824 	G$ligar_buzzer$0$0 ==.
                           000477  2825 	C$main.c$45$1$66 ==.
                                   2826 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:45: void ligar_buzzer(){
                                   2827 ;	-----------------------------------------
                                   2828 ;	 function ligar_buzzer
                                   2829 ;	-----------------------------------------
      00056E                       2830 _ligar_buzzer:
                           000477  2831 	C$main.c$51$1$74 ==.
                                   2832 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:51: while(ciclos){
      00056E 7E 03            [12] 2833 	mov	r6,#0x03
      000570 7F 00            [12] 2834 	mov	r7,#0x00
      000572                       2835 00101$:
      000572 EE               [12] 2836 	mov	a,r6
      000573 4F               [12] 2837 	orl	a,r7
      000574 60 1F            [24] 2838 	jz	00104$
                           00047F  2839 	C$main.c$52$2$75 ==.
                                   2840 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:52: P2_7 = 0;
      000576 C2 A7            [12] 2841 	clr	_P2_7
                           000481  2842 	C$main.c$53$2$75 ==.
                                   2843 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:53: delay_us(meio_periodo);
      000578 90 05 DC         [24] 2844 	mov	dptr,#0x05dc
      00057B C0 07            [24] 2845 	push	ar7
      00057D C0 06            [24] 2846 	push	ar6
      00057F 12 04 70         [24] 2847 	lcall	_delay_us
                           00048B  2848 	C$main.c$54$2$75 ==.
                                   2849 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:54: P2_7 = 1;
      000582 D2 A7            [12] 2850 	setb	_P2_7
                           00048D  2851 	C$main.c$55$2$75 ==.
                                   2852 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:55: delay_us(meio_periodo);
      000584 90 05 DC         [24] 2853 	mov	dptr,#0x05dc
      000587 12 04 70         [24] 2854 	lcall	_delay_us
      00058A D0 06            [24] 2855 	pop	ar6
      00058C D0 07            [24] 2856 	pop	ar7
                           000497  2857 	C$main.c$56$2$75 ==.
                                   2858 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:56: ciclos--;
      00058E 1E               [12] 2859 	dec	r6
      00058F BE FF 01         [24] 2860 	cjne	r6,#0xff,00114$
      000592 1F               [12] 2861 	dec	r7
      000593                       2862 00114$:
      000593 80 DD            [24] 2863 	sjmp	00101$
      000595                       2864 00104$:
                           00049E  2865 	C$main.c$58$1$74 ==.
                           00049E  2866 	XG$ligar_buzzer$0$0 ==.
      000595 22               [24] 2867 	ret
                                   2868 ;------------------------------------------------------------
                                   2869 ;Allocation info for local variables in function 'le_tecla'
                                   2870 ;------------------------------------------------------------
                           00049F  2871 	G$le_tecla$0$0 ==.
                           00049F  2872 	C$main.c$66$1$74 ==.
                                   2873 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:66: unsigned char le_tecla(void){
                                   2874 ;	-----------------------------------------
                                   2875 ;	 function le_tecla
                                   2876 ;	-----------------------------------------
      000596                       2877 _le_tecla:
                           00049F  2878 	C$main.c$67$1$77 ==.
                                   2879 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:67: if(P3_0==0)
      000596 20 B0 05         [24] 2880 	jb	_P3_0,00122$
                           0004A2  2881 	C$main.c$68$1$77 ==.
                                   2882 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:68: return 0;
      000599 75 82 00         [24] 2883 	mov	dpl,#0x00
      00059C 80 3B            [24] 2884 	sjmp	00124$
      00059E                       2885 00122$:
                           0004A7  2886 	C$main.c$69$1$77 ==.
                                   2887 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:69: else if(P3_1==0)
      00059E 20 B1 05         [24] 2888 	jb	_P3_1,00119$
                           0004AA  2889 	C$main.c$70$1$77 ==.
                                   2890 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:70: return 1;
      0005A1 75 82 01         [24] 2891 	mov	dpl,#0x01
      0005A4 80 33            [24] 2892 	sjmp	00124$
      0005A6                       2893 00119$:
                           0004AF  2894 	C$main.c$71$1$77 ==.
                                   2895 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:71: else if(P3_2==0)
      0005A6 20 B2 05         [24] 2896 	jb	_P3_2,00116$
                           0004B2  2897 	C$main.c$72$1$77 ==.
                                   2898 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:72: return 2;
      0005A9 75 82 02         [24] 2899 	mov	dpl,#0x02
      0005AC 80 2B            [24] 2900 	sjmp	00124$
      0005AE                       2901 00116$:
                           0004B7  2902 	C$main.c$73$1$77 ==.
                                   2903 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:73: else if(P3_3==0)
      0005AE 20 B3 05         [24] 2904 	jb	_P3_3,00113$
                           0004BA  2905 	C$main.c$74$1$77 ==.
                                   2906 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:74: return 3;
      0005B1 75 82 03         [24] 2907 	mov	dpl,#0x03
      0005B4 80 23            [24] 2908 	sjmp	00124$
      0005B6                       2909 00113$:
                           0004BF  2910 	C$main.c$75$1$77 ==.
                                   2911 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:75: else if(P3_4==0)
      0005B6 20 B4 05         [24] 2912 	jb	_P3_4,00110$
                           0004C2  2913 	C$main.c$76$1$77 ==.
                                   2914 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:76: return 4;
      0005B9 75 82 04         [24] 2915 	mov	dpl,#0x04
      0005BC 80 1B            [24] 2916 	sjmp	00124$
      0005BE                       2917 00110$:
                           0004C7  2918 	C$main.c$77$1$77 ==.
                                   2919 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:77: else if(P3_5==0)	  	// Valor do Menu Manual
      0005BE 20 B5 05         [24] 2920 	jb	_P3_5,00107$
                           0004CA  2921 	C$main.c$78$1$77 ==.
                                   2922 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:78: return MENU_MANUAL;
      0005C1 75 82 64         [24] 2923 	mov	dpl,#0x64
      0005C4 80 13            [24] 2924 	sjmp	00124$
      0005C6                       2925 00107$:
                           0004CF  2926 	C$main.c$79$1$77 ==.
                                   2927 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:79: else if(P3_6==0) 		// Valor do Menu Digital
      0005C6 20 B6 05         [24] 2928 	jb	_P3_6,00104$
                           0004D2  2929 	C$main.c$80$1$77 ==.
                                   2930 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:80: return MENU_DIGITAL;
      0005C9 75 82 65         [24] 2931 	mov	dpl,#0x65
      0005CC 80 0B            [24] 2932 	sjmp	00124$
      0005CE                       2933 00104$:
                           0004D7  2934 	C$main.c$81$1$77 ==.
                                   2935 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:81: else if(P3_7==0)		 // Cancelar
      0005CE 20 B7 05         [24] 2936 	jb	_P3_7,00108$
                           0004DA  2937 	C$main.c$82$1$77 ==.
                                   2938 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:82: return CANCELAR;
      0005D1 75 82 FF         [24] 2939 	mov	dpl,#0xff
      0005D4 80 03            [24] 2940 	sjmp	00124$
      0005D6                       2941 00108$:
                           0004DF  2942 	C$main.c$83$1$77 ==.
                                   2943 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:83: return TECS_OPEN;
      0005D6 75 82 FF         [24] 2944 	mov	dpl,#0xff
      0005D9                       2945 00124$:
                           0004E2  2946 	C$main.c$85$1$77 ==.
                           0004E2  2947 	XG$le_tecla$0$0 ==.
      0005D9 22               [24] 2948 	ret
                                   2949 ;------------------------------------------------------------
                                   2950 ;Allocation info for local variables in function 'le_tec'
                                   2951 ;------------------------------------------------------------
                                   2952 ;aux                       Allocated to registers r7 
                                   2953 ;------------------------------------------------------------
                           0004E3  2954 	G$le_tec$0$0 ==.
                           0004E3  2955 	C$main.c$93$1$77 ==.
                                   2956 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:93: unsigned char le_tec(void){
                                   2957 ;	-----------------------------------------
                                   2958 ;	 function le_tec
                                   2959 ;	-----------------------------------------
      0005DA                       2960 _le_tec:
                           0004E3  2961 	C$main.c$95$1$79 ==.
                                   2962 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:95: switch (~P1){
      0005DA AE 90            [24] 2963 	mov	r6,_P1
      0005DC 7F 00            [12] 2964 	mov	r7,#0x00
      0005DE EE               [12] 2965 	mov	a,r6
      0005DF F4               [12] 2966 	cpl	a
      0005E0 FE               [12] 2967 	mov	r6,a
      0005E1 EF               [12] 2968 	mov	a,r7
      0005E2 F4               [12] 2969 	cpl	a
      0005E3 FF               [12] 2970 	mov	r7,a
      0005E4 BE 01 05         [24] 2971 	cjne	r6,#0x01,00137$
      0005E7 BF 00 02         [24] 2972 	cjne	r7,#0x00,00137$
      0005EA 80 38            [24] 2973 	sjmp	00101$
      0005EC                       2974 00137$:
      0005EC BE 02 05         [24] 2975 	cjne	r6,#0x02,00138$
      0005EF BF 00 02         [24] 2976 	cjne	r7,#0x00,00138$
      0005F2 80 34            [24] 2977 	sjmp	00102$
      0005F4                       2978 00138$:
      0005F4 BE 04 05         [24] 2979 	cjne	r6,#0x04,00139$
      0005F7 BF 00 02         [24] 2980 	cjne	r7,#0x00,00139$
      0005FA 80 30            [24] 2981 	sjmp	00103$
      0005FC                       2982 00139$:
      0005FC BE 08 05         [24] 2983 	cjne	r6,#0x08,00140$
      0005FF BF 00 02         [24] 2984 	cjne	r7,#0x00,00140$
      000602 80 2C            [24] 2985 	sjmp	00104$
      000604                       2986 00140$:
      000604 BE 10 05         [24] 2987 	cjne	r6,#0x10,00141$
      000607 BF 00 02         [24] 2988 	cjne	r7,#0x00,00141$
      00060A 80 28            [24] 2989 	sjmp	00105$
      00060C                       2990 00141$:
      00060C BE 20 05         [24] 2991 	cjne	r6,#0x20,00142$
      00060F BF 00 02         [24] 2992 	cjne	r7,#0x00,00142$
      000612 80 24            [24] 2993 	sjmp	00106$
      000614                       2994 00142$:
      000614 BE 40 05         [24] 2995 	cjne	r6,#0x40,00143$
      000617 BF 00 02         [24] 2996 	cjne	r7,#0x00,00143$
      00061A 80 20            [24] 2997 	sjmp	00107$
      00061C                       2998 00143$:
                           000525  2999 	C$main.c$96$2$80 ==.
                                   3000 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:96: case 1:
      00061C BE 80 25         [24] 3001 	cjne	r6,#0x80,00109$
      00061F BF 00 22         [24] 3002 	cjne	r7,#0x00,00109$
      000622 80 1C            [24] 3003 	sjmp	00108$
      000624                       3004 00101$:
                           00052D  3005 	C$main.c$97$2$80 ==.
                                   3006 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:97: aux = 0;
      000624 7F 00            [12] 3007 	mov	r7,#0x00
                           00052F  3008 	C$main.c$98$2$80 ==.
                                   3009 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:98: break;
                           00052F  3010 	C$main.c$99$2$80 ==.
                                   3011 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:99: case 2:
      000626 80 1E            [24] 3012 	sjmp	00110$
      000628                       3013 00102$:
                           000531  3014 	C$main.c$100$2$80 ==.
                                   3015 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:100: aux = 1;
      000628 7F 01            [12] 3016 	mov	r7,#0x01
                           000533  3017 	C$main.c$101$2$80 ==.
                                   3018 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:101: break;
                           000533  3019 	C$main.c$102$2$80 ==.
                                   3020 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:102: case 4:
      00062A 80 1A            [24] 3021 	sjmp	00110$
      00062C                       3022 00103$:
                           000535  3023 	C$main.c$103$2$80 ==.
                                   3024 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:103: aux = 2;
      00062C 7F 02            [12] 3025 	mov	r7,#0x02
                           000537  3026 	C$main.c$104$2$80 ==.
                                   3027 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:104: break;
                           000537  3028 	C$main.c$105$2$80 ==.
                                   3029 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:105: case 8:
      00062E 80 16            [24] 3030 	sjmp	00110$
      000630                       3031 00104$:
                           000539  3032 	C$main.c$106$2$80 ==.
                                   3033 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:106: aux = 3;
      000630 7F 03            [12] 3034 	mov	r7,#0x03
                           00053B  3035 	C$main.c$107$2$80 ==.
                                   3036 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:107: break;
                           00053B  3037 	C$main.c$108$2$80 ==.
                                   3038 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:108: case 16:
      000632 80 12            [24] 3039 	sjmp	00110$
      000634                       3040 00105$:
                           00053D  3041 	C$main.c$109$2$80 ==.
                                   3042 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:109: aux = 4;
      000634 7F 04            [12] 3043 	mov	r7,#0x04
                           00053F  3044 	C$main.c$110$2$80 ==.
                                   3045 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:110: break;
                           00053F  3046 	C$main.c$111$2$80 ==.
                                   3047 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:111: case 32:
      000636 80 0E            [24] 3048 	sjmp	00110$
      000638                       3049 00106$:
                           000541  3050 	C$main.c$112$2$80 ==.
                                   3051 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:112: aux = 5;
      000638 7F 05            [12] 3052 	mov	r7,#0x05
                           000543  3053 	C$main.c$113$2$80 ==.
                                   3054 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:113: break;
                           000543  3055 	C$main.c$114$2$80 ==.
                                   3056 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:114: case 64:
      00063A 80 0A            [24] 3057 	sjmp	00110$
      00063C                       3058 00107$:
                           000545  3059 	C$main.c$115$2$80 ==.
                                   3060 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:115: aux = 6;
      00063C 7F 06            [12] 3061 	mov	r7,#0x06
                           000547  3062 	C$main.c$116$2$80 ==.
                                   3063 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:116: break;
                           000547  3064 	C$main.c$117$2$80 ==.
                                   3065 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:117: case 128:
      00063E 80 06            [24] 3066 	sjmp	00110$
      000640                       3067 00108$:
                           000549  3068 	C$main.c$118$2$80 ==.
                                   3069 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:118: aux = 7;
      000640 7F 07            [12] 3070 	mov	r7,#0x07
                           00054B  3071 	C$main.c$119$2$80 ==.
                                   3072 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:119: break;
                           00054B  3073 	C$main.c$120$2$80 ==.
                                   3074 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:120: default:
      000642 80 02            [24] 3075 	sjmp	00110$
      000644                       3076 00109$:
                           00054D  3077 	C$main.c$121$2$80 ==.
                                   3078 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:121: aux = TECS_OPEN;
      000644 7F FF            [12] 3079 	mov	r7,#0xff
                           00054F  3080 	C$main.c$122$1$79 ==.
                                   3081 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:122: }
      000646                       3082 00110$:
                           00054F  3083 	C$main.c$124$1$79 ==.
                                   3084 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:124: return aux;
      000646 8F 82            [24] 3085 	mov	dpl,r7
                           000551  3086 	C$main.c$125$1$79 ==.
                           000551  3087 	XG$le_tec$0$0 ==.
      000648 22               [24] 3088 	ret
                                   3089 ;------------------------------------------------------------
                                   3090 ;Allocation info for local variables in function 'contagemRegressiva'
                                   3091 ;------------------------------------------------------------
                                   3092 ;tempoTotal                Allocated to registers r6 r7 
                                   3093 ;minutos                   Allocated to registers r4 r5 
                                   3094 ;segundos                  Allocated to registers r2 r3 
                                   3095 ;tempoRestante             Allocated to registers r6 r7 
                                   3096 ;------------------------------------------------------------
                           000552  3097 	G$contagemRegressiva$0$0 ==.
                           000552  3098 	C$main.c$135$1$79 ==.
                                   3099 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:135: void contagemRegressiva(int tempoTotal) {
                                   3100 ;	-----------------------------------------
                                   3101 ;	 function contagemRegressiva
                                   3102 ;	-----------------------------------------
      000649                       3103 _contagemRegressiva:
      000649 AE 82            [24] 3104 	mov	r6,dpl
      00064B AF 83            [24] 3105 	mov	r7,dph
                           000556  3106 	C$main.c$140$1$82 ==.
                                   3107 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:140: MOTOR = 1;
      00064D D2 97            [12] 3108 	setb	_P1_7
                           000558  3109 	C$main.c$141$1$82 ==.
                                   3110 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:141: MICROONDAS = 1;		
      00064F D2 87            [12] 3111 	setb	_P0_7
                           00055A  3112 	C$main.c$143$1$82 ==.
                                   3113 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:143: limpa_glcd(ESQ);
      000651 C2 08            [12] 3114 	clr	_limpa_glcd_PARM_1
      000653 C0 07            [24] 3115 	push	ar7
      000655 C0 06            [24] 3116 	push	ar6
      000657 12 02 D6         [24] 3117 	lcall	_limpa_glcd
                           000563  3118 	C$main.c$144$1$82 ==.
                                   3119 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:144: limpa_glcd(DIR);
      00065A D2 08            [12] 3120 	setb	_limpa_glcd_PARM_1
      00065C 12 02 D6         [24] 3121 	lcall	_limpa_glcd
                           000568  3122 	C$main.c$145$1$82 ==.
                                   3123 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:145: conf_pag(0, ESQ);
      00065F C2 07            [12] 3124 	clr	_conf_pag_PARM_2
      000661 75 82 00         [24] 3125 	mov	dpl,#0x00
      000664 12 02 C2         [24] 3126 	lcall	_conf_pag
                           000570  3127 	C$main.c$146$1$82 ==.
                                   3128 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:146: conf_pag(0, DIR);
      000667 D2 07            [12] 3129 	setb	_conf_pag_PARM_2
      000669 75 82 00         [24] 3130 	mov	dpl,#0x00
      00066C 12 02 C2         [24] 3131 	lcall	_conf_pag
      00066F D0 06            [24] 3132 	pop	ar6
      000671 D0 07            [24] 3133 	pop	ar7
                           00057C  3134 	C$main.c$148$2$83 ==.
                                   3135 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:148: while (tempoRestante >= 0) {
      000673                       3136 00101$:
      000673 EF               [12] 3137 	mov	a,r7
      000674 20 E7 77         [24] 3138 	jb	acc.7,00103$
                           000580  3139 	C$main.c$149$1$82 ==.
                                   3140 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:149: minutos = tempoRestante / 60;
      000677 75 15 3C         [24] 3141 	mov	__divsint_PARM_2,#0x3c
      00067A 75 16 00         [24] 3142 	mov	(__divsint_PARM_2 + 1),#0x00
      00067D 8E 82            [24] 3143 	mov	dpl,r6
      00067F 8F 83            [24] 3144 	mov	dph,r7
      000681 C0 07            [24] 3145 	push	ar7
      000683 C0 06            [24] 3146 	push	ar6
      000685 12 10 8E         [24] 3147 	lcall	__divsint
      000688 AC 82            [24] 3148 	mov	r4,dpl
      00068A AD 83            [24] 3149 	mov	r5,dph
      00068C D0 06            [24] 3150 	pop	ar6
      00068E D0 07            [24] 3151 	pop	ar7
                           000599  3152 	C$main.c$150$1$82 ==.
                                   3153 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:150: segundos = tempoRestante % 60;
      000690 75 15 3C         [24] 3154 	mov	__modsint_PARM_2,#0x3c
      000693 75 16 00         [24] 3155 	mov	(__modsint_PARM_2 + 1),#0x00
      000696 8E 82            [24] 3156 	mov	dpl,r6
      000698 8F 83            [24] 3157 	mov	dph,r7
      00069A C0 07            [24] 3158 	push	ar7
      00069C C0 06            [24] 3159 	push	ar6
      00069E C0 05            [24] 3160 	push	ar5
      0006A0 C0 04            [24] 3161 	push	ar4
      0006A2 12 10 58         [24] 3162 	lcall	__modsint
      0006A5 AA 82            [24] 3163 	mov	r2,dpl
      0006A7 AB 83            [24] 3164 	mov	r3,dph
                           0005B2  3165 	C$main.c$152$2$83 ==.
                                   3166 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:152: printf_fast_f("\x01 Start Timer..");
      0006A9 C0 03            [24] 3167 	push	ar3
      0006AB C0 02            [24] 3168 	push	ar2
      0006AD 74 C6            [12] 3169 	mov	a,#___str_2
      0006AF C0 E0            [24] 3170 	push	acc
      0006B1 74 12            [12] 3171 	mov	a,#(___str_2 >> 8)
      0006B3 C0 E0            [24] 3172 	push	acc
      0006B5 12 0A E5         [24] 3173 	lcall	_printf_fast_f
      0006B8 15 81            [12] 3174 	dec	sp
      0006BA 15 81            [12] 3175 	dec	sp
      0006BC D0 02            [24] 3176 	pop	ar2
      0006BE D0 03            [24] 3177 	pop	ar3
      0006C0 D0 04            [24] 3178 	pop	ar4
      0006C2 D0 05            [24] 3179 	pop	ar5
                           0005CD  3180 	C$main.c$153$2$83 ==.
                                   3181 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:153: printf_fast_f("\x02 %02d:%02d", minutos, segundos);
      0006C4 C0 02            [24] 3182 	push	ar2
      0006C6 C0 03            [24] 3183 	push	ar3
      0006C8 C0 04            [24] 3184 	push	ar4
      0006CA C0 05            [24] 3185 	push	ar5
      0006CC 74 D6            [12] 3186 	mov	a,#___str_3
      0006CE C0 E0            [24] 3187 	push	acc
      0006D0 74 12            [12] 3188 	mov	a,#(___str_3 >> 8)
      0006D2 C0 E0            [24] 3189 	push	acc
      0006D4 12 0A E5         [24] 3190 	lcall	_printf_fast_f
      0006D7 E5 81            [12] 3191 	mov	a,sp
      0006D9 24 FA            [12] 3192 	add	a,#0xfa
      0006DB F5 81            [12] 3193 	mov	sp,a
                           0005E6  3194 	C$main.c$154$2$83 ==.
                                   3195 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:154: delay_ms(100); // Espera 1 segundo
      0006DD 90 00 64         [24] 3196 	mov	dptr,#0x0064
      0006E0 12 04 48         [24] 3197 	lcall	_delay_ms
      0006E3 D0 06            [24] 3198 	pop	ar6
      0006E5 D0 07            [24] 3199 	pop	ar7
                           0005F0  3200 	C$main.c$155$2$83 ==.
                                   3201 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:155: tempoRestante--;
      0006E7 1E               [12] 3202 	dec	r6
      0006E8 BE FF 01         [24] 3203 	cjne	r6,#0xff,00114$
      0006EB 1F               [12] 3204 	dec	r7
      0006EC                       3205 00114$:
      0006EC 80 85            [24] 3206 	sjmp	00101$
      0006EE                       3207 00103$:
                           0005F7  3208 	C$main.c$157$1$82 ==.
                                   3209 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:157: MOTOR = 0;
      0006EE C2 97            [12] 3210 	clr	_P1_7
                           0005F9  3211 	C$main.c$158$1$82 ==.
                                   3212 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:158: MICROONDAS = 0;
      0006F0 C2 87            [12] 3213 	clr	_P0_7
                           0005FB  3214 	C$main.c$159$1$82 ==.
                                   3215 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:159: ligar_buzzer();
      0006F2 12 05 6E         [24] 3216 	lcall	_ligar_buzzer
                           0005FE  3217 	C$main.c$160$1$82 ==.
                                   3218 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:160: printf_fast_f("\x03 Pronto");
      0006F5 74 E2            [12] 3219 	mov	a,#___str_4
      0006F7 C0 E0            [24] 3220 	push	acc
      0006F9 74 12            [12] 3221 	mov	a,#(___str_4 >> 8)
      0006FB C0 E0            [24] 3222 	push	acc
      0006FD 12 0A E5         [24] 3223 	lcall	_printf_fast_f
      000700 15 81            [12] 3224 	dec	sp
      000702 15 81            [12] 3225 	dec	sp
                           00060D  3226 	C$main.c$163$1$82 ==.
                           00060D  3227 	XG$contagemRegressiva$0$0 ==.
      000704 22               [24] 3228 	ret
                                   3229 ;------------------------------------------------------------
                                   3230 ;Allocation info for local variables in function 'resetar_tempo'
                                   3231 ;------------------------------------------------------------
                                   3232 ;tecla                     Allocated to registers r6 r7 
                                   3233 ;------------------------------------------------------------
                           00060E  3234 	G$resetar_tempo$0$0 ==.
                           00060E  3235 	C$main.c$172$1$82 ==.
                                   3236 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:172: void resetar_tempo(int tecla) {
                                   3237 ;	-----------------------------------------
                                   3238 ;	 function resetar_tempo
                                   3239 ;	-----------------------------------------
      000705                       3240 _resetar_tempo:
      000705 AE 82            [24] 3241 	mov	r6,dpl
      000707 AF 83            [24] 3242 	mov	r7,dph
                           000612  3243 	C$main.c$173$1$85 ==.
                                   3244 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:173: if(tecla == CANCELAR) {
      000709 BE FF 06         [24] 3245 	cjne	r6,#0xff,00103$
      00070C BF FF 03         [24] 3246 	cjne	r7,#0xff,00103$
                           000618  3247 	C$main.c$174$2$86 ==.
                                   3248 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:174: definir_tempo_botao();
      00070F 12 07 13         [24] 3249 	lcall	_definir_tempo_botao
      000712                       3250 00103$:
                           00061B  3251 	C$main.c$176$1$85 ==.
                           00061B  3252 	XG$resetar_tempo$0$0 ==.
      000712 22               [24] 3253 	ret
                                   3254 ;------------------------------------------------------------
                                   3255 ;Allocation info for local variables in function 'definir_tempo_botao'
                                   3256 ;------------------------------------------------------------
                                   3257 ;tempoReal                 Allocated to registers 
                                   3258 ;m1                        Allocated to registers r6 r7 
                                   3259 ;m2                        Allocated to registers r4 r5 
                                   3260 ;s1                        Allocated to registers r2 r3 
                                   3261 ;s2                        Allocated to registers r0 r1 
                                   3262 ;------------------------------------------------------------
                           00061C  3263 	G$definir_tempo_botao$0$0 ==.
                           00061C  3264 	C$main.c$183$1$85 ==.
                                   3265 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:183: int definir_tempo_botao() {
                                   3266 ;	-----------------------------------------
                                   3267 ;	 function definir_tempo_botao
                                   3268 ;	-----------------------------------------
      000713                       3269 _definir_tempo_botao:
                           00061C  3270 	C$main.c$190$1$87 ==.
                                   3271 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:190: limpa_glcd(ESQ);
      000713 C2 08            [12] 3272 	clr	_limpa_glcd_PARM_1
      000715 12 02 D6         [24] 3273 	lcall	_limpa_glcd
                           000621  3274 	C$main.c$191$1$87 ==.
                                   3275 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:191: limpa_glcd(DIR);
      000718 D2 08            [12] 3276 	setb	_limpa_glcd_PARM_1
      00071A 12 02 D6         [24] 3277 	lcall	_limpa_glcd
                           000626  3278 	C$main.c$192$1$87 ==.
                                   3279 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:192: conf_pag(0, ESQ);
      00071D C2 07            [12] 3280 	clr	_conf_pag_PARM_2
      00071F 75 82 00         [24] 3281 	mov	dpl,#0x00
      000722 12 02 C2         [24] 3282 	lcall	_conf_pag
                           00062E  3283 	C$main.c$193$1$87 ==.
                                   3284 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:193: conf_pag(0, DIR);
      000725 D2 07            [12] 3285 	setb	_conf_pag_PARM_2
      000727 75 82 00         [24] 3286 	mov	dpl,#0x00
      00072A 12 02 C2         [24] 3287 	lcall	_conf_pag
                           000636  3288 	C$main.c$195$1$87 ==.
                                   3289 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:195: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      00072D E4               [12] 3290 	clr	a
      00072E C0 E0            [24] 3291 	push	acc
      000730 C0 E0            [24] 3292 	push	acc
      000732 C0 E0            [24] 3293 	push	acc
      000734 C0 E0            [24] 3294 	push	acc
      000736 C0 E0            [24] 3295 	push	acc
      000738 C0 E0            [24] 3296 	push	acc
      00073A C0 E0            [24] 3297 	push	acc
      00073C C0 E0            [24] 3298 	push	acc
      00073E 74 EB            [12] 3299 	mov	a,#___str_5
      000740 C0 E0            [24] 3300 	push	acc
      000742 74 12            [12] 3301 	mov	a,#(___str_5 >> 8)
      000744 C0 E0            [24] 3302 	push	acc
      000746 12 0A E5         [24] 3303 	lcall	_printf_fast_f
      000749 E5 81            [12] 3304 	mov	a,sp
      00074B 24 F6            [12] 3305 	add	a,#0xf6
      00074D F5 81            [12] 3306 	mov	sp,a
                           000658  3307 	C$main.c$196$1$87 ==.
                                   3308 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:196: m1 = le_tec() * 10;
      00074F 12 05 DA         [24] 3309 	lcall	_le_tec
      000752 E5 82            [12] 3310 	mov	a,dpl
      000754 75 F0 0A         [24] 3311 	mov	b,#0x0a
      000757 A4               [48] 3312 	mul	ab
      000758 FE               [12] 3313 	mov	r6,a
      000759 AF F0            [24] 3314 	mov	r7,b
                           000664  3315 	C$main.c$197$1$87 ==.
                                   3316 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:197: resetar_tempo(m1);
      00075B 8E 82            [24] 3317 	mov	dpl,r6
      00075D 8F 83            [24] 3318 	mov	dph,r7
      00075F C0 07            [24] 3319 	push	ar7
      000761 C0 06            [24] 3320 	push	ar6
      000763 12 07 05         [24] 3321 	lcall	_resetar_tempo
      000766 D0 06            [24] 3322 	pop	ar6
      000768 D0 07            [24] 3323 	pop	ar7
                           000673  3324 	C$main.c$199$1$87 ==.
                                   3325 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:199: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      00076A C0 07            [24] 3326 	push	ar7
      00076C C0 06            [24] 3327 	push	ar6
      00076E E4               [12] 3328 	clr	a
      00076F C0 E0            [24] 3329 	push	acc
      000771 C0 E0            [24] 3330 	push	acc
      000773 C0 E0            [24] 3331 	push	acc
      000775 C0 E0            [24] 3332 	push	acc
      000777 C0 E0            [24] 3333 	push	acc
      000779 C0 E0            [24] 3334 	push	acc
      00077B C0 06            [24] 3335 	push	ar6
      00077D C0 07            [24] 3336 	push	ar7
      00077F 74 EB            [12] 3337 	mov	a,#___str_5
      000781 C0 E0            [24] 3338 	push	acc
      000783 74 12            [12] 3339 	mov	a,#(___str_5 >> 8)
      000785 C0 E0            [24] 3340 	push	acc
      000787 12 0A E5         [24] 3341 	lcall	_printf_fast_f
      00078A E5 81            [12] 3342 	mov	a,sp
      00078C 24 F6            [12] 3343 	add	a,#0xf6
      00078E F5 81            [12] 3344 	mov	sp,a
                           000699  3345 	C$main.c$200$1$87 ==.
                                   3346 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:200: m2 = le_tec();
      000790 12 05 DA         [24] 3347 	lcall	_le_tec
                           00069C  3348 	C$main.c$201$1$87 ==.
                                   3349 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:201: resetar_tempo(m2);
      000793 AC 82            [24] 3350 	mov	r4,dpl
      000795 7D 00            [12] 3351 	mov	r5,#0x00
      000797 8D 83            [24] 3352 	mov	dph,r5
      000799 C0 05            [24] 3353 	push	ar5
      00079B C0 04            [24] 3354 	push	ar4
      00079D 12 07 05         [24] 3355 	lcall	_resetar_tempo
      0007A0 D0 04            [24] 3356 	pop	ar4
      0007A2 D0 05            [24] 3357 	pop	ar5
      0007A4 D0 06            [24] 3358 	pop	ar6
      0007A6 D0 07            [24] 3359 	pop	ar7
                           0006B1  3360 	C$main.c$203$1$87 ==.
                                   3361 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:203: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      0007A8 C0 07            [24] 3362 	push	ar7
      0007AA C0 06            [24] 3363 	push	ar6
      0007AC C0 05            [24] 3364 	push	ar5
      0007AE C0 04            [24] 3365 	push	ar4
      0007B0 E4               [12] 3366 	clr	a
      0007B1 C0 E0            [24] 3367 	push	acc
      0007B3 C0 E0            [24] 3368 	push	acc
      0007B5 C0 E0            [24] 3369 	push	acc
      0007B7 C0 E0            [24] 3370 	push	acc
      0007B9 C0 04            [24] 3371 	push	ar4
      0007BB C0 05            [24] 3372 	push	ar5
      0007BD C0 06            [24] 3373 	push	ar6
      0007BF C0 07            [24] 3374 	push	ar7
      0007C1 74 EB            [12] 3375 	mov	a,#___str_5
      0007C3 C0 E0            [24] 3376 	push	acc
      0007C5 74 12            [12] 3377 	mov	a,#(___str_5 >> 8)
      0007C7 C0 E0            [24] 3378 	push	acc
      0007C9 12 0A E5         [24] 3379 	lcall	_printf_fast_f
      0007CC E5 81            [12] 3380 	mov	a,sp
      0007CE 24 F6            [12] 3381 	add	a,#0xf6
      0007D0 F5 81            [12] 3382 	mov	sp,a
                           0006DB  3383 	C$main.c$204$1$87 ==.
                                   3384 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:204: s1 = le_tec() * 10;
      0007D2 12 05 DA         [24] 3385 	lcall	_le_tec
      0007D5 E5 82            [12] 3386 	mov	a,dpl
      0007D7 75 F0 0A         [24] 3387 	mov	b,#0x0a
      0007DA A4               [48] 3388 	mul	ab
      0007DB FA               [12] 3389 	mov	r2,a
      0007DC AB F0            [24] 3390 	mov	r3,b
                           0006E7  3391 	C$main.c$205$1$87 ==.
                                   3392 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:205: resetar_tempo(s1);
      0007DE 8A 82            [24] 3393 	mov	dpl,r2
      0007E0 8B 83            [24] 3394 	mov	dph,r3
      0007E2 C0 03            [24] 3395 	push	ar3
      0007E4 C0 02            [24] 3396 	push	ar2
      0007E6 12 07 05         [24] 3397 	lcall	_resetar_tempo
      0007E9 D0 02            [24] 3398 	pop	ar2
      0007EB D0 03            [24] 3399 	pop	ar3
      0007ED D0 04            [24] 3400 	pop	ar4
      0007EF D0 05            [24] 3401 	pop	ar5
      0007F1 D0 06            [24] 3402 	pop	ar6
      0007F3 D0 07            [24] 3403 	pop	ar7
                           0006FE  3404 	C$main.c$206$1$87 ==.
                                   3405 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:206: if(s1 > 50)	s1 = 50;
      0007F5 C3               [12] 3406 	clr	c
      0007F6 74 32            [12] 3407 	mov	a,#0x32
      0007F8 9A               [12] 3408 	subb	a,r2
      0007F9 74 80            [12] 3409 	mov	a,#(0x00 ^ 0x80)
      0007FB 8B F0            [24] 3410 	mov	b,r3
      0007FD 63 F0 80         [24] 3411 	xrl	b,#0x80
      000800 95 F0            [12] 3412 	subb	a,b
      000802 50 04            [24] 3413 	jnc	00102$
      000804 7A 32            [12] 3414 	mov	r2,#0x32
      000806 7B 00            [12] 3415 	mov	r3,#0x00
      000808                       3416 00102$:
                           000711  3417 	C$main.c$208$1$87 ==.
                                   3418 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:208: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      000808 C0 07            [24] 3419 	push	ar7
      00080A C0 06            [24] 3420 	push	ar6
      00080C C0 05            [24] 3421 	push	ar5
      00080E C0 04            [24] 3422 	push	ar4
      000810 C0 03            [24] 3423 	push	ar3
      000812 C0 02            [24] 3424 	push	ar2
      000814 E4               [12] 3425 	clr	a
      000815 C0 E0            [24] 3426 	push	acc
      000817 C0 E0            [24] 3427 	push	acc
      000819 C0 02            [24] 3428 	push	ar2
      00081B C0 03            [24] 3429 	push	ar3
      00081D C0 04            [24] 3430 	push	ar4
      00081F C0 05            [24] 3431 	push	ar5
      000821 C0 06            [24] 3432 	push	ar6
      000823 C0 07            [24] 3433 	push	ar7
      000825 74 EB            [12] 3434 	mov	a,#___str_5
      000827 C0 E0            [24] 3435 	push	acc
      000829 74 12            [12] 3436 	mov	a,#(___str_5 >> 8)
      00082B C0 E0            [24] 3437 	push	acc
      00082D 12 0A E5         [24] 3438 	lcall	_printf_fast_f
      000830 E5 81            [12] 3439 	mov	a,sp
      000832 24 F6            [12] 3440 	add	a,#0xf6
      000834 F5 81            [12] 3441 	mov	sp,a
                           00073F  3442 	C$main.c$209$1$87 ==.
                                   3443 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:209: s2 = le_tec();
      000836 12 05 DA         [24] 3444 	lcall	_le_tec
      000839 A8 82            [24] 3445 	mov	r0,dpl
      00083B 79 00            [12] 3446 	mov	r1,#0x00
                           000746  3447 	C$main.c$210$1$87 ==.
                                   3448 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:210: resetar_tempo(s2);
      00083D 88 82            [24] 3449 	mov	dpl,r0
      00083F 89 83            [24] 3450 	mov	dph,r1
      000841 C0 01            [24] 3451 	push	ar1
      000843 C0 00            [24] 3452 	push	ar0
      000845 12 07 05         [24] 3453 	lcall	_resetar_tempo
      000848 D0 00            [24] 3454 	pop	ar0
      00084A D0 01            [24] 3455 	pop	ar1
      00084C D0 02            [24] 3456 	pop	ar2
      00084E D0 03            [24] 3457 	pop	ar3
      000850 D0 04            [24] 3458 	pop	ar4
      000852 D0 05            [24] 3459 	pop	ar5
      000854 D0 06            [24] 3460 	pop	ar6
      000856 D0 07            [24] 3461 	pop	ar7
                           000761  3462 	C$main.c$212$1$87 ==.
                                   3463 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:212: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      000858 C0 07            [24] 3464 	push	ar7
      00085A C0 06            [24] 3465 	push	ar6
      00085C C0 05            [24] 3466 	push	ar5
      00085E C0 04            [24] 3467 	push	ar4
      000860 C0 03            [24] 3468 	push	ar3
      000862 C0 02            [24] 3469 	push	ar2
      000864 C0 01            [24] 3470 	push	ar1
      000866 C0 00            [24] 3471 	push	ar0
      000868 C0 00            [24] 3472 	push	ar0
      00086A C0 01            [24] 3473 	push	ar1
      00086C C0 02            [24] 3474 	push	ar2
      00086E C0 03            [24] 3475 	push	ar3
      000870 C0 04            [24] 3476 	push	ar4
      000872 C0 05            [24] 3477 	push	ar5
      000874 C0 06            [24] 3478 	push	ar6
      000876 C0 07            [24] 3479 	push	ar7
      000878 74 EB            [12] 3480 	mov	a,#___str_5
      00087A C0 E0            [24] 3481 	push	acc
      00087C 74 12            [12] 3482 	mov	a,#(___str_5 >> 8)
      00087E C0 E0            [24] 3483 	push	acc
      000880 12 0A E5         [24] 3484 	lcall	_printf_fast_f
      000883 E5 81            [12] 3485 	mov	a,sp
      000885 24 F6            [12] 3486 	add	a,#0xf6
      000887 F5 81            [12] 3487 	mov	sp,a
      000889 D0 00            [24] 3488 	pop	ar0
      00088B D0 01            [24] 3489 	pop	ar1
      00088D D0 02            [24] 3490 	pop	ar2
      00088F D0 03            [24] 3491 	pop	ar3
      000891 D0 04            [24] 3492 	pop	ar4
      000893 D0 05            [24] 3493 	pop	ar5
      000895 D0 06            [24] 3494 	pop	ar6
      000897 D0 07            [24] 3495 	pop	ar7
                           0007A2  3496 	C$main.c$214$1$87 ==.
                                   3497 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:214: tempoReal = ((m1 + m2) * 60) + (s1 + s2);
      000899 EC               [12] 3498 	mov	a,r4
      00089A 2E               [12] 3499 	add	a,r6
      00089B F5 15            [12] 3500 	mov	__mulint_PARM_2,a
      00089D ED               [12] 3501 	mov	a,r5
      00089E 3F               [12] 3502 	addc	a,r7
      00089F F5 16            [12] 3503 	mov	(__mulint_PARM_2 + 1),a
      0008A1 90 00 3C         [24] 3504 	mov	dptr,#0x003c
      0008A4 C0 03            [24] 3505 	push	ar3
      0008A6 C0 02            [24] 3506 	push	ar2
      0008A8 C0 01            [24] 3507 	push	ar1
      0008AA C0 00            [24] 3508 	push	ar0
      0008AC 12 0F A9         [24] 3509 	lcall	__mulint
      0008AF AE 82            [24] 3510 	mov	r6,dpl
      0008B1 AF 83            [24] 3511 	mov	r7,dph
      0008B3 D0 00            [24] 3512 	pop	ar0
      0008B5 D0 01            [24] 3513 	pop	ar1
      0008B7 D0 02            [24] 3514 	pop	ar2
      0008B9 D0 03            [24] 3515 	pop	ar3
      0008BB E8               [12] 3516 	mov	a,r0
      0008BC 2A               [12] 3517 	add	a,r2
      0008BD FA               [12] 3518 	mov	r2,a
      0008BE E9               [12] 3519 	mov	a,r1
      0008BF 3B               [12] 3520 	addc	a,r3
      0008C0 FB               [12] 3521 	mov	r3,a
      0008C1 EA               [12] 3522 	mov	a,r2
      0008C2 2E               [12] 3523 	add	a,r6
      0008C3 F5 82            [12] 3524 	mov	dpl,a
      0008C5 EB               [12] 3525 	mov	a,r3
      0008C6 3F               [12] 3526 	addc	a,r7
      0008C7 F5 83            [12] 3527 	mov	dph,a
                           0007D2  3528 	C$main.c$215$1$87 ==.
                                   3529 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:215: return tempoReal;
                           0007D2  3530 	C$main.c$217$1$87 ==.
                           0007D2  3531 	XG$definir_tempo_botao$0$0 ==.
      0008C9 22               [24] 3532 	ret
                                   3533 ;------------------------------------------------------------
                                   3534 ;Allocation info for local variables in function 'definir_tempo_bluetooth'
                                   3535 ;------------------------------------------------------------
                                   3536 ;tempoReal                 Allocated to registers r6 r7 
                                   3537 ;------------------------------------------------------------
                           0007D3  3538 	G$definir_tempo_bluetooth$0$0 ==.
                           0007D3  3539 	C$main.c$226$1$87 ==.
                                   3540 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:226: int definir_tempo_bluetooth() {
                                   3541 ;	-----------------------------------------
                                   3542 ;	 function definir_tempo_bluetooth
                                   3543 ;	-----------------------------------------
      0008CA                       3544 _definir_tempo_bluetooth:
                           0007D3  3545 	C$main.c$228$1$88 ==.
                                   3546 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:228: int tempoReal = (int)TECLA;
      0008CA AE 0B            [24] 3547 	mov	r6,_TECLA
      0008CC 7F 00            [12] 3548 	mov	r7,#0x00
                           0007D7  3549 	C$main.c$230$1$88 ==.
                                   3550 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:230: limpa_glcd(ESQ);
      0008CE C2 08            [12] 3551 	clr	_limpa_glcd_PARM_1
      0008D0 C0 07            [24] 3552 	push	ar7
      0008D2 C0 06            [24] 3553 	push	ar6
      0008D4 12 02 D6         [24] 3554 	lcall	_limpa_glcd
                           0007E0  3555 	C$main.c$231$1$88 ==.
                                   3556 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:231: limpa_glcd(DIR);
      0008D7 D2 08            [12] 3557 	setb	_limpa_glcd_PARM_1
      0008D9 12 02 D6         [24] 3558 	lcall	_limpa_glcd
                           0007E5  3559 	C$main.c$232$1$88 ==.
                                   3560 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:232: conf_pag(0, ESQ);
      0008DC C2 07            [12] 3561 	clr	_conf_pag_PARM_2
      0008DE 75 82 00         [24] 3562 	mov	dpl,#0x00
      0008E1 12 02 C2         [24] 3563 	lcall	_conf_pag
                           0007ED  3564 	C$main.c$233$1$88 ==.
                                   3565 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:233: conf_pag(0, DIR);
      0008E4 D2 07            [12] 3566 	setb	_conf_pag_PARM_2
      0008E6 75 82 00         [24] 3567 	mov	dpl,#0x00
      0008E9 12 02 C2         [24] 3568 	lcall	_conf_pag
      0008EC D0 06            [24] 3569 	pop	ar6
      0008EE D0 07            [24] 3570 	pop	ar7
                           0007F9  3571 	C$main.c$235$1$88 ==.
                                   3572 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:235: printf_fast_f("Tempo %d:", tempoReal);
      0008F0 C0 07            [24] 3573 	push	ar7
      0008F2 C0 06            [24] 3574 	push	ar6
      0008F4 C0 06            [24] 3575 	push	ar6
      0008F6 C0 07            [24] 3576 	push	ar7
      0008F8 74 FC            [12] 3577 	mov	a,#___str_6
      0008FA C0 E0            [24] 3578 	push	acc
      0008FC 74 12            [12] 3579 	mov	a,#(___str_6 >> 8)
      0008FE C0 E0            [24] 3580 	push	acc
      000900 12 0A E5         [24] 3581 	lcall	_printf_fast_f
      000903 E5 81            [12] 3582 	mov	a,sp
      000905 24 FC            [12] 3583 	add	a,#0xfc
      000907 F5 81            [12] 3584 	mov	sp,a
      000909 D0 06            [24] 3585 	pop	ar6
      00090B D0 07            [24] 3586 	pop	ar7
                           000816  3587 	C$main.c$237$1$88 ==.
                                   3588 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:237: return tempoReal;
      00090D 8E 82            [24] 3589 	mov	dpl,r6
      00090F 8F 83            [24] 3590 	mov	dph,r7
                           00081A  3591 	C$main.c$239$1$88 ==.
                           00081A  3592 	XG$definir_tempo_bluetooth$0$0 ==.
      000911 22               [24] 3593 	ret
                                   3594 ;------------------------------------------------------------
                                   3595 ;Allocation info for local variables in function 'escolher_entrada'
                                   3596 ;------------------------------------------------------------
                                   3597 ;tecla_menu                Allocated to registers r6 r7 
                                   3598 ;tempo_digital             Allocated to registers r4 r6 
                                   3599 ;------------------------------------------------------------
                           00081B  3600 	G$escolher_entrada$0$0 ==.
                           00081B  3601 	C$main.c$248$1$88 ==.
                                   3602 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:248: void escolher_entrada() {
                                   3603 ;	-----------------------------------------
                                   3604 ;	 function escolher_entrada
                                   3605 ;	-----------------------------------------
      000912                       3606 _escolher_entrada:
                           00081B  3607 	C$main.c$252$1$89 ==.
                                   3608 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:252: limpa_glcd(ESQ);
      000912 C2 08            [12] 3609 	clr	_limpa_glcd_PARM_1
      000914 12 02 D6         [24] 3610 	lcall	_limpa_glcd
                           000820  3611 	C$main.c$253$1$89 ==.
                                   3612 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:253: limpa_glcd(DIR);
      000917 D2 08            [12] 3613 	setb	_limpa_glcd_PARM_1
      000919 12 02 D6         [24] 3614 	lcall	_limpa_glcd
                           000825  3615 	C$main.c$254$1$89 ==.
                                   3616 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:254: conf_pag(0, ESQ);
      00091C C2 07            [12] 3617 	clr	_conf_pag_PARM_2
      00091E 75 82 00         [24] 3618 	mov	dpl,#0x00
      000921 12 02 C2         [24] 3619 	lcall	_conf_pag
                           00082D  3620 	C$main.c$255$1$89 ==.
                                   3621 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:255: conf_pag(0, DIR);
      000924 D2 07            [12] 3622 	setb	_conf_pag_PARM_2
      000926 75 82 00         [24] 3623 	mov	dpl,#0x00
      000929 12 02 C2         [24] 3624 	lcall	_conf_pag
                           000835  3625 	C$main.c$257$1$89 ==.
                                   3626 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:257: printf_fast_f("\x01 Selecione o");
      00092C 74 06            [12] 3627 	mov	a,#___str_7
      00092E C0 E0            [24] 3628 	push	acc
      000930 74 13            [12] 3629 	mov	a,#(___str_7 >> 8)
      000932 C0 E0            [24] 3630 	push	acc
      000934 12 0A E5         [24] 3631 	lcall	_printf_fast_f
      000937 15 81            [12] 3632 	dec	sp
      000939 15 81            [12] 3633 	dec	sp
                           000844  3634 	C$main.c$258$1$89 ==.
                                   3635 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:258: printf_fast_f("\x02 tipo entrada:");
      00093B 74 14            [12] 3636 	mov	a,#___str_8
      00093D C0 E0            [24] 3637 	push	acc
      00093F 74 13            [12] 3638 	mov	a,#(___str_8 >> 8)
      000941 C0 E0            [24] 3639 	push	acc
      000943 12 0A E5         [24] 3640 	lcall	_printf_fast_f
      000946 15 81            [12] 3641 	dec	sp
      000948 15 81            [12] 3642 	dec	sp
                           000853  3643 	C$main.c$259$1$89 ==.
                                   3644 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:259: printf_fast_f("\x04 a - Manual");
      00094A 74 24            [12] 3645 	mov	a,#___str_9
      00094C C0 E0            [24] 3646 	push	acc
      00094E 74 13            [12] 3647 	mov	a,#(___str_9 >> 8)
      000950 C0 E0            [24] 3648 	push	acc
      000952 12 0A E5         [24] 3649 	lcall	_printf_fast_f
      000955 15 81            [12] 3650 	dec	sp
      000957 15 81            [12] 3651 	dec	sp
                           000862  3652 	C$main.c$260$1$89 ==.
                                   3653 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:260: printf_fast_f("\x05 b - Digital");
      000959 74 31            [12] 3654 	mov	a,#___str_10
      00095B C0 E0            [24] 3655 	push	acc
      00095D 74 13            [12] 3656 	mov	a,#(___str_10 >> 8)
      00095F C0 E0            [24] 3657 	push	acc
      000961 12 0A E5         [24] 3658 	lcall	_printf_fast_f
      000964 15 81            [12] 3659 	dec	sp
      000966 15 81            [12] 3660 	dec	sp
                           000871  3661 	C$main.c$262$1$89 ==.
                                   3662 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:262: tecla_menu = 0;
      000968 7E 00            [12] 3663 	mov	r6,#0x00
      00096A 7F 00            [12] 3664 	mov	r7,#0x00
                           000875  3665 	C$main.c$264$1$89 ==.
                                   3666 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:264: while(tecla_menu != MENU_MANUAL || tecla_menu != MENU_DIGITAL) {
      00096C                       3667 00102$:
      00096C BE 64 0B         [24] 3668 	cjne	r6,#0x64,00103$
      00096F BF 00 08         [24] 3669 	cjne	r7,#0x00,00103$
      000972 BE 65 05         [24] 3670 	cjne	r6,#0x65,00131$
      000975 BF 00 02         [24] 3671 	cjne	r7,#0x00,00131$
      000978 80 0B            [24] 3672 	sjmp	00104$
      00097A                       3673 00131$:
      00097A                       3674 00103$:
                           000883  3675 	C$main.c$265$2$90 ==.
                                   3676 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:265: tecla_menu = le_tec();
      00097A 12 05 DA         [24] 3677 	lcall	_le_tec
      00097D AD 82            [24] 3678 	mov	r5,dpl
      00097F 8D 06            [24] 3679 	mov	ar6,r5
      000981 7F 00            [12] 3680 	mov	r7,#0x00
      000983 80 E7            [24] 3681 	sjmp	00102$
      000985                       3682 00104$:
                           00088E  3683 	C$main.c$268$1$89 ==.
                                   3684 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:268: printf_fast_f("\x06 Tudo pronto!!");
      000985 C0 07            [24] 3685 	push	ar7
      000987 C0 06            [24] 3686 	push	ar6
      000989 74 3F            [12] 3687 	mov	a,#___str_11
      00098B C0 E0            [24] 3688 	push	acc
      00098D 74 13            [12] 3689 	mov	a,#(___str_11 >> 8)
      00098F C0 E0            [24] 3690 	push	acc
      000991 12 0A E5         [24] 3691 	lcall	_printf_fast_f
      000994 15 81            [12] 3692 	dec	sp
      000996 15 81            [12] 3693 	dec	sp
      000998 D0 06            [24] 3694 	pop	ar6
      00099A D0 07            [24] 3695 	pop	ar7
                           0008A5  3696 	C$main.c$270$2$91 ==.
                                   3697 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:270: while(1)
      00099C E4               [12] 3698 	clr	a
      00099D BE 65 04         [24] 3699 	cjne	r6,#0x65,00132$
      0009A0 BF 00 01         [24] 3700 	cjne	r7,#0x00,00132$
      0009A3 04               [12] 3701 	inc	a
      0009A4                       3702 00132$:
      0009A4 FD               [12] 3703 	mov	r5,a
      0009A5 E4               [12] 3704 	clr	a
      0009A6 BE 64 04         [24] 3705 	cjne	r6,#0x64,00134$
      0009A9 BF 00 01         [24] 3706 	cjne	r7,#0x00,00134$
      0009AC 04               [12] 3707 	inc	a
      0009AD                       3708 00134$:
      0009AD FF               [12] 3709 	mov	r7,a
      0009AE                       3710 00110$:
                           0008B7  3711 	C$main.c$273$2$91 ==.
                                   3712 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:273: if(tecla_menu==MENU_MANUAL)
      0009AE EF               [12] 3713 	mov	a,r7
      0009AF 60 08            [24] 3714 	jz	00106$
                           0008BA  3715 	C$main.c$275$3$92 ==.
                                   3716 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:275: tempo_digital = definir_tempo_botao();
      0009B1 12 07 13         [24] 3717 	lcall	_definir_tempo_botao
                           0008BD  3718 	C$main.c$276$3$92 ==.
                                   3719 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:276: contagemRegressiva(tempo_digital);
      0009B4 12 06 49         [24] 3720 	lcall	_contagemRegressiva
                           0008C0  3721 	C$main.c$277$3$92 ==.
                                   3722 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:277: break;
      0009B7 80 09            [24] 3723 	sjmp	00111$
      0009B9                       3724 00106$:
                           0008C2  3725 	C$main.c$280$2$91 ==.
                                   3726 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:280: if(tecla_menu==MENU_DIGITAL)
      0009B9 ED               [12] 3727 	mov	a,r5
      0009BA 60 F2            [24] 3728 	jz	00110$
                           0008C5  3729 	C$main.c$282$3$93 ==.
                                   3730 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:282: tempo_digital = definir_tempo_bluetooth();
      0009BC 12 08 CA         [24] 3731 	lcall	_definir_tempo_bluetooth
                           0008C8  3732 	C$main.c$283$3$93 ==.
                                   3733 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:283: contagemRegressiva(tempo_digital);
      0009BF 12 06 49         [24] 3734 	lcall	_contagemRegressiva
                           0008CB  3735 	C$main.c$284$1$89 ==.
                                   3736 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:284: break;
      0009C2                       3737 00111$:
                           0008CB  3738 	C$main.c$288$1$89 ==.
                                   3739 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:288: escolher_entrada();
      0009C2 12 09 12         [24] 3740 	lcall	_escolher_entrada
                           0008CE  3741 	C$main.c$291$1$89 ==.
                           0008CE  3742 	XG$escolher_entrada$0$0 ==.
      0009C5 22               [24] 3743 	ret
                                   3744 ;------------------------------------------------------------
                                   3745 ;Allocation info for local variables in function 'uart_ISR'
                                   3746 ;------------------------------------------------------------
                           0008CF  3747 	G$uart_ISR$0$0 ==.
                           0008CF  3748 	C$main.c$301$1$89 ==.
                                   3749 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:301: void uart_ISR() __interrupt 4{
                                   3750 ;	-----------------------------------------
                                   3751 ;	 function uart_ISR
                                   3752 ;	-----------------------------------------
      0009C6                       3753 _uart_ISR:
                           0008CF  3754 	C$main.c$303$1$94 ==.
                                   3755 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:303: if(RI0 == 1){
      0009C6 30 98 07         [24] 3756 	jnb	_RI0,00103$
                           0008D2  3757 	C$main.c$304$2$95 ==.
                                   3758 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:304: x = 1;
      0009C9 D2 0B            [12] 3759 	setb	_x
                           0008D4  3760 	C$main.c$305$2$95 ==.
                                   3761 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:305: tecla = SBUF0;
      0009CB 85 99 0D         [24] 3762 	mov	_tecla,_SBUF0
                           0008D7  3763 	C$main.c$306$2$95 ==.
                                   3764 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:306: RI0 = 0;
      0009CE C2 98            [12] 3765 	clr	_RI0
      0009D0                       3766 00103$:
                           0008D9  3767 	C$main.c$308$1$94 ==.
                           0008D9  3768 	XG$uart_ISR$0$0 ==.
      0009D0 32               [24] 3769 	reti
                                   3770 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3771 ;	eliminated unneeded push/pop psw
                                   3772 ;	eliminated unneeded push/pop dpl
                                   3773 ;	eliminated unneeded push/pop dph
                                   3774 ;	eliminated unneeded push/pop b
                                   3775 ;	eliminated unneeded push/pop acc
                                   3776 ;------------------------------------------------------------
                                   3777 ;Allocation info for local variables in function 'ISR_TC2'
                                   3778 ;------------------------------------------------------------
                                   3779 ;tecla_atu                 Allocated to registers r7 
                                   3780 ;------------------------------------------------------------
                           0008DA  3781 	G$ISR_TC2$0$0 ==.
                           0008DA  3782 	C$main.c$316$1$94 ==.
                                   3783 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:316: void ISR_TC2(void) interrupt 5 { // � 5 por conta da ordem no datasheet
                                   3784 ;	-----------------------------------------
                                   3785 ;	 function ISR_TC2
                                   3786 ;	-----------------------------------------
      0009D1                       3787 _ISR_TC2:
      0009D1 C0 23            [24] 3788 	push	bits
      0009D3 C0 E0            [24] 3789 	push	acc
      0009D5 C0 F0            [24] 3790 	push	b
      0009D7 C0 82            [24] 3791 	push	dpl
      0009D9 C0 83            [24] 3792 	push	dph
      0009DB C0 07            [24] 3793 	push	(0+7)
      0009DD C0 06            [24] 3794 	push	(0+6)
      0009DF C0 05            [24] 3795 	push	(0+5)
      0009E1 C0 04            [24] 3796 	push	(0+4)
      0009E3 C0 03            [24] 3797 	push	(0+3)
      0009E5 C0 02            [24] 3798 	push	(0+2)
      0009E7 C0 01            [24] 3799 	push	(0+1)
      0009E9 C0 00            [24] 3800 	push	(0+0)
      0009EB C0 D0            [24] 3801 	push	psw
      0009ED 75 D0 00         [24] 3802 	mov	psw,#0x00
                           0008F9  3803 	C$main.c$317$1$97 ==.
                                   3804 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:317: unsigned char tecla_atu = le_tec();
      0009F0 12 05 DA         [24] 3805 	lcall	_le_tec
      0009F3 AF 82            [24] 3806 	mov	r7,dpl
                           0008FE  3807 	C$main.c$322$1$97 ==.
                                   3808 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:322: if (TECLA_ANT == TECS_OPEN && tecla_atu != TECS_OPEN){  // Borda de descida
      0009F5 74 FF            [12] 3809 	mov	a,#0xff
      0009F7 B5 0C 09         [24] 3810 	cjne	a,_TECLA_ANT,00105$
      0009FA BF FF 02         [24] 3811 	cjne	r7,#0xff,00124$
      0009FD 80 04            [24] 3812 	sjmp	00105$
      0009FF                       3813 00124$:
                           000908  3814 	C$main.c$323$2$98 ==.
                                   3815 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:323: TECLA = tecla_atu;
      0009FF 8F 0B            [24] 3816 	mov	_TECLA,r7
      000A01 80 0C            [24] 3817 	sjmp	00106$
      000A03                       3818 00105$:
                           00090C  3819 	C$main.c$325$1$97 ==.
                                   3820 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:325: else if (TECLA_ANT != TECS_OPEN && tecla_atu == TECS_OPEN){  // Borda de subida
      000A03 74 FF            [12] 3821 	mov	a,#0xff
      000A05 B5 0C 02         [24] 3822 	cjne	a,_TECLA_ANT,00125$
      000A08 80 05            [24] 3823 	sjmp	00106$
      000A0A                       3824 00125$:
      000A0A BF FF 02         [24] 3825 	cjne	r7,#0xff,00106$
                           000916  3826 	C$main.c$326$2$99 ==.
                                   3827 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:326: TECLA = tecla_atu;
      000A0D 8F 0B            [24] 3828 	mov	_TECLA,r7
      000A0F                       3829 00106$:
                           000918  3830 	C$main.c$328$1$97 ==.
                                   3831 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:328: TECLA_ANT = tecla_atu;
      000A0F 8F 0C            [24] 3832 	mov	_TECLA_ANT,r7
                           00091A  3833 	C$main.c$330$1$97 ==.
                                   3834 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:330: TF2 = 0; // Flag de Overflow
      000A11 C2 CF            [12] 3835 	clr	_TF2
      000A13 D0 D0            [24] 3836 	pop	psw
      000A15 D0 00            [24] 3837 	pop	(0+0)
      000A17 D0 01            [24] 3838 	pop	(0+1)
      000A19 D0 02            [24] 3839 	pop	(0+2)
      000A1B D0 03            [24] 3840 	pop	(0+3)
      000A1D D0 04            [24] 3841 	pop	(0+4)
      000A1F D0 05            [24] 3842 	pop	(0+5)
      000A21 D0 06            [24] 3843 	pop	(0+6)
      000A23 D0 07            [24] 3844 	pop	(0+7)
      000A25 D0 83            [24] 3845 	pop	dph
      000A27 D0 82            [24] 3846 	pop	dpl
      000A29 D0 F0            [24] 3847 	pop	b
      000A2B D0 E0            [24] 3848 	pop	acc
      000A2D D0 23            [24] 3849 	pop	bits
                           000938  3850 	C$main.c$331$1$97 ==.
                           000938  3851 	XG$ISR_TC2$0$0 ==.
      000A2F 32               [24] 3852 	reti
                                   3853 ;------------------------------------------------------------
                                   3854 ;Allocation info for local variables in function 'Timer4_ISR'
                                   3855 ;------------------------------------------------------------
                           000939  3856 	G$Timer4_ISR$0$0 ==.
                           000939  3857 	C$main.c$335$1$97 ==.
                                   3858 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:335: void Timer4_ISR (void) interrupt 16
                                   3859 ;	-----------------------------------------
                                   3860 ;	 function Timer4_ISR
                                   3861 ;	-----------------------------------------
      000A30                       3862 _Timer4_ISR:
                           000939  3863 	C$main.c$337$1$101 ==.
                                   3864 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:337: SMB0CN &= ~0x40;	// Desabilita SMBus
      000A30 53 C0 BF         [24] 3865 	anl	_SMB0CN,#0xbf
                           00093C  3866 	C$main.c$338$1$101 ==.
                                   3867 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:338: SMB0CN |= 0x40;		// Habilita SMBus
      000A33 43 C0 40         [24] 3868 	orl	_SMB0CN,#0x40
                           00093F  3869 	C$main.c$339$1$101 ==.
                                   3870 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:339: TF4 = 0;			// Zera flag de interrup��o do TC4
      000A36 C2 CF            [12] 3871 	clr	_TF4
                           000941  3872 	C$main.c$340$1$101 ==.
                           000941  3873 	XG$Timer4_ISR$0$0 ==.
      000A38 32               [24] 3874 	reti
                                   3875 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3876 ;	eliminated unneeded push/pop psw
                                   3877 ;	eliminated unneeded push/pop dpl
                                   3878 ;	eliminated unneeded push/pop dph
                                   3879 ;	eliminated unneeded push/pop b
                                   3880 ;	eliminated unneeded push/pop acc
                                   3881 ;------------------------------------------------------------
                                   3882 ;Allocation info for local variables in function 'limpa_tela'
                                   3883 ;------------------------------------------------------------
                           000942  3884 	G$limpa_tela$0$0 ==.
                           000942  3885 	C$main.c$349$1$101 ==.
                                   3886 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:349: void limpa_tela() {
                                   3887 ;	-----------------------------------------
                                   3888 ;	 function limpa_tela
                                   3889 ;	-----------------------------------------
      000A39                       3890 _limpa_tela:
                           000942  3891 	C$main.c$350$1$102 ==.
                                   3892 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:350: limpa_glcd(ESQ);
      000A39 C2 08            [12] 3893 	clr	_limpa_glcd_PARM_1
      000A3B 12 02 D6         [24] 3894 	lcall	_limpa_glcd
                           000947  3895 	C$main.c$351$1$102 ==.
                                   3896 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:351: limpa_glcd(DIR);
      000A3E D2 08            [12] 3897 	setb	_limpa_glcd_PARM_1
      000A40 12 02 D6         [24] 3898 	lcall	_limpa_glcd
                           00094C  3899 	C$main.c$352$1$102 ==.
                                   3900 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:352: conf_pag(0, ESQ);
      000A43 C2 07            [12] 3901 	clr	_conf_pag_PARM_2
      000A45 75 82 00         [24] 3902 	mov	dpl,#0x00
      000A48 12 02 C2         [24] 3903 	lcall	_conf_pag
                           000954  3904 	C$main.c$353$1$102 ==.
                                   3905 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:353: conf_pag(0, DIR);
      000A4B D2 07            [12] 3906 	setb	_conf_pag_PARM_2
      000A4D 75 82 00         [24] 3907 	mov	dpl,#0x00
      000A50 12 02 C2         [24] 3908 	lcall	_conf_pag
                           00095C  3909 	C$main.c$354$1$102 ==.
                           00095C  3910 	XG$limpa_tela$0$0 ==.
      000A53 22               [24] 3911 	ret
                                   3912 ;------------------------------------------------------------
                                   3913 ;Allocation info for local variables in function 'main'
                                   3914 ;------------------------------------------------------------
                                   3915 ;aux                       Allocated to registers r6 r7 
                                   3916 ;------------------------------------------------------------
                           00095D  3917 	G$main$0$0 ==.
                           00095D  3918 	C$main.c$362$1$102 ==.
                                   3919 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:362: void main(void)
                                   3920 ;	-----------------------------------------
                                   3921 ;	 function main
                                   3922 ;	-----------------------------------------
      000A54                       3923 _main:
                           00095D  3924 	C$main.c$366$1$104 ==.
                                   3925 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:366: Init_Device();
      000A54 12 01 98         [24] 3926 	lcall	_Init_Device
                           000960  3927 	C$main.c$367$1$104 ==.
                                   3928 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:367: setup();
      000A57 12 04 44         [24] 3929 	lcall	_setup
                           000963  3930 	C$main.c$369$1$104 ==.
                                   3931 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:369: init_GLCD();
      000A5A 12 02 47         [24] 3932 	lcall	_init_GLCD
                           000966  3933 	C$main.c$370$1$104 ==.
                                   3934 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:370: limpa_tela();
      000A5D 12 0A 39         [24] 3935 	lcall	_limpa_tela
                           000969  3936 	C$main.c$374$1$104 ==.
                                   3937 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:374: printf_fast_f("\x01 %d", aux);
      000A60 E4               [12] 3938 	clr	a
      000A61 C0 E0            [24] 3939 	push	acc
      000A63 C0 E0            [24] 3940 	push	acc
      000A65 74 4F            [12] 3941 	mov	a,#___str_12
      000A67 C0 E0            [24] 3942 	push	acc
      000A69 74 13            [12] 3943 	mov	a,#(___str_12 >> 8)
      000A6B C0 E0            [24] 3944 	push	acc
      000A6D 12 0A E5         [24] 3945 	lcall	_printf_fast_f
      000A70 E5 81            [12] 3946 	mov	a,sp
      000A72 24 FC            [12] 3947 	add	a,#0xfc
      000A74 F5 81            [12] 3948 	mov	sp,a
                           00097F  3949 	C$main.c$376$1$104 ==.
                                   3950 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:376: while(1) {
      000A76                       3951 00105$:
                           00097F  3952 	C$main.c$377$2$105 ==.
                                   3953 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:377: aux = le_RAM_SPI(ENDERECO);
      000A76 90 00 01         [24] 3954 	mov	dptr,#0x0001
      000A79 12 04 C2         [24] 3955 	lcall	_le_RAM_SPI
      000A7C AE 82            [24] 3956 	mov	r6,dpl
      000A7E 7F 00            [12] 3957 	mov	r7,#0x00
                           000989  3958 	C$main.c$378$2$105 ==.
                                   3959 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:378: if(TECLA != TECS_OPEN) {
      000A80 74 FF            [12] 3960 	mov	a,#0xff
      000A82 B5 0B 02         [24] 3961 	cjne	a,_TECLA,00115$
      000A85 80 37            [24] 3962 	sjmp	00102$
      000A87                       3963 00115$:
                           000990  3964 	C$main.c$379$3$106 ==.
                                   3965 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:379: esc_RAM_SPI(ENDERECO, TECLA);
      000A87 85 0B 15         [24] 3966 	mov	_esc_RAM_SPI_PARM_2,_TECLA
      000A8A 90 00 01         [24] 3967 	mov	dptr,#0x0001
      000A8D C0 07            [24] 3968 	push	ar7
      000A8F C0 06            [24] 3969 	push	ar6
      000A91 12 04 9A         [24] 3970 	lcall	_esc_RAM_SPI
      000A94 D0 06            [24] 3971 	pop	ar6
      000A96 D0 07            [24] 3972 	pop	ar7
                           0009A1  3973 	C$main.c$380$3$106 ==.
                                   3974 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:380: printf_fast_f("\x03 %d", aux);
      000A98 C0 06            [24] 3975 	push	ar6
      000A9A C0 07            [24] 3976 	push	ar7
      000A9C 74 54            [12] 3977 	mov	a,#___str_13
      000A9E C0 E0            [24] 3978 	push	acc
      000AA0 74 13            [12] 3979 	mov	a,#(___str_13 >> 8)
      000AA2 C0 E0            [24] 3980 	push	acc
      000AA4 12 0A E5         [24] 3981 	lcall	_printf_fast_f
      000AA7 E5 81            [12] 3982 	mov	a,sp
      000AA9 24 FC            [12] 3983 	add	a,#0xfc
      000AAB F5 81            [12] 3984 	mov	sp,a
                           0009B6  3985 	C$main.c$381$3$106 ==.
                                   3986 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:381: printf_fast_f("\x07 FIM");
      000AAD 74 59            [12] 3987 	mov	a,#___str_14
      000AAF C0 E0            [24] 3988 	push	acc
      000AB1 74 13            [12] 3989 	mov	a,#(___str_14 >> 8)
      000AB3 C0 E0            [24] 3990 	push	acc
      000AB5 12 0A E5         [24] 3991 	lcall	_printf_fast_f
      000AB8 15 81            [12] 3992 	dec	sp
      000ABA 15 81            [12] 3993 	dec	sp
      000ABC 80 B8            [24] 3994 	sjmp	00105$
      000ABE                       3995 00102$:
                           0009C7  3996 	C$main.c$384$3$107 ==.
                                   3997 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:384: printf_fast_f("\x03 %d", aux);
      000ABE C0 06            [24] 3998 	push	ar6
      000AC0 C0 07            [24] 3999 	push	ar7
      000AC2 74 54            [12] 4000 	mov	a,#___str_13
      000AC4 C0 E0            [24] 4001 	push	acc
      000AC6 74 13            [12] 4002 	mov	a,#(___str_13 >> 8)
      000AC8 C0 E0            [24] 4003 	push	acc
      000ACA 12 0A E5         [24] 4004 	lcall	_printf_fast_f
      000ACD E5 81            [12] 4005 	mov	a,sp
      000ACF 24 FC            [12] 4006 	add	a,#0xfc
      000AD1 F5 81            [12] 4007 	mov	sp,a
                           0009DC  4008 	C$main.c$385$3$107 ==.
                                   4009 ;	C:\Users\202019050169\Downloads\5-trabal-20240625T185940Z-001\5-trabal\main.c:385: printf_fast_f("\x07 TECS OPEN");
      000AD3 74 5F            [12] 4010 	mov	a,#___str_15
      000AD5 C0 E0            [24] 4011 	push	acc
      000AD7 74 13            [12] 4012 	mov	a,#(___str_15 >> 8)
      000AD9 C0 E0            [24] 4013 	push	acc
      000ADB 12 0A E5         [24] 4014 	lcall	_printf_fast_f
      000ADE 15 81            [12] 4015 	dec	sp
      000AE0 15 81            [12] 4016 	dec	sp
      000AE2 80 92            [24] 4017 	sjmp	00105$
                           0009ED  4018 	C$main.c$388$1$104 ==.
                           0009ED  4019 	XG$main$0$0 ==.
      000AE4 22               [24] 4020 	ret
                                   4021 	.area CSEG    (CODE)
                                   4022 	.area CONST   (CODE)
                           000000  4023 G$fonte$0$0 == .
      0010CA                       4024 _fonte:
      0010CA 00                    4025 	.db #0x00	; 0
      0010CB 00                    4026 	.db #0x00	; 0
      0010CC 00                    4027 	.db #0x00	; 0
      0010CD 00                    4028 	.db #0x00	; 0
      0010CE 00                    4029 	.db #0x00	; 0
      0010CF 00                    4030 	.db #0x00	; 0
      0010D0 00                    4031 	.db #0x00	; 0
      0010D1 5F                    4032 	.db #0x5f	; 95
      0010D2 00                    4033 	.db #0x00	; 0
      0010D3 00                    4034 	.db #0x00	; 0
      0010D4 00                    4035 	.db #0x00	; 0
      0010D5 07                    4036 	.db #0x07	; 7
      0010D6 00                    4037 	.db #0x00	; 0
      0010D7 07                    4038 	.db #0x07	; 7
      0010D8 00                    4039 	.db #0x00	; 0
      0010D9 14                    4040 	.db #0x14	; 20
      0010DA 7F                    4041 	.db #0x7f	; 127
      0010DB 14                    4042 	.db #0x14	; 20
      0010DC 7F                    4043 	.db #0x7f	; 127
      0010DD 14                    4044 	.db #0x14	; 20
      0010DE 24                    4045 	.db #0x24	; 36
      0010DF 2A                    4046 	.db #0x2a	; 42
      0010E0 7F                    4047 	.db #0x7f	; 127
      0010E1 2A                    4048 	.db #0x2a	; 42
      0010E2 12                    4049 	.db #0x12	; 18
      0010E3 23                    4050 	.db #0x23	; 35
      0010E4 13                    4051 	.db #0x13	; 19
      0010E5 08                    4052 	.db #0x08	; 8
      0010E6 64                    4053 	.db #0x64	; 100	'd'
      0010E7 62                    4054 	.db #0x62	; 98	'b'
      0010E8 36                    4055 	.db #0x36	; 54	'6'
      0010E9 49                    4056 	.db #0x49	; 73	'I'
      0010EA 55                    4057 	.db #0x55	; 85	'U'
      0010EB 22                    4058 	.db #0x22	; 34
      0010EC 50                    4059 	.db #0x50	; 80	'P'
      0010ED 00                    4060 	.db #0x00	; 0
      0010EE 05                    4061 	.db #0x05	; 5
      0010EF 03                    4062 	.db #0x03	; 3
      0010F0 00                    4063 	.db #0x00	; 0
      0010F1 00                    4064 	.db #0x00	; 0
      0010F2 00                    4065 	.db #0x00	; 0
      0010F3 1C                    4066 	.db #0x1c	; 28
      0010F4 22                    4067 	.db #0x22	; 34
      0010F5 41                    4068 	.db #0x41	; 65	'A'
      0010F6 00                    4069 	.db #0x00	; 0
      0010F7 00                    4070 	.db #0x00	; 0
      0010F8 41                    4071 	.db #0x41	; 65	'A'
      0010F9 22                    4072 	.db #0x22	; 34
      0010FA 1C                    4073 	.db #0x1c	; 28
      0010FB 00                    4074 	.db #0x00	; 0
      0010FC 08                    4075 	.db #0x08	; 8
      0010FD 2A                    4076 	.db #0x2a	; 42
      0010FE 1C                    4077 	.db #0x1c	; 28
      0010FF 2A                    4078 	.db #0x2a	; 42
      001100 08                    4079 	.db #0x08	; 8
      001101 08                    4080 	.db #0x08	; 8
      001102 08                    4081 	.db #0x08	; 8
      001103 3E                    4082 	.db #0x3e	; 62
      001104 08                    4083 	.db #0x08	; 8
      001105 08                    4084 	.db #0x08	; 8
      001106 00                    4085 	.db #0x00	; 0
      001107 50                    4086 	.db #0x50	; 80	'P'
      001108 30                    4087 	.db #0x30	; 48	'0'
      001109 00                    4088 	.db #0x00	; 0
      00110A 00                    4089 	.db #0x00	; 0
      00110B 08                    4090 	.db #0x08	; 8
      00110C 08                    4091 	.db #0x08	; 8
      00110D 08                    4092 	.db #0x08	; 8
      00110E 08                    4093 	.db #0x08	; 8
      00110F 08                    4094 	.db #0x08	; 8
      001110 00                    4095 	.db #0x00	; 0
      001111 30                    4096 	.db #0x30	; 48	'0'
      001112 30                    4097 	.db #0x30	; 48	'0'
      001113 00                    4098 	.db #0x00	; 0
      001114 00                    4099 	.db #0x00	; 0
      001115 20                    4100 	.db #0x20	; 32
      001116 10                    4101 	.db #0x10	; 16
      001117 08                    4102 	.db #0x08	; 8
      001118 04                    4103 	.db #0x04	; 4
      001119 02                    4104 	.db #0x02	; 2
      00111A 3E                    4105 	.db #0x3e	; 62
      00111B 51                    4106 	.db #0x51	; 81	'Q'
      00111C 49                    4107 	.db #0x49	; 73	'I'
      00111D 45                    4108 	.db #0x45	; 69	'E'
      00111E 3E                    4109 	.db #0x3e	; 62
      00111F 00                    4110 	.db #0x00	; 0
      001120 42                    4111 	.db #0x42	; 66	'B'
      001121 7F                    4112 	.db #0x7f	; 127
      001122 40                    4113 	.db #0x40	; 64
      001123 00                    4114 	.db #0x00	; 0
      001124 42                    4115 	.db #0x42	; 66	'B'
      001125 61                    4116 	.db #0x61	; 97	'a'
      001126 51                    4117 	.db #0x51	; 81	'Q'
      001127 49                    4118 	.db #0x49	; 73	'I'
      001128 46                    4119 	.db #0x46	; 70	'F'
      001129 21                    4120 	.db #0x21	; 33
      00112A 41                    4121 	.db #0x41	; 65	'A'
      00112B 45                    4122 	.db #0x45	; 69	'E'
      00112C 4B                    4123 	.db #0x4b	; 75	'K'
      00112D 31                    4124 	.db #0x31	; 49	'1'
      00112E 18                    4125 	.db #0x18	; 24
      00112F 14                    4126 	.db #0x14	; 20
      001130 12                    4127 	.db #0x12	; 18
      001131 7F                    4128 	.db #0x7f	; 127
      001132 10                    4129 	.db #0x10	; 16
      001133 27                    4130 	.db #0x27	; 39
      001134 45                    4131 	.db #0x45	; 69	'E'
      001135 45                    4132 	.db #0x45	; 69	'E'
      001136 45                    4133 	.db #0x45	; 69	'E'
      001137 39                    4134 	.db #0x39	; 57	'9'
      001138 3C                    4135 	.db #0x3c	; 60
      001139 4A                    4136 	.db #0x4a	; 74	'J'
      00113A 49                    4137 	.db #0x49	; 73	'I'
      00113B 49                    4138 	.db #0x49	; 73	'I'
      00113C 30                    4139 	.db #0x30	; 48	'0'
      00113D 01                    4140 	.db #0x01	; 1
      00113E 71                    4141 	.db #0x71	; 113	'q'
      00113F 09                    4142 	.db #0x09	; 9
      001140 05                    4143 	.db #0x05	; 5
      001141 03                    4144 	.db #0x03	; 3
      001142 36                    4145 	.db #0x36	; 54	'6'
      001143 49                    4146 	.db #0x49	; 73	'I'
      001144 49                    4147 	.db #0x49	; 73	'I'
      001145 49                    4148 	.db #0x49	; 73	'I'
      001146 36                    4149 	.db #0x36	; 54	'6'
      001147 06                    4150 	.db #0x06	; 6
      001148 49                    4151 	.db #0x49	; 73	'I'
      001149 49                    4152 	.db #0x49	; 73	'I'
      00114A 29                    4153 	.db #0x29	; 41
      00114B 1E                    4154 	.db #0x1e	; 30
      00114C 00                    4155 	.db #0x00	; 0
      00114D 36                    4156 	.db #0x36	; 54	'6'
      00114E 36                    4157 	.db #0x36	; 54	'6'
      00114F 00                    4158 	.db #0x00	; 0
      001150 00                    4159 	.db #0x00	; 0
      001151 00                    4160 	.db #0x00	; 0
      001152 56                    4161 	.db #0x56	; 86	'V'
      001153 36                    4162 	.db #0x36	; 54	'6'
      001154 00                    4163 	.db #0x00	; 0
      001155 00                    4164 	.db #0x00	; 0
      001156 00                    4165 	.db #0x00	; 0
      001157 08                    4166 	.db #0x08	; 8
      001158 14                    4167 	.db #0x14	; 20
      001159 22                    4168 	.db #0x22	; 34
      00115A 41                    4169 	.db #0x41	; 65	'A'
      00115B 14                    4170 	.db #0x14	; 20
      00115C 14                    4171 	.db #0x14	; 20
      00115D 14                    4172 	.db #0x14	; 20
      00115E 14                    4173 	.db #0x14	; 20
      00115F 14                    4174 	.db #0x14	; 20
      001160 41                    4175 	.db #0x41	; 65	'A'
      001161 22                    4176 	.db #0x22	; 34
      001162 14                    4177 	.db #0x14	; 20
      001163 08                    4178 	.db #0x08	; 8
      001164 00                    4179 	.db #0x00	; 0
      001165 02                    4180 	.db #0x02	; 2
      001166 01                    4181 	.db #0x01	; 1
      001167 51                    4182 	.db #0x51	; 81	'Q'
      001168 09                    4183 	.db #0x09	; 9
      001169 06                    4184 	.db #0x06	; 6
      00116A 32                    4185 	.db #0x32	; 50	'2'
      00116B 49                    4186 	.db #0x49	; 73	'I'
      00116C 79                    4187 	.db #0x79	; 121	'y'
      00116D 41                    4188 	.db #0x41	; 65	'A'
      00116E 3E                    4189 	.db #0x3e	; 62
      00116F 7E                    4190 	.db #0x7e	; 126
      001170 11                    4191 	.db #0x11	; 17
      001171 11                    4192 	.db #0x11	; 17
      001172 11                    4193 	.db #0x11	; 17
      001173 7E                    4194 	.db #0x7e	; 126
      001174 7F                    4195 	.db #0x7f	; 127
      001175 49                    4196 	.db #0x49	; 73	'I'
      001176 49                    4197 	.db #0x49	; 73	'I'
      001177 49                    4198 	.db #0x49	; 73	'I'
      001178 36                    4199 	.db #0x36	; 54	'6'
      001179 3E                    4200 	.db #0x3e	; 62
      00117A 41                    4201 	.db #0x41	; 65	'A'
      00117B 41                    4202 	.db #0x41	; 65	'A'
      00117C 41                    4203 	.db #0x41	; 65	'A'
      00117D 22                    4204 	.db #0x22	; 34
      00117E 7F                    4205 	.db #0x7f	; 127
      00117F 41                    4206 	.db #0x41	; 65	'A'
      001180 41                    4207 	.db #0x41	; 65	'A'
      001181 22                    4208 	.db #0x22	; 34
      001182 1C                    4209 	.db #0x1c	; 28
      001183 7F                    4210 	.db #0x7f	; 127
      001184 49                    4211 	.db #0x49	; 73	'I'
      001185 49                    4212 	.db #0x49	; 73	'I'
      001186 49                    4213 	.db #0x49	; 73	'I'
      001187 41                    4214 	.db #0x41	; 65	'A'
      001188 7F                    4215 	.db #0x7f	; 127
      001189 09                    4216 	.db #0x09	; 9
      00118A 09                    4217 	.db #0x09	; 9
      00118B 01                    4218 	.db #0x01	; 1
      00118C 01                    4219 	.db #0x01	; 1
      00118D 3E                    4220 	.db #0x3e	; 62
      00118E 41                    4221 	.db #0x41	; 65	'A'
      00118F 41                    4222 	.db #0x41	; 65	'A'
      001190 51                    4223 	.db #0x51	; 81	'Q'
      001191 32                    4224 	.db #0x32	; 50	'2'
      001192 7F                    4225 	.db #0x7f	; 127
      001193 08                    4226 	.db #0x08	; 8
      001194 08                    4227 	.db #0x08	; 8
      001195 08                    4228 	.db #0x08	; 8
      001196 7F                    4229 	.db #0x7f	; 127
      001197 00                    4230 	.db #0x00	; 0
      001198 41                    4231 	.db #0x41	; 65	'A'
      001199 7F                    4232 	.db #0x7f	; 127
      00119A 41                    4233 	.db #0x41	; 65	'A'
      00119B 00                    4234 	.db #0x00	; 0
      00119C 20                    4235 	.db #0x20	; 32
      00119D 40                    4236 	.db #0x40	; 64
      00119E 41                    4237 	.db #0x41	; 65	'A'
      00119F 3F                    4238 	.db #0x3f	; 63
      0011A0 01                    4239 	.db #0x01	; 1
      0011A1 7F                    4240 	.db #0x7f	; 127
      0011A2 08                    4241 	.db #0x08	; 8
      0011A3 14                    4242 	.db #0x14	; 20
      0011A4 22                    4243 	.db #0x22	; 34
      0011A5 41                    4244 	.db #0x41	; 65	'A'
      0011A6 7F                    4245 	.db #0x7f	; 127
      0011A7 40                    4246 	.db #0x40	; 64
      0011A8 40                    4247 	.db #0x40	; 64
      0011A9 40                    4248 	.db #0x40	; 64
      0011AA 40                    4249 	.db #0x40	; 64
      0011AB 7F                    4250 	.db #0x7f	; 127
      0011AC 02                    4251 	.db #0x02	; 2
      0011AD 04                    4252 	.db #0x04	; 4
      0011AE 02                    4253 	.db #0x02	; 2
      0011AF 7F                    4254 	.db #0x7f	; 127
      0011B0 7F                    4255 	.db #0x7f	; 127
      0011B1 04                    4256 	.db #0x04	; 4
      0011B2 08                    4257 	.db #0x08	; 8
      0011B3 10                    4258 	.db #0x10	; 16
      0011B4 7F                    4259 	.db #0x7f	; 127
      0011B5 3E                    4260 	.db #0x3e	; 62
      0011B6 41                    4261 	.db #0x41	; 65	'A'
      0011B7 41                    4262 	.db #0x41	; 65	'A'
      0011B8 41                    4263 	.db #0x41	; 65	'A'
      0011B9 3E                    4264 	.db #0x3e	; 62
      0011BA 7F                    4265 	.db #0x7f	; 127
      0011BB 09                    4266 	.db #0x09	; 9
      0011BC 09                    4267 	.db #0x09	; 9
      0011BD 09                    4268 	.db #0x09	; 9
      0011BE 06                    4269 	.db #0x06	; 6
      0011BF 3E                    4270 	.db #0x3e	; 62
      0011C0 41                    4271 	.db #0x41	; 65	'A'
      0011C1 51                    4272 	.db #0x51	; 81	'Q'
      0011C2 21                    4273 	.db #0x21	; 33
      0011C3 5E                    4274 	.db #0x5e	; 94
      0011C4 7F                    4275 	.db #0x7f	; 127
      0011C5 09                    4276 	.db #0x09	; 9
      0011C6 19                    4277 	.db #0x19	; 25
      0011C7 29                    4278 	.db #0x29	; 41
      0011C8 46                    4279 	.db #0x46	; 70	'F'
      0011C9 46                    4280 	.db #0x46	; 70	'F'
      0011CA 49                    4281 	.db #0x49	; 73	'I'
      0011CB 49                    4282 	.db #0x49	; 73	'I'
      0011CC 49                    4283 	.db #0x49	; 73	'I'
      0011CD 31                    4284 	.db #0x31	; 49	'1'
      0011CE 01                    4285 	.db #0x01	; 1
      0011CF 01                    4286 	.db #0x01	; 1
      0011D0 7F                    4287 	.db #0x7f	; 127
      0011D1 01                    4288 	.db #0x01	; 1
      0011D2 01                    4289 	.db #0x01	; 1
      0011D3 3F                    4290 	.db #0x3f	; 63
      0011D4 40                    4291 	.db #0x40	; 64
      0011D5 40                    4292 	.db #0x40	; 64
      0011D6 40                    4293 	.db #0x40	; 64
      0011D7 3F                    4294 	.db #0x3f	; 63
      0011D8 1F                    4295 	.db #0x1f	; 31
      0011D9 20                    4296 	.db #0x20	; 32
      0011DA 40                    4297 	.db #0x40	; 64
      0011DB 20                    4298 	.db #0x20	; 32
      0011DC 1F                    4299 	.db #0x1f	; 31
      0011DD 7F                    4300 	.db #0x7f	; 127
      0011DE 20                    4301 	.db #0x20	; 32
      0011DF 18                    4302 	.db #0x18	; 24
      0011E0 20                    4303 	.db #0x20	; 32
      0011E1 7F                    4304 	.db #0x7f	; 127
      0011E2 63                    4305 	.db #0x63	; 99	'c'
      0011E3 14                    4306 	.db #0x14	; 20
      0011E4 08                    4307 	.db #0x08	; 8
      0011E5 14                    4308 	.db #0x14	; 20
      0011E6 63                    4309 	.db #0x63	; 99	'c'
      0011E7 03                    4310 	.db #0x03	; 3
      0011E8 04                    4311 	.db #0x04	; 4
      0011E9 78                    4312 	.db #0x78	; 120	'x'
      0011EA 04                    4313 	.db #0x04	; 4
      0011EB 03                    4314 	.db #0x03	; 3
      0011EC 61                    4315 	.db #0x61	; 97	'a'
      0011ED 51                    4316 	.db #0x51	; 81	'Q'
      0011EE 49                    4317 	.db #0x49	; 73	'I'
      0011EF 45                    4318 	.db #0x45	; 69	'E'
      0011F0 43                    4319 	.db #0x43	; 67	'C'
      0011F1 00                    4320 	.db #0x00	; 0
      0011F2 00                    4321 	.db #0x00	; 0
      0011F3 7F                    4322 	.db #0x7f	; 127
      0011F4 41                    4323 	.db #0x41	; 65	'A'
      0011F5 41                    4324 	.db #0x41	; 65	'A'
      0011F6 02                    4325 	.db #0x02	; 2
      0011F7 04                    4326 	.db #0x04	; 4
      0011F8 08                    4327 	.db #0x08	; 8
      0011F9 10                    4328 	.db #0x10	; 16
      0011FA 20                    4329 	.db #0x20	; 32
      0011FB 41                    4330 	.db #0x41	; 65	'A'
      0011FC 41                    4331 	.db #0x41	; 65	'A'
      0011FD 7F                    4332 	.db #0x7f	; 127
      0011FE 00                    4333 	.db #0x00	; 0
      0011FF 00                    4334 	.db #0x00	; 0
      001200 04                    4335 	.db #0x04	; 4
      001201 02                    4336 	.db #0x02	; 2
      001202 01                    4337 	.db #0x01	; 1
      001203 02                    4338 	.db #0x02	; 2
      001204 04                    4339 	.db #0x04	; 4
      001205 40                    4340 	.db #0x40	; 64
      001206 40                    4341 	.db #0x40	; 64
      001207 40                    4342 	.db #0x40	; 64
      001208 40                    4343 	.db #0x40	; 64
      001209 40                    4344 	.db #0x40	; 64
      00120A 00                    4345 	.db #0x00	; 0
      00120B 01                    4346 	.db #0x01	; 1
      00120C 02                    4347 	.db #0x02	; 2
      00120D 04                    4348 	.db #0x04	; 4
      00120E 00                    4349 	.db #0x00	; 0
      00120F 20                    4350 	.db #0x20	; 32
      001210 54                    4351 	.db #0x54	; 84	'T'
      001211 54                    4352 	.db #0x54	; 84	'T'
      001212 54                    4353 	.db #0x54	; 84	'T'
      001213 78                    4354 	.db #0x78	; 120	'x'
      001214 7F                    4355 	.db #0x7f	; 127
      001215 48                    4356 	.db #0x48	; 72	'H'
      001216 44                    4357 	.db #0x44	; 68	'D'
      001217 44                    4358 	.db #0x44	; 68	'D'
      001218 38                    4359 	.db #0x38	; 56	'8'
      001219 38                    4360 	.db #0x38	; 56	'8'
      00121A 44                    4361 	.db #0x44	; 68	'D'
      00121B 44                    4362 	.db #0x44	; 68	'D'
      00121C 44                    4363 	.db #0x44	; 68	'D'
      00121D 20                    4364 	.db #0x20	; 32
      00121E 38                    4365 	.db #0x38	; 56	'8'
      00121F 44                    4366 	.db #0x44	; 68	'D'
      001220 44                    4367 	.db #0x44	; 68	'D'
      001221 48                    4368 	.db #0x48	; 72	'H'
      001222 7F                    4369 	.db #0x7f	; 127
      001223 38                    4370 	.db #0x38	; 56	'8'
      001224 54                    4371 	.db #0x54	; 84	'T'
      001225 54                    4372 	.db #0x54	; 84	'T'
      001226 54                    4373 	.db #0x54	; 84	'T'
      001227 18                    4374 	.db #0x18	; 24
      001228 08                    4375 	.db #0x08	; 8
      001229 7E                    4376 	.db #0x7e	; 126
      00122A 09                    4377 	.db #0x09	; 9
      00122B 01                    4378 	.db #0x01	; 1
      00122C 02                    4379 	.db #0x02	; 2
      00122D 08                    4380 	.db #0x08	; 8
      00122E 14                    4381 	.db #0x14	; 20
      00122F 54                    4382 	.db #0x54	; 84	'T'
      001230 54                    4383 	.db #0x54	; 84	'T'
      001231 3C                    4384 	.db #0x3c	; 60
      001232 7F                    4385 	.db #0x7f	; 127
      001233 08                    4386 	.db #0x08	; 8
      001234 04                    4387 	.db #0x04	; 4
      001235 04                    4388 	.db #0x04	; 4
      001236 78                    4389 	.db #0x78	; 120	'x'
      001237 00                    4390 	.db #0x00	; 0
      001238 44                    4391 	.db #0x44	; 68	'D'
      001239 7D                    4392 	.db #0x7d	; 125
      00123A 40                    4393 	.db #0x40	; 64
      00123B 00                    4394 	.db #0x00	; 0
      00123C 20                    4395 	.db #0x20	; 32
      00123D 40                    4396 	.db #0x40	; 64
      00123E 44                    4397 	.db #0x44	; 68	'D'
      00123F 3D                    4398 	.db #0x3d	; 61
      001240 00                    4399 	.db #0x00	; 0
      001241 00                    4400 	.db #0x00	; 0
      001242 7F                    4401 	.db #0x7f	; 127
      001243 10                    4402 	.db #0x10	; 16
      001244 28                    4403 	.db #0x28	; 40
      001245 44                    4404 	.db #0x44	; 68	'D'
      001246 00                    4405 	.db #0x00	; 0
      001247 41                    4406 	.db #0x41	; 65	'A'
      001248 7F                    4407 	.db #0x7f	; 127
      001249 40                    4408 	.db #0x40	; 64
      00124A 00                    4409 	.db #0x00	; 0
      00124B 7C                    4410 	.db #0x7c	; 124
      00124C 04                    4411 	.db #0x04	; 4
      00124D 18                    4412 	.db #0x18	; 24
      00124E 04                    4413 	.db #0x04	; 4
      00124F 78                    4414 	.db #0x78	; 120	'x'
      001250 7C                    4415 	.db #0x7c	; 124
      001251 08                    4416 	.db #0x08	; 8
      001252 04                    4417 	.db #0x04	; 4
      001253 04                    4418 	.db #0x04	; 4
      001254 78                    4419 	.db #0x78	; 120	'x'
      001255 38                    4420 	.db #0x38	; 56	'8'
      001256 44                    4421 	.db #0x44	; 68	'D'
      001257 44                    4422 	.db #0x44	; 68	'D'
      001258 44                    4423 	.db #0x44	; 68	'D'
      001259 38                    4424 	.db #0x38	; 56	'8'
      00125A 7C                    4425 	.db #0x7c	; 124
      00125B 14                    4426 	.db #0x14	; 20
      00125C 14                    4427 	.db #0x14	; 20
      00125D 14                    4428 	.db #0x14	; 20
      00125E 08                    4429 	.db #0x08	; 8
      00125F 08                    4430 	.db #0x08	; 8
      001260 14                    4431 	.db #0x14	; 20
      001261 14                    4432 	.db #0x14	; 20
      001262 18                    4433 	.db #0x18	; 24
      001263 7C                    4434 	.db #0x7c	; 124
      001264 7C                    4435 	.db #0x7c	; 124
      001265 08                    4436 	.db #0x08	; 8
      001266 04                    4437 	.db #0x04	; 4
      001267 04                    4438 	.db #0x04	; 4
      001268 08                    4439 	.db #0x08	; 8
      001269 48                    4440 	.db #0x48	; 72	'H'
      00126A 54                    4441 	.db #0x54	; 84	'T'
      00126B 54                    4442 	.db #0x54	; 84	'T'
      00126C 54                    4443 	.db #0x54	; 84	'T'
      00126D 20                    4444 	.db #0x20	; 32
      00126E 04                    4445 	.db #0x04	; 4
      00126F 3F                    4446 	.db #0x3f	; 63
      001270 44                    4447 	.db #0x44	; 68	'D'
      001271 40                    4448 	.db #0x40	; 64
      001272 20                    4449 	.db #0x20	; 32
      001273 3C                    4450 	.db #0x3c	; 60
      001274 40                    4451 	.db #0x40	; 64
      001275 40                    4452 	.db #0x40	; 64
      001276 20                    4453 	.db #0x20	; 32
      001277 7C                    4454 	.db #0x7c	; 124
      001278 1C                    4455 	.db #0x1c	; 28
      001279 20                    4456 	.db #0x20	; 32
      00127A 40                    4457 	.db #0x40	; 64
      00127B 20                    4458 	.db #0x20	; 32
      00127C 1C                    4459 	.db #0x1c	; 28
      00127D 3C                    4460 	.db #0x3c	; 60
      00127E 40                    4461 	.db #0x40	; 64
      00127F 30                    4462 	.db #0x30	; 48	'0'
      001280 40                    4463 	.db #0x40	; 64
      001281 3C                    4464 	.db #0x3c	; 60
      001282 44                    4465 	.db #0x44	; 68	'D'
      001283 28                    4466 	.db #0x28	; 40
      001284 10                    4467 	.db #0x10	; 16
      001285 28                    4468 	.db #0x28	; 40
      001286 44                    4469 	.db #0x44	; 68	'D'
      001287 0C                    4470 	.db #0x0c	; 12
      001288 50                    4471 	.db #0x50	; 80	'P'
      001289 50                    4472 	.db #0x50	; 80	'P'
      00128A 50                    4473 	.db #0x50	; 80	'P'
      00128B 3C                    4474 	.db #0x3c	; 60
      00128C 44                    4475 	.db #0x44	; 68	'D'
      00128D 64                    4476 	.db #0x64	; 100	'd'
      00128E 54                    4477 	.db #0x54	; 84	'T'
      00128F 4C                    4478 	.db #0x4c	; 76	'L'
      001290 44                    4479 	.db #0x44	; 68	'D'
      001291 00                    4480 	.db #0x00	; 0
      001292 08                    4481 	.db #0x08	; 8
      001293 36                    4482 	.db #0x36	; 54	'6'
      001294 41                    4483 	.db #0x41	; 65	'A'
      001295 00                    4484 	.db #0x00	; 0
      001296 00                    4485 	.db #0x00	; 0
      001297 00                    4486 	.db #0x00	; 0
      001298 7F                    4487 	.db #0x7f	; 127
      001299 00                    4488 	.db #0x00	; 0
      00129A 00                    4489 	.db #0x00	; 0
      00129B 00                    4490 	.db #0x00	; 0
      00129C 41                    4491 	.db #0x41	; 65	'A'
      00129D 36                    4492 	.db #0x36	; 54	'6'
      00129E 08                    4493 	.db #0x08	; 8
      00129F 00                    4494 	.db #0x00	; 0
      0012A0 08                    4495 	.db #0x08	; 8
      0012A1 08                    4496 	.db #0x08	; 8
      0012A2 2A                    4497 	.db #0x2a	; 42
      0012A3 1C                    4498 	.db #0x1c	; 28
      0012A4 08                    4499 	.db #0x08	; 8
      0012A5 08                    4500 	.db #0x08	; 8
      0012A6 1C                    4501 	.db #0x1c	; 28
      0012A7 2A                    4502 	.db #0x2a	; 42
      0012A8 08                    4503 	.db #0x08	; 8
      0012A9 08                    4504 	.db #0x08	; 8
                           0001E0  4505 Fmain$__str_0$0$0 == .
      0012AA                       4506 ___str_0:
      0012AA 02                    4507 	.db 0x02
      0012AB 20 45 52 52 4F 3A 20  4508 	.ascii " ERRO: mem=%05d"
             6D 65 6D 3D 25 30 35
             64
      0012BA 00                    4509 	.db 0x00
                           0001F1  4510 Fmain$__str_1$0$0 == .
      0012BB                       4511 ___str_1:
      0012BB 02                    4512 	.db 0x02
      0012BC 20 69 20 3D 20 25 30  4513 	.ascii " i = %05d"
             35 64
      0012C5 00                    4514 	.db 0x00
                           0001FC  4515 Fmain$__str_2$0$0 == .
      0012C6                       4516 ___str_2:
      0012C6 01                    4517 	.db 0x01
      0012C7 20 53 74 61 72 74 20  4518 	.ascii " Start Timer.."
             54 69 6D 65 72 2E 2E
      0012D5 00                    4519 	.db 0x00
                           00020C  4520 Fmain$__str_3$0$0 == .
      0012D6                       4521 ___str_3:
      0012D6 02                    4522 	.db 0x02
      0012D7 20 25 30 32 64 3A 25  4523 	.ascii " %02d:%02d"
             30 32 64
      0012E1 00                    4524 	.db 0x00
                           000218  4525 Fmain$__str_4$0$0 == .
      0012E2                       4526 ___str_4:
      0012E2 03                    4527 	.db 0x03
      0012E3 20 50 72 6F 6E 74 6F  4528 	.ascii " Pronto"
      0012EA 00                    4529 	.db 0x00
                           000221  4530 Fmain$__str_5$0$0 == .
      0012EB                       4531 ___str_5:
      0012EB 02                    4532 	.db 0x02
      0012EC 20 54 3A 20 25 64 20  4533 	.ascii " T: %d %d %d %d"
             25 64 20 25 64 20 25
             64
      0012FB 00                    4534 	.db 0x00
                           000232  4535 Fmain$__str_6$0$0 == .
      0012FC                       4536 ___str_6:
      0012FC 54 65 6D 70 6F 20 25  4537 	.ascii "Tempo %d:"
             64 3A
      001305 00                    4538 	.db 0x00
                           00023C  4539 Fmain$__str_7$0$0 == .
      001306                       4540 ___str_7:
      001306 01                    4541 	.db 0x01
      001307 20 53 65 6C 65 63 69  4542 	.ascii " Selecione o"
             6F 6E 65 20 6F
      001313 00                    4543 	.db 0x00
                           00024A  4544 Fmain$__str_8$0$0 == .
      001314                       4545 ___str_8:
      001314 02                    4546 	.db 0x02
      001315 20 74 69 70 6F 20 65  4547 	.ascii " tipo entrada:"
             6E 74 72 61 64 61 3A
      001323 00                    4548 	.db 0x00
                           00025A  4549 Fmain$__str_9$0$0 == .
      001324                       4550 ___str_9:
      001324 04                    4551 	.db 0x04
      001325 20 61 20 2D 20 4D 61  4552 	.ascii " a - Manual"
             6E 75 61 6C
      001330 00                    4553 	.db 0x00
                           000267  4554 Fmain$__str_10$0$0 == .
      001331                       4555 ___str_10:
      001331 05                    4556 	.db 0x05
      001332 20 62 20 2D 20 44 69  4557 	.ascii " b - Digital"
             67 69 74 61 6C
      00133E 00                    4558 	.db 0x00
                           000275  4559 Fmain$__str_11$0$0 == .
      00133F                       4560 ___str_11:
      00133F 06                    4561 	.db 0x06
      001340 20 54 75 64 6F 20 70  4562 	.ascii " Tudo pronto!!"
             72 6F 6E 74 6F 21 21
      00134E 00                    4563 	.db 0x00
                           000285  4564 Fmain$__str_12$0$0 == .
      00134F                       4565 ___str_12:
      00134F 01                    4566 	.db 0x01
      001350 20 25 64              4567 	.ascii " %d"
      001353 00                    4568 	.db 0x00
                           00028A  4569 Fmain$__str_13$0$0 == .
      001354                       4570 ___str_13:
      001354 03                    4571 	.db 0x03
      001355 20 25 64              4572 	.ascii " %d"
      001358 00                    4573 	.db 0x00
                           00028F  4574 Fmain$__str_14$0$0 == .
      001359                       4575 ___str_14:
      001359 07                    4576 	.db 0x07
      00135A 20 46 49 4D           4577 	.ascii " FIM"
      00135E 00                    4578 	.db 0x00
                           000295  4579 Fmain$__str_15$0$0 == .
      00135F                       4580 ___str_15:
      00135F 07                    4581 	.db 0x07
      001360 20 54 45 43 53 20 4F  4582 	.ascii " TECS OPEN"
             50 45 4E
      00136A 00                    4583 	.db 0x00
                                   4584 	.area XINIT   (CODE)
                                   4585 	.area CABS    (ABS,CODE)
