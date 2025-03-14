#include <stdio.h>
#include <stdlib.h>

/* Pointers: A data type that stores memory address */

int main()
{
    int age = 25;
    double gpa = 3.70;
    char grade = 'A';

    printf("age's memory address: %p\n", &age); // &age is a pointer which is the memory address of the age variable

    int * pAge = &age; // * declares a pointer variable storing the memory address through &age (Naming: p for pointer)
    double * pGpa = &gpa;
    char * pGrade = &grade; 

    return 0;
}