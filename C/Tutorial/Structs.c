#include <stdio.h>
#include <stdlib.h>

struct Student{ /* Declared struct, capitalize first letter of its name
                contains many parameters of different data types */
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1; // Created a container called "student1" that could fit all Student type parameters
    student1.age = 24;
    student1.gpa = 3.7;
    strcpy(student1.name, "Josh"); /* String is an array of characters so using student1.name will not declare a value to that string */
    strcpy(student1.major, "ECE");
    
    printf("%s", student1.name);
}