/*
 operator is a symbol that tells the compiler to perform specific 
 mathematical, conditional, or logical functions. It is a symbol
  that operates on a value or a variable. 
*/

// Examples of arithmetic operators in C

#include <stdio.h>

int main()

{
// Arithmetic Operators
    int a = 7,b = 5, c;    

    c = a + b;
    printf("a + b = %d \n",c);

    c = a-b;
    printf("a - b = %d \n",c);

    c = a*b;
    printf("a * b = %d \n",c);

    c = a/b;
    printf("a / b = %d \n",c);

    c = a % b;
    printf("Remainder when a is divided by b = %d \n",c);   

//Increment and Decrement Operators
    int e = 11, f = 90;
    float g = 100.5, h = 10.5;

    printf("++e = %d \n", ++e);

    printf("--f = %d \n", --f);

    printf("++g  = %f \n", ++g);

    printf("--h = %f \n", --g);

// Assignment Operators
        int i = 7, j;

    i = j;      // b is 7
    printf("j = %d\n", j);

    j += i;     // j is 14 
    printf("j = %d\n", j);

    j -= i;     // j is 7
    printf("j = %d\n", j);

    j *= i;     // j is 49
    printf("j = %d\n", j);

    j /= i;     // j is 7
    j %= i;     // j = 0
    printf("j = %d\n", j);
// Relational Operators

     int x = 8, y = 10;

   printf("%d == %d is False(%d)\n", x, y, x == y);
   printf("%d != %d is True(%d)\n", x, y, x != y);
   printf("%d > %d is False(%d)\n", x, y, x > y);
   printf("%d < %d is True (%d)\n", x, y, x < y);
   printf("%d >= %d is False(%d)\n", x, y, x >= y);
   printf("%d <= %d is True(%d)\n", x, y, x <= y);

//Logical Operators

        int l = 15, m = 15, n = 20, results;

    results = (l == m) && (n > m);
    printf("(l == m) && (n > m) is %d \n", results);

    results = (l == m) && (n < m);
    printf("(l == m) && (n < m) is %d \n", results);

    results = (l == m) || (n < m);
    printf("(l == m) || (n < m) is %d \n", results);

    results = (l != m) || (n < m);
    printf("(l != m) || (n < m) is %d \n", results);

    results = !(l != m);
    printf("!(l != m) is %d \n", results);

    results = !(l == m);
    printf("!(l == m) is %d \n", results);

    return 0;

}