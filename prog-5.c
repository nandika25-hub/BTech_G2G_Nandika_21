/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, temp;

    // Accept values from user
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping process
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    return 0;
}
