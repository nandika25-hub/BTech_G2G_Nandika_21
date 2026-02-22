/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() 
{
    int sub1, sub2, sub3, sub4, sub5,sum, percentage;
    printf("Enter marks of five subjects");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / 500) * 100;
    printf("Sum of marks = %.2d\n", sum);
    printf("Percentage = %.2d%", percentage);
    return 0;
}

