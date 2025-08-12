#include <stdio.h>

int main(){
    int num1, num2, mul;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    mul = num1 * num2;

    printf("The multiplication of %d abd %d is %d.", num1, num2, mul);
    
    return 0;
}