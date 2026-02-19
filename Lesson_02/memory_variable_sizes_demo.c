// memory_variable_sizes_demo.c
// This program demonstrates the sizes of different variable types in C.
// It declares an integer, a float, and a character variable, and then prints their values and sizes in bytes.
#include <stdio.h>

int main(void)
{
    int age = 25;
    float salary = 1000.50f;
    char grade = 'A';

    printf("Values:\n");
    printf("age = %d\n", age);
    printf("salary = %f\n", salary);
    printf("grade = %c\n\n", grade);

    printf("Sizes (in bytes):\n");
    printf("sizeof(age) = %zu\n", sizeof(age));
    printf("sizeof(salary) = %zu\n", sizeof(salary));
    printf("sizeof(grade) = %zu\n", sizeof(grade));

    return 0;
}
