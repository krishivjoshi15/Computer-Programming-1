#include <stdio.h>

int main(){
    int num1, num2, add;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    add = num1 + num2;

    printf("The sum of %d abd %d is %d.", num1, num2, add);
    
    return 0;
}