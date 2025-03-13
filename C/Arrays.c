#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {2, 4, 8, 16, 32, 64}; // Use curly brace to initialize the array, index starts at 0
    luckyNumbers[1] = 90;
    printf("%d\n", luckyNumbers[1]);
    
    int emptyArray[10]; // An empty array that could hold 10 ints
    emptyArray[1] = 80;
    printf("%d\n", emptyArray[1]);

    return 0;
}