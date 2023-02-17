/*
A loop statement allows a program to execute a statement or
group of statements multiple times.
There 4 types of loop. Namely;
1. For loop
2. While loop
3. Do...while loop
4. Nested loop
*/
#include <stdio.h>

int main() {
//FOR LOOP
	int a;
   for( a = 10; a < 20; a = a + 1 ){
      printf("value of a: %d\n", a);
   }
 
 //WHILE LOOP
    int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}

// DO..WHILE LOOP
 int b = 10;

   do {
      printf("value of b: %d\n", b);
      b = b + 1;
   }while( b < 20 );

// NESTED LOOP
int j, k;
   
    for(j = 2; j<100; j++) {
    for(k = 2; k <= (j / k); k++)

      if(!(j % k )) 
      break; // if factor found, not prime
      if(j > (j /k)) 
      printf("%d is prime\n", j);
   }
 
    return 0;
}