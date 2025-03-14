#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] = { // Array elements are arrays themselves, 3 rows 2 columns, row-major order
            {1, 2}, 
            {3, 4},
            {5, 6}
        };

    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("%d\n", nums[i][j]); // Goes through nums[0][0], nums[0][1], nums[1][0], nums[1][1],...
        }
    }

    return 0;
}