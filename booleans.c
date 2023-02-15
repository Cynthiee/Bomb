/*
 Boolean is a logical data type that can
only have the two possible  values true or false.
It has it's own library <stdbool.h>
*/ 

#include <stdio.h>
#include <stdbool.h>

int main() {

bool isProgrammingFun = true;
bool isFishTasty = false;

printf("%d\n", isProgrammingFun);
printf("%d\n", isFishTasty);

int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  printf("Old enough to vote!");
} else {
  printf("Not old enough to vote.");
}
}