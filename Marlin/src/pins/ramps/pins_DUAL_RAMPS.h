/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * 
 * put this in your configuration.h 
 * 
 * #define MOTHERBOARD BOARD_DUAL_RAMPS_14_EFB
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "RAMPS_14_DUAL"
#endif

#include "pins_RAMPS.h"




// secondary ramps' x
#define E2_STEP_PIN        64
#define E2_DIR_PIN         59
#define E2_ENABLE_PIN      44

// secondary ramps' y
#define E3_STEP_PIN        40
#define E3_DIR_PIN         63
#define E3_ENABLE_PIN      42

// secondary ramps' z
#define E4_STEP_PIN        57
#define E4_DIR_PIN         66
#define E4_ENABLE_PIN      58


#ifdef FAN_PIN
#undef FAN_PIN
#endif

#ifdef HEATER_0_PIN
#undef HEATER_0_PIN
#endif

#ifdef HEATER_BED_PIN
#undef HEATER_BED_PIN
#endif

#define FAN_PIN          RAMPS_D9_PIN //수정 5
#define HEATER_0_PIN     RAMPS_D10_PIN
#define HEATER_BED_PIN   RAMPS_D8_PIN

