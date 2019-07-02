#include "../gcode.h"
#include "../../module/temperature.h"

void GcodeSuite::M981() {
  if (parser.seen('S')) {
    if (parser.value_int()) {
      thermalManager.hotend_fake_temperature_enabled = 1;
      thermalManager.hotend_fake_temperature_value = parser.value_int();
    } else if (!parser.value_int()) {
      thermalManager.hotend_fake_temperature_enabled = 0;
      thermalManager.hotend_fake_temperature_value = 0.0;
    }
  }
}