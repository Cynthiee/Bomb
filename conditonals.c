/*
These include all the statements used in decision-making
in C. They are:
1. if statement
2. else...if statement
3. if...else statement
4. else statement 
5. nested if statement
6. switch statement
And the control statements
1. break
2 continue
3. goto
4. Default
*/
#include <stdio.h>

int main() {
    int a = 10;

 // IF STATEMENT
   if( a < 20 ) {
      printf("a is less than 20\n" );
   }
   printf("value of a is : %d\n", a);

// IF...ELSE STATEMENT
    int b = 100;
 
   if( b < 30 ) {
      /* if condition is true then print the following */
      printf("a is less than 30\n" );
   } else {
      /* if condition is false then print the following */
      printf("a is not less than 30\n" );
   }
   printf("value of a is : %d\n", b);
 
 // ELSE...IF STATEMENT
    int time = 22;

    if (time < 10) {
     printf("Good morning.");
    }
     else if (time < 20) {
     printf("Good day.");
    } 
    else {
    printf("Good evening.");
}

// NESTED IF STATEMENT
    int c = 50;
    int d = 90;
 
   if( d == 50 ) {
   
      /* if condition is true then check the following */
      if( d == 90) {
         /* if condition is true then print the following */
         printf("Value of a is 50 and d is 90\n" );
      }
   }
   printf("Exact value of c is : %d\n", c );
   printf("Exact value of d is : %d\n", d );

// SWITCH STATEMENT
    char grade = 'B';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   printf("Your grade is  %c\n", grade );

// NESTED SWITCH STATEMENT
    int x = 234;
    int y = 345;
 
   switch(x) {
   
      case 234: 
         printf("This is part of outer switch\n", x );
      
         switch(y) {
            case 345:
               printf("This is part of inner switch\n", x );
         }
   }  
   printf("Exact value of a is : %d\n", x );
   printf("Exact value of b is : %d\n", y );
   
// BREAK - CONTROL STATEMENT
    int m;

    for (m = 0; m < 10; m++) {
    if (m == 4) {
    break;
  }
  printf("%d\n", m);
}

// CONTINUE - CONTROL STATEMENT
    int n;

    for (n = 0; n < 10; n++) {
    if (n == 4) {
    continue;
  }
  printf("%d\n", n);
}

// DEFAULT - This specifies some code to run when there is no case.
int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}

   return 0;
}