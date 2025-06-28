#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LF = motor(PORT16, ratio6_1, true);
motor LM = motor(PORT3, ratio6_1, false);
motor RF = motor(PORT19, ratio6_1, false);
motor RM = motor(PORT1, ratio6_1, false);
motor LB = motor(PORT18, ratio6_1, true);
motor RB = motor(PORT2, ratio6_1, true);
motor Intake = motor(PORT9, ratio6_1, false);
motor SecondStage = motor(PORT10, ratio18_1, false);
motor Roller = motor(PORT20, ratio18_1, false);
digital_out Pistake = digital_out(Brain.ThreeWirePort.D);
digital_out Tilt = digital_out(Brain.ThreeWirePort.B);
digital_out Clamp = digital_out(Brain.ThreeWirePort.A);
inertial Gyro = inertial(PORT11);
//Naming convention: 
// Important variables
const double wheelDiam = 2.75;
const double wheelToMotorRatio = 48.0/36;

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}