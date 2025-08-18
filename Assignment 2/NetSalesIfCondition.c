#include <stdio.h>

int main(){
    
    float gross = 0.0f;
    float net = 0.0f;
    float discount = 0.0f;


    printf("Enter the gross sales (in $): ");
    scanf("%f", &gross);

    if (gross > 10000){
        if (gross > 20000){
            discount = 0.15 * gross;
            net = gross - discount;
            printf("The net sales are $%.2f.", net);
        }

        else{
            net = gross * 0.90f;
            printf("The net sales are $%.2f.", net);
        }
    }

    else{
        net = gross * 0.95f;
        printf("The net sales are $%.2f.", net);
    }







    return 0;
}