#include <stdio.h>

int main(){
    int num1, num2, sub;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sub = num1 - num2;

    printf("The subtraction of %d and %d is %d.", num1, num2, sub);
    
    return 0;
}