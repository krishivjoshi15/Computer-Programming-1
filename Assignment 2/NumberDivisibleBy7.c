#include <stdio.h>

int main(){

    int num = 0;
    int remainder = 0;

    printf("Enter a integer: ");
    scanf("%d", &num);

    remainder = num % 7;

    if(remainder == 0){
        printf("The integer %d is divisible by 7", num);
    }
    
    else{
        printf("The integer %d is not divisible by 7", num);
    }










    return 0;
}