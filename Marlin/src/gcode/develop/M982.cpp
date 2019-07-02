#include "../gcode.h"
#include "../../module/temperature.h"

void GcodeSuite::M982() {
  if (parser.seen('T')) {
    if (parser.value_int()) {
      thermalManager.bed_fake_temperature_enabled = 1;
      thermalManager.bed_fake_temperature_value = parser.value_int();
    } else if (!parser.value_int()) {
      thermalManager.bed_fake_temperature_enabled = 0;
      thermalManager.bed_fake_temperature_value = 0.0;
    }
  }
}