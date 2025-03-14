#include <stdio.h>
#include <stdlib.h>
/*
double cube(double num){
    return num * num * num;
}
    */

double cube(double num); // Prototyping: Allowing function declarations to be made below/after main()

int main()
{

    printf("Answer: %f", cube(7.0));
    return 0;
}


double cube(double num){
    return num * num * num;
}
