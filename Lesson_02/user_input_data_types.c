// user_input_data_types.c
// This program demonstrates how to read different data types from user input in C.
// It declares variables of various types (int, float, char, double, short, long), prompts the user to enter 
// values for each type, and then prints the entered values along with their sizes in bytes.
// Note: The user must enter valid input for each data type when prompted. For example, entering a non-numeric
// value when an integer is expected will cause the program to behave unexpectedly.
// Compile and run this program in a C environment to see how it works.
#include <stdio.h>

int main(void)
{
    int age;
    float salary;
    char grade;
    short years;
    long population;

    printf("Enter an integer (age), for example 25: ");
    scanf("%d", &age);  // age is represented by integer

    printf("Enter a float (salary), for example 1000.50: ");
    scanf("%f", &salary); // salary is represented by float

    printf("Enter a character (grade), for example A: ");
    scanf(" %c", &grade);   // grade is represented by char

    printf("Enter a short integer (years), for example 5: ");
    scanf("%hd", &years);   // years is represented by short

    printf("Enter a long integer (population), for example 1000000: ");
    scanf("%ld", &population); // population is represented by long

    printf("\nYou entered:\n");
    printf("age = %d\n", age);
    printf("salary = %f\n", salary);
    printf("grade = %c\n", grade);
    printf("years = %hd\n", years);
    printf("population = %ld\n", population);

    printf("\nSizes (in bytes):\n");
    printf("sizeof(age) = %zu\n", sizeof(age));
    printf("sizeof(salary) = %zu\n", sizeof(salary));
    printf("sizeof(grade) = %zu\n", sizeof(grade));
    printf("sizeof(years) = %zu\n", sizeof(years));
    printf("sizeof(population) = %zu\n", sizeof(population));

    return 0;
}
