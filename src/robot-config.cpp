#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
triport Expander1 = triport(PORT1);
pwm_out Motor393A = pwm_out(Expander1.A);
pwm_out Motor393B = pwm_out(Expander1.B);
pwm_out Motor393C = pwm_out(Expander1.C);
pwm_out Motor393D = pwm_out(Expander1.D);
pwm_out Motor393E = pwm_out(Expander1.E);
pwm_out Motor393F = pwm_out(Expander1.F);
pwm_out Motor393G = pwm_out(Expander1.G);

digital_out Relay12V = digital_out(Brain.ThreeWirePort.A);

digital_out led_dout0 = digital_out(Brain.ThreeWirePort.B);
digital_out led_dout1 = digital_out(Brain.ThreeWirePort.C);
digital_out led_dout2 = digital_out(Brain.ThreeWirePort.D);

controller Controller1 = controller(primary);
controller Controller2 = controller(partner);
// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // nothing to initialize
}