/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Taking input
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculating total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Percentage = %.2f%%\n", percentage);

    // Printing grade
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60 && percentage < 80) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: D\n");
    }

    return 0;
}