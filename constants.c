/*
Constants are fixed values that the program may
not alter during execution. It can be of any data type.
It is also called literals.
Constants can be defined with #define preprocessor or const keyword
*/
#include <stdio.h>

// with define preprocessor
#define LENGHT 19
#define WIDTH 5
#define NEWLINE '\n'

int main() {
int area; 
area = LENGHT * WIDTH;

printf("value of area : %d", area);
printf("%c", NEWLINE);

return 0;

// const keyword

const int HEIGTH = 78;
const int SIZE = 4;
const char NEWLINEe = '\n';

int size;
size = HEIGTH * SIZE;

printf("value of size : %d", size);
printf("%c", NEWLINEe);
return 0;
}