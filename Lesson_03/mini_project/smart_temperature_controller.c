#include <stdio.h>
#include "smart_temperature_controller.h"

// Function to display the menu options to the user
// This function prints the available options for the 
// user to interact with the smart temperature controller.
void showMenu()
{
    // Display the menu options for the smart temperature controller
    // The menu includes options to enter temperature, 
    // show current fan status, and exit the program.
    printf("\n--- Smart Temperature Controller ---\n");
    printf("1. Enter Temperature\n");
    printf("2. Show Current Fan Status\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}

// Function to read the temperature input from the user
// This function prompts the user to enter a temperature value,
// reads the input, and returns it as an integer.
int readTemperature()
{
    int temp = 0;   // Variable to store the temperature input by the user
    printf("Enter temperature: ");  // Prompt the user to enter the temperature
    scanf("%d", &temp);  // Read the temperature input from the user and store 
                         // it in the variable 'temp'
    return temp;
}

// Function to decide the fan speed based on the input temperature
// This function takes the temperature as input and determines the appropriate 
// fan speed based on predefined thresholds. It returns the corresponding fan speed constant.
int decideFanSpeed(int temperature)
{
    // Determine the fan speed based on the input temperature using predefined thresholds
    if (temperature < 30)  // If the temperature is less than 30 degrees Celsius, the fan is turned off
    {
        return FAN_OFF;
    }
    else if (temperature < 50) // If the temperature is between 30 and 49 degrees Celsius, the fan is set to low speed
    {
        return FAN_LOW;
    }
    else if (temperature < 70) // If the temperature is between 50 and 69 degrees Celsius, the fan is set to medium speed
    {
        return FAN_MEDIUM;
    }
    else
    {
        return FAN_HIGH;  // If the temperature is 70 degrees Celsius or higher, the fan is set to high speed
    }
}

// Function to display the current temperature and fan status
// This function takes the current temperature and fan speed as input 
// and displays them in a formatted manner. It also includes a warning 
// message if the temperature is at a critical level.
void displayStatus(int temperature, int fanSpeed)
{
    // Display the current temperature and fan status in a formatted manner
    printf("\n========================================\n");
    printf("        SMART FAN CONTROLLER STATUS      \n");
    printf("========================================\n");

    printf("Current Temperature : %d °C\n", temperature);

    printf("Fan Speed           : ");

    // Display the fan speed status based on the fanSpeed variable
    if (fanSpeed == FAN_OFF)
        printf("OFF\n");
    else if (fanSpeed == FAN_LOW)
        printf("LOW\n");
    else if (fanSpeed == FAN_MEDIUM)
        printf("MEDIUM\n");
    else if (fanSpeed == FAN_HIGH)
        printf("HIGH\n");

    if (temperature >= 90)
    {
        printf("\nWARNING: CRITICAL TEMPERATURE LEVEL!\n");
    }

    printf("========================================\n\n");
}