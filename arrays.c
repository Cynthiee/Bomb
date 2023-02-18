/*
Arrays are used to store multiple values in a single variable,
instead of declaring separate variables.
To access an array, refer to it's index. 
It starts with zero.
*/

#include <stdio.h>

int main(){
  int myNumbers[] = {25, 50, 75, 100}; // Array of 5 variables
  int i;
  
  for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
  }
 /* Multidimensional arrays*/
 int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int a, b;
for (a = 0; a < 2; a++) {
  for (b = 0; b < 3; b++) {
    printf("%d\n", matrix[a][b]);
  }
}
  return 0;
}
