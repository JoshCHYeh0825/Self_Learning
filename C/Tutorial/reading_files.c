#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r"); 

    fgets(line, 255, fpointer); /* Reads first line of file specified by pointer ands store into line[]
                                    second paramter is size which is nuymber of characters to be read*/

    printf("%s", line);
    fclose(fpointer);
    return 0;
}