#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 25;
    int *pAge = &age;

    printf("%d\n", *pAge); /* Using an asterisk in front of a pointer dereferences the pointer
                                and will store the actual variable instead */

    printf("%d\n", *&age); /* same as above, dereferencing the pointer
                            can use as many asterisks and ampercents as possible */
    return 0;
}