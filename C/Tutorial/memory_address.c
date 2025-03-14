#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 25;
    double gpa = 3.70;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade); /* %p specifier to the physical memory address
                            printf would print a hexadecimal number which
                            identifies as the address */
    
    return 0;
}