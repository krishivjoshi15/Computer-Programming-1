#include <stdio.h>

int main(){

    float net = 0.0f;
    float gross = 0.0f;
    float discount = 0.0f;

    printf("Enter the gross sales (in $): ");
    scanf("%f", &gross);

    discount = gross * (10.f/100.f);

    net = gross - discount;

    printf("The net sales after discount is $%.2f.", net);








    return 0;
}