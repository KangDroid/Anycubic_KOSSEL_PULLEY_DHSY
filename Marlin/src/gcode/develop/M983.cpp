#include "../gcode.h"
#include "../../module/motion.h"

#if ENABLED(HOMING_FEEDRATE_ADJUSTABLE)
void GcodeSuite::M983() {
  if (parser.seen('X')) {
      x_homing_feedrate = parser.value_float();
  } else if (parser.seen('Y')) {
      y_homing_feedrate = parser.value_float();
  } else if (parser.seen('Z')) {
      z_homing_feedrate = parser.value_float();
  }
}
#endif