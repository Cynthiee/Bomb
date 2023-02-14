/*
Data types in C refer to an extensive system used for 
declaring variables or functions of different types.
The type variable determins how mcuh space it occupies
and how the bit pattern stored is interpreted.
*/
#include <stdio.h>

int main() {
// Data types
    int num = 19;
    float dec = 3.5;
    char letter = 'V';
    double deci = 18.28;
// format specifiers eg "%f"
    printf("%d\n", num);
    printf("%f\n", dec);
    printf("%c\n", letter);
    printf("%1f\n", deci);

// Decimal Precision
    float myFloat = 7.2;
    double nex = 30.86;

    printf("%.1f\n", myFloat);
    printf("%.2f\n", nex); //to 2 decimal places.

/* Type Conversion - coversion of int value to float value.
   Implicit conversion - automatically by compiler
   Explicit conversion - manually
*/

int num1 = 5; 
int num2 =4;
float sum = (float) num1 / num2;

printf("%.1f", sum); // explicit conversion (recommended)
}