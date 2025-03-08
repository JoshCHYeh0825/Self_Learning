#include <stdio.h>
#include <stdlib.h>

int main()
{
    int faveNum = 17;
    char myChar = 'C';
    printf("Hello\" World\n");
    printf("%d\n", 500); // % = Format Specifier, %d = number, %s = char[] (string), %f = floating point
    printf("My favorite %c is %d", myChar, faveNum); // Order of variables matters

    return 0;
}