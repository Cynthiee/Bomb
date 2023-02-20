#include <stdio.h>

int main(){
    int a, b, sum, sub, div, mul;
    char operator;
    printf("Enter operator:");
    scanf("%c", &operator);

    printf("Enter two operands:");
    scanf("%d %d", &a, &b);

    switch(operator){
        case '+' : sum = a + b;
        printf("Sum = %d:", sum);
        break;
        case '-' : sub = a - b;
        printf("Sub = %d:", sub);
        break;
        case '/' : div = a / b;
        printf("Div = %d:", div);
        break;
        case '*' : mul = a * b;
        printf("Mul = %d:", mul);
        break;
        default:

        printf("Enter valid operator:");

    }
    return 0;
}