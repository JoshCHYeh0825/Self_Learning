#include <stdio.h>
#include <stdlib.h>

int main(){

    int secretNum = 5l;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outofGuesses = 0;

    while( guess != secretNum && outofGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else{
            outofGuesses = 1;
        }
    }
    if(outofGuesses == 1){
        printf("Out of guesses");
    } else {
        printf("You have successfully broke out of the loop");
    }
    return 0;
}