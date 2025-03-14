#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*
    int i = 1;
    while (i <= 5){
        printf("%d\n", i);
        i++;
    } */

    int i;
    for(i = 1; i <= 5; i++){
        printf("%d\n", i);
    } // Does the same as the while loop above

    int luckyNumbers[] = {4, 8, 16, 32, 64, 128};

    int x;
    for(x = 0; x < 6; x++){
        printf("%d\n", luckyNumbers[x]);
    }
    return 0;
}