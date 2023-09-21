#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 15;
    printf("%d\n", num);           /*To store a number in a variable*/
    printf("%f\n", pow(2, 3));     /*pow used to raise numbers to a power*/
    printf("%f\n", sqrt(64));      /*sqrt used for square roots*/
    printf("%f\n", ceil(15.291));  /*Will round number up*/
    printf("%f\n", floor(15.291)); /*Will round number down*/
    printf("%f\n", 8.9);           /*Prints out decimal to precise point*/
    printf("%f\n", 18.0 + 18.0);   /*Adds them together. Can use / (Division), *
                                      (Multiplication), and - (Subtraction)*/
    printf("%f\n",
           29 + 15.7);     /*29 is the integer, 15.7 is the floating point number. Add
                              to get a floating point number (or any function)*/
    printf("%f\n", 5 + 5); /*WILL NOT WORK BECAUSE 5 IS NOT A FLOATING POINT. %f
                              ASKS FOR FLOATING POINT*/
    printf("%d\n", 3 / 2); /*Prints out the integer, but rounded*/
    printf("%f", 3 / 2.0); /*Prints out the exact value*/
    return 0;
}