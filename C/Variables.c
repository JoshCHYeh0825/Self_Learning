#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charName[] = "John";
    int charAge = 35;
    printf("There once was a man named %s\n", charName);
    printf("he was %d years old.\n", charAge);

    charAge = 30;
    printf("He really liked the name %s\n", charName);
    printf("but did not like being %d.\n", charAge);

    return 0;
}