#include <stdio.h>

int main(){
    float dollar = 0.0f;
    float rupee = 0.0f;

    printf("Enter the amount in dollar/s: ");
    scanf("%f", &dollar);

    rupee = dollar / 48;

    printf("The amount %.2f dollar/s is equal to %.2f rupee/s. ", dollar, rupee);

    return 0;
}