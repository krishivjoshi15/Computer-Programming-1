#include <stdio.h>

int main(){
    int num1, num2, div;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number (non zero): ");
    scanf("%d", &num2);

    div = num1 / num2;

    printf("The division of %d and %d is %d.", num1, num2, div);
    
    return 0;
}