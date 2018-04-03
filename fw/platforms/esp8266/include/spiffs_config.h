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

#ifndef CS_FW_PLATFORMS_ESP8266_INCLUDE_SPIFFS_CONFIG_H_
#define CS_FW_PLATFORMS_ESP8266_INCLUDE_SPIFFS_CONFIG_H_

#ifndef SPIFFS_TOOLS_BUILD
#define CS_SPIFFS_ENABLE_METADATA 1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

typedef int32_t s32_t;
typedef uint32_t u32_t;
typedef int16_t s16_t;
typedef uint16_t u16_t;
typedef int8_t s8_t;
typedef uint8_t u8_t;

#include "spiffs_config_common.h"

/* no_extern_c_check */

#endif /* CS_FW_PLATFORMS_ESP8266_INCLUDE_SPIFFS_CONFIG_H_ */
