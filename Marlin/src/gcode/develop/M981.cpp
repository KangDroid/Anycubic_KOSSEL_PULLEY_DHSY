#include "../gcode.h"
#include "../../module/temperature.h"

void GcodeSuite::M981() {
  if (parser.seen('E')) {
    if (parser.value_int() != 0) {
      thermalManager.kangdroid_test_enabled = 1;
      thermalManager.kangdroid_test_value = parser.value_int();
    } else if (parser.value_int() == 0) {
      thermalManager.kangdroid_test_enabled = 0;
      thermalManager.kangdroid_test_value = 0.0;
    }
  }
}