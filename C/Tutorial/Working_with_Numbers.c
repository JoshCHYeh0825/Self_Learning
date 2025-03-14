#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%f\n", 5.0 * 4.5); // Can insert float or even mathematical equations in place i.e 5.0 * 4.5
    printf("%d\n", 5 / 4); // Do float on int specifiers will return 0, int expressions will only return the first int and ignore the modulo/decimals
    printf("%f\n", pow(2, 3)); // Gives us the floating point operation of 2^3, %d will return 0
    printf("%f\n", sqrt(64)); // Returns square root of number
    printf("%f\n", ceil(40.578)); // Returns closest whole number rounded up
    printf("%f\n", floor(40.578)); // Returns closest whole number rounded down

}