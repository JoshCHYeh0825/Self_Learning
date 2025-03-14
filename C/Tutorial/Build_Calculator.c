#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    printf("Enter first number: \n");
    scanf ("%lf", &num1); // "&" Accesses the address of the variable, used for scanf and other user scan functions
    printf("Enter second number: \n");
    scanf ("%lf", &num2);

    printf("Answer: %f", num1 + num2); // printf just uses %f in contrast to the %lf of scan functions

    return 0;
}