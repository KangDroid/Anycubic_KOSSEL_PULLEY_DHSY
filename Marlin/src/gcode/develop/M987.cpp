#include "../gcode.h"
#include "../../module/temperature.h"
#if ENABLED(ENABLE_ADJUSTABLE_HEATER_MAX_TEMP)
void GcodeSuite::M987() {
  if (parser.seen('S')) {
    if (parser.value_int()) {
      thermalManager.maxtemp_config = parser.value_int();
    } else if (!parser.value_int()) {
      thermalManager.maxtemp_config = 275;
    }
  }
}
#endif