/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Taking input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Using if-else to perform calculation
    if (operator == '+') {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result = %.2f\n", result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}