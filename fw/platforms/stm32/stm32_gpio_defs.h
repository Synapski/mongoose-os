/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CS_FW_PLATFORMS_STM32_STM32_GPIO_DEFS_H_
#define CS_FW_PLATFORMS_STM32_STM32_GPIO_DEFS_H_

#include <stdint.h>

#include "stm32_sdk_hal.h"

#ifdef __cplusplus
extern "C" {
#endif

struct stm32_gpio_def {
  int index;
  GPIO_TypeDef *port;
  uint16_t gpio;
  const char *name;
  int inited;
  GPIO_InitTypeDef init_info;
  IRQn_Type exti;
  int intr_enabled;
};

#define STM32_GPIO_NUM 176

#define STM32_PIN_NUM 16

#define STM32_PIN_PA0 0
#define STM32_PIN_PA1 1
#define STM32_PIN_PA2 2
#define STM32_PIN_PA3 3
#define STM32_PIN_PA4 4
#define STM32_PIN_PA5 5
#define STM32_PIN_PA6 6
#define STM32_PIN_PA7 7
#define STM32_PIN_PA8 8
#define STM32_PIN_PA9 9
#define STM32_PIN_PA10 10
#define STM32_PIN_PA11 11
#define STM32_PIN_PA12 12
#define STM32_PIN_PA13 13
#define STM32_PIN_PA14 14
#define STM32_PIN_PA15 15
#define STM32_PIN_PB0 16
#define STM32_PIN_PB1 17
#define STM32_PIN_PB2 18
#define STM32_PIN_PB3 19
#define STM32_PIN_PB4 20
#define STM32_PIN_PB5 21
#define STM32_PIN_PB6 22
#define STM32_PIN_PB7 23
#define STM32_PIN_PB8 24
#define STM32_PIN_PB9 25
#define STM32_PIN_PB10 26
#define STM32_PIN_PB11 27
#define STM32_PIN_PB12 28
#define STM32_PIN_PB13 29
#define STM32_PIN_PB14 30
#define STM32_PIN_PB15 31
#define STM32_PIN_PC0 32
#define STM32_PIN_PC1 33
#define STM32_PIN_PC2 34
#define STM32_PIN_PC3 35
#define STM32_PIN_PC4 36
#define STM32_PIN_PC5 37
#define STM32_PIN_PC6 38
#define STM32_PIN_PC7 39
#define STM32_PIN_PC8 40
#define STM32_PIN_PC9 41
#define STM32_PIN_PC10 42
#define STM32_PIN_PC11 43
#define STM32_PIN_PC12 44
#define STM32_PIN_PC13 45
#define STM32_PIN_PC14 46
#define STM32_PIN_PC15 47
#define STM32_PIN_PD0 48
#define STM32_PIN_PD1 49
#define STM32_PIN_PD2 50
#define STM32_PIN_PD3 51
#define STM32_PIN_PD4 52
#define STM32_PIN_PD5 53
#define STM32_PIN_PD6 54
#define STM32_PIN_PD7 55
#define STM32_PIN_PD8 56
#define STM32_PIN_PD9 57
#define STM32_PIN_PD10 58
#define STM32_PIN_PD11 59
#define STM32_PIN_PD12 60
#define STM32_PIN_PD13 61
#define STM32_PIN_PD14 62
#define STM32_PIN_PD15 63
#define STM32_PIN_PE0 64
#define STM32_PIN_PE1 65
#define STM32_PIN_PE2 66
#define STM32_PIN_PE3 67
#define STM32_PIN_PE4 68
#define STM32_PIN_PE5 69
#define STM32_PIN_PE6 70
#define STM32_PIN_PE7 71
#define STM32_PIN_PE8 72
#define STM32_PIN_PE9 73
#define STM32_PIN_PE10 74
#define STM32_PIN_PE11 75
#define STM32_PIN_PE12 76
#define STM32_PIN_PE13 77
#define STM32_PIN_PE14 78
#define STM32_PIN_PE15 79
#define STM32_PIN_PF0 80
#define STM32_PIN_PF1 81
#define STM32_PIN_PF2 82
#define STM32_PIN_PF3 83
#define STM32_PIN_PF4 84
#define STM32_PIN_PF5 85
#define STM32_PIN_PF6 86
#define STM32_PIN_PF7 87
#define STM32_PIN_PF8 88
#define STM32_PIN_PF9 89
#define STM32_PIN_PF10 90
#define STM32_PIN_PF11 91
#define STM32_PIN_PF12 92
#define STM32_PIN_PF13 93
#define STM32_PIN_PF14 94
#define STM32_PIN_PF15 95
#define STM32_PIN_PG0 96
#define STM32_PIN_PG1 97
#define STM32_PIN_PG2 98
#define STM32_PIN_PG3 99
#define STM32_PIN_PG4 100
#define STM32_PIN_PG5 101
#define STM32_PIN_PG6 102
#define STM32_PIN_PG7 103
#define STM32_PIN_PG8 104
#define STM32_PIN_PG9 105
#define STM32_PIN_PG10 106
#define STM32_PIN_PG11 107
#define STM32_PIN_PG12 108
#define STM32_PIN_PG13 109
#define STM32_PIN_PG14 110
#define STM32_PIN_PG15 111
#define STM32_PIN_PH0 112
#define STM32_PIN_PH1 113
#define STM32_PIN_PH2 114
#define STM32_PIN_PH3 115
#define STM32_PIN_PH4 116
#define STM32_PIN_PH5 117
#define STM32_PIN_PH6 118
#define STM32_PIN_PH7 119
#define STM32_PIN_PH8 120
#define STM32_PIN_PH9 121
#define STM32_PIN_PH10 122
#define STM32_PIN_PH11 123
#define STM32_PIN_PH12 124
#define STM32_PIN_PH13 125
#define STM32_PIN_PH14 126
#define STM32_PIN_PH15 127
#define STM32_PIN_PI0 128
#define STM32_PIN_PI1 129
#define STM32_PIN_PI2 130
#define STM32_PIN_PI3 131
#define STM32_PIN_PI4 132
#define STM32_PIN_PI5 133
#define STM32_PIN_PI6 134
#define STM32_PIN_PI7 135
#define STM32_PIN_PI8 136
#define STM32_PIN_PI9 137
#define STM32_PIN_PI10 138
#define STM32_PIN_PI11 139
#define STM32_PIN_PI12 140
#define STM32_PIN_PI13 141
#define STM32_PIN_PI14 142
#define STM32_PIN_PI15 143
#define STM32_PIN_PJ0 144
#define STM32_PIN_PJ1 145
#define STM32_PIN_PJ2 146
#define STM32_PIN_PJ3 147
#define STM32_PIN_PJ4 148
#define STM32_PIN_PJ5 149
#define STM32_PIN_PJ6 150
#define STM32_PIN_PJ7 151
#define STM32_PIN_PJ8 152
#define STM32_PIN_PJ9 153
#define STM32_PIN_PJ10 154
#define STM32_PIN_PJ11 155
#define STM32_PIN_PJ12 156
#define STM32_PIN_PJ13 157
#define STM32_PIN_PJ14 158
#define STM32_PIN_PJ15 159
#define STM32_PIN_PK0 160
#define STM32_PIN_PK1 161
#define STM32_PIN_PK2 162
#define STM32_PIN_PK3 163
#define STM32_PIN_PK4 164
#define STM32_PIN_PK5 165
#define STM32_PIN_PK6 166
#define STM32_PIN_PK7 167
#define STM32_PIN_PK8 168
#define STM32_PIN_PK9 169
#define STM32_PIN_PK10 170
#define STM32_PIN_PK11 171
#define STM32_PIN_PK12 172
#define STM32_PIN_PK13 173
#define STM32_PIN_PK14 174
#define STM32_PIN_PK15 175

extern struct stm32_gpio_def stm32_gpio_defs[STM32_GPIO_NUM];

extern uint16_t stm32_pins[STM32_PIN_NUM];

#ifdef __cplusplus
}
#endif

#endif /* CS_FW_PLATFORMS_STM32_STM32_GPIO_DEFS_H_ */
