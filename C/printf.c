#include <stdio.h>
#include <stdlib.h>

int main()
{
    int faveNum = 17;
    char myChar[] = "number";
    printf("Hello\" World\n");
    printf("%d\n", 500); // % = Format Specifier, %d = number, %s = char[] ("string"), %f = floating point, %c = char ('char')
    printf("My favorite %s is %d", myChar, faveNum); // Order of variables matters

    return 0;
}