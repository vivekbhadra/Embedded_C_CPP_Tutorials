// This is the main file for the smart temperature controller mini project.
// It includes the main function that runs the program, allowing the user to 
// input temperature values and see the corresponding fan speed based on predefined 
// thresholds. The program continues to run until the user decides to exit.
#include <stdio.h>
#include "smart_temperature_controller.h" // Include the header file for the smart 
                                          // temperature controller functions and macros

// Main function to run the smart temperature controller program
int main()
{
    int choice;  // Variable to store the user's menu choice
    int temperature = 0;  // Variable to store the current temperature input by the user
    int fanSpeed = FAN_OFF;  // Variable to store the current fan speed, initialized to FAN_OFF

    while (1) // Infinite loop to keep the program running until the user decides to exit
    {
        showMenu();  // Display the menu options to the user
        scanf("%d", &choice);  // Read the user's choice from the input

        if (choice == 1)
        {
            // Read temperature and decide fan speed
            // This is where the user inputs the temperature, 
            // and the system decides the appropriate fan speed based on the input.
            temperature = readTemperature();
            // The decideFanSpeed function takes the input temperature and determines 
            // the fan speed based on predefined thresholds.
            fanSpeed = decideFanSpeed(temperature); 
        }
        else if (choice == 2)
        {
            // Display current temperature and fan status
            // This option allows the user to see the current temperature 
            // and the corresponding fan speed.
            displayStatus(temperature, fanSpeed);
        }
        else if (choice == 3)
        {
            // Exit the system
            printf("Exiting system...\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n"); // If the user enters an invalid choice, 
                                                    // prompt them to try again.
        }
    }

    return 0; // Return 0 to indicate that the program ended successfully
}