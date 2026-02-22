/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity of triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides form a valid triangle.\n");

        // Check type of triangle
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle.");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles Triangle.");
        }
        else {
            printf("It is a Scalene Triangle.");
        }
    }
    else {
        printf("The sides do NOT form a valid triangle.");
    }

    return 0;
}