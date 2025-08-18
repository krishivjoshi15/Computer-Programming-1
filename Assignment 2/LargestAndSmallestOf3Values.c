#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // All three numbers must be different.
    printf("---ENTER 3 DIFFERENT NUMBERS ONLY---\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)){
        printf("%d (first number) is the largest.\n");
        if(num2 > num3){
            printf("%d (third number) is the smallest.", num3);
        }
        else if (num2 == num3){
            printf("%d (second number) and %d (third number) are equal and smallest.", num2, num3);
        }
        else {
            printf("%d (second number) is the smallest.", num2);
        }

    }

    /*else if (num1 == num2){
        if (num1 > num3){
            printf("%d (first number) and %d (second number) are equal and largest and %d (third number) is the smallest. ", num1, num2, num3);
        }
        else {
            printf
        }
    }

    else if (num1 == num3){
        if (num1 > num2){
            printf("%d (first number) and %d (third number) are equal and largest and %d (second number) is the smallest. ", num1, num3, num2);
        }
    }*/



    if ((num2 > num3) && (num2 > num1)){
        printf("%d (second number) is the largest.\n");
        if(num1 > num3){
            printf("%d (third number) is the smallest.", num3);
        }
        else if (num1 == num3){
            printf("%d (first number) and %d (third number) are equal and smallest.", num1, num3);
        }
        else {
            printf("%d (first number) is the smallest.", num1);
        }

    }
    

    if ((num3 > num1) && (num3 > num2)){
        printf("%d (third number) is the largest.\n");
        if(num2 > num1){
            printf("%d (first number) is the smallest.", num1);
        }
        else if (num1 == num2){
            printf("%d (first number) and %d (second number) are equal and smallest.", num1, num2);
        }
        else {
            printf("%d (second number) is the smallest.", num2);
        }

    }
    
    return 0;
}