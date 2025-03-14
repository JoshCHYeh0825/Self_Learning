#include <stdio.h>
#include <stdlib.h>

int main(){

    int index = 6;
    do {
        printf("%d\n", index); // Still prints 6 because conditional check only occurs after executing what's inside the loop
        index++;
    } while (index <= 5); 



    return 0;
}