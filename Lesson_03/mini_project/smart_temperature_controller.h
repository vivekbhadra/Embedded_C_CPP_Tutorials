#ifndef SMART_TEMPERATURE_CONTROLLER_H
#define SMART_TEMPERATURE_CONTROLLER_H

/* Fan Speed Macros */
#define FAN_OFF 0
#define FAN_LOW 1
#define FAN_MEDIUM 2
#define FAN_HIGH 3

/* Function Prototypes */
int readTemperature();
int decideFanSpeed(int temperature);
void displayStatus(int temperature, int fanSpeed);
void showMenu();

#endif