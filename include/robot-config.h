using namespace vex;

extern brain Brain;

// VEXcode devices
extern triport Expander1;
extern pwm_out Motor393A;
extern pwm_out Motor393B;
extern pwm_out Motor393C;
extern pwm_out Motor393D;
extern pwm_out Motor393E;
extern pwm_out Motor393F;
extern pwm_out Motor393G;

extern digital_out Relay12V;

extern digital_out led_dout0;
extern digital_out led_dout1;
extern digital_out led_dout2;

extern controller Controller1;
extern controller Controller2;


/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit(void);