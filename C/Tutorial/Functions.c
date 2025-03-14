#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Josh");

    return 0;
}

void sayHi(char name[]) // Takes string as parameter called name
{
    printf("Hello %s\n", name);
}