#include <stdio.h>

int main(){
    float dollar = 0.0f;
    float pound = 0.0f;

    printf("Enter the amount in dollar/s: ");
    scanf("%f", &dollar);

    pound = (dollar * 48) / 70 ;

    printf("The amount %.2f dollar/s is equal to %.2f pound/s. ", dollar, pound);

    return 0;
}