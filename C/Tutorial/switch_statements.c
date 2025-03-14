#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade ='A';
    switch(grade){ /* Compare different characters with "grade"
                    and output pending on different cases */
    case 'A':
        printf("You are perfect");
        break; // breaks out of this case
    case 'B':
        printf("You did alright");
        break;
    case 'C':
        printf("You did the minimum");
        break;
    case 'D':
        printf("You did not pass");
        break;
    case 'F':
        printf("You are now a failure");
        break;
    default: // Default case if none of the cases match the parameter being check
        printf("Invalid Letter Grade");
    }

    return 0;
}