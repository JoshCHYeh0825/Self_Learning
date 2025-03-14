#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 25;
    double gpa = 3.70;
    char grade = 'A';

    printf("%p\n", &age); //%p specifier for pointer which points to the memory address
    
    return 0;
}