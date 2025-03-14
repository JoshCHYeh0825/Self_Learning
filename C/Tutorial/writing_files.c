#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "a"); /*fopen is a file opening function, second parameter is a file mode:
                                                    w = write, r =r ead, a = append
                                                    - fpointer is now a pointer or memory address to the emplopyees.txt
                                                    - since the file does not exist, when the program executes it will make that file*/

    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accountant"); // fprintf allows write to file, args: (pointer to file, content)
    fprintf(fpointer, "\nKelly, Customer Service"); // We don't want to overwrite the previous content so we use a in fopen to append and update file
    fclose(fpointer);
    return 0;
}