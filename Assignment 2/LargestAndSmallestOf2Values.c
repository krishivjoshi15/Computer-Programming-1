#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("First number is larger than the second number.");

    }
    else if (num1 < num2){
        printf("First number is smaller than the second number.");
    }
    else {
        printf("Both numbers are equal.");
    }
    
    return 0;
}