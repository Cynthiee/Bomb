/*
Variable is a name given to storage area that our programs
can manipulaate. It is the data name used to store value of data.
C variables must be identifiers with unique names.
*/
 
#include <stdio.h>

int main() {
 // to create variable, specify type and assign value to it.
// "%d" or "%i" - format specifier for int. without, the program will output nothing.
    int myNum = 15;
    float myFloatNum = 2.7; 
    char myLetter = 'C';

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("My number is %d and my letter is %c\n", myNum, myLetter);


// change variable values
    int x = 89;
    x = 27;
// assign value of one variable to another.
    int y = 65;
    int z = 70;
    z = y;
    printf("%d\n", z);
// add variables together
    int a = 5;
    int b = 9;
    int sum = a + b;
    printf("%d\n", sum);
}