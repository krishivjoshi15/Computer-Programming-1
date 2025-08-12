#include <stdio.h>

int main(){
    float dollar = 0.0f;
    float rupee = 0.0f;

    printf("Enter the amount in rupee/s: ");
    scanf("%f", &rupee);

    dollar = rupee / 48;

    printf("The amount %.2f rupee/s is equal to %.2f dollar/s. ", rupee, dollar);

    return 0;
}