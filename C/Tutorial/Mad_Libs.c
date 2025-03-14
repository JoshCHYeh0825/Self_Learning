#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL); /* scanf only gets the first string up till
                                            the first whitespace unless you declare another variable with scanf and/or the prompt
                                            this is a two-word specifier, program will wait until user inputs two words.
                                            */

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}