/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking the number
    if (num > 0) {
        printf("The number is Positive.\n");
    }
    else if (num < 0) {
        printf("The number is Negative.\n");
    }
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}