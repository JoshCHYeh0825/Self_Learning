#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age); //scanf: user input, uses pointer to variable
    
    double gpa;
    printf("Enter your gpa: \n");
    scanf("%lf", &gpa); // uses %lf instead of %f for scanf
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: \n");
    scanf("%c", &grade);
    printf("Your gpa is %c\n", grade);

    char name[20]; // Need to specify string length to allocate enough memory for c
    printf("Enter your name: \n");
    //scanf("%s", name); Directly specify to string instead of pointer, would only take the first word once you enter "space"
    fgets(name, 20, stdin); // Same as scanf except you specify variable and variable length, also standard input, will not ignore "space"
    printf("Your name is %s\n", name);

    return 0;
}