/*
Function is a group of statement that togther performs a task.
Function is important for reusing code.
void - because it doesnt have a return value.
Parameters - information specified in the () after the function name.
Arguments - parameters passed to a function
*/
#include <stdio.h>
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}
int myNum(int x, int y) {
  return x + y;
}

int main() {
  myFunction("Bubu");
  myFunction("Neche");
  myFunction("Fav");

int result = myNum(5, 3);
  printf("Result is = %d", result);

  return 0;
}
