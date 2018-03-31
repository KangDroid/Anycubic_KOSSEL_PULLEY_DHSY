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

#include "../gcode.h"
#include "../../module/temperature.h"
#include "../../module/motion.h"
#include "../../module/planner.h"
#include "../../lcd/ultralcd.h"
#include "../../Marlin.h"

#if ENABLED(PRINTJOB_TIMER_AUTOSTART)
  #include "../../module/printcounter.h"
#endif

#if ENABLED(PRINTER_EVENT_LEDS)
  #include "../../feature/leds/leds.h"
#endif

/**
 * M104: Set hot end temperature
 */
void GcodeSuite::G99() {
	thermalManager.setTargetHotend(200, 0);
  if (get_target_extruder_from_command()) return;
  if (DEBUGGING(DRYRUN)) return;

    #if ENABLED(ULTRA_LCD)
      if (parser.value_celsius() > thermalManager.degHotend(1))
        lcd_status_printf_P(0, PSTR("E%i %s"), 0 + 1, MSG_HEATING);
    #endif
	  
	  lcd_setstatus(MSG_TESTING);

  //#if ENABLED(AUTOTEMP)
    //planner.autotemp_M104_M109();
  //#endif
}