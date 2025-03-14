#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 5; /* 
                        const keyword could be placed before or after the data type declaration
                        const variables are not modifiable
                        good general practice is to capitalize a const variable
                        */
    printf("%d\n", num);

    return 0;
}