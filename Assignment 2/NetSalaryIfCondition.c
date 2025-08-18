#include <stdio.h>

int main(){

    float gross = 0.0f;
    float net = 0.0f;
    float all = 0.f;
    float ded = 0.0f;

    printf("Enter the gross salary (in $): ");
    scanf("%f", &gross);

    if (gross > 10000){
        all = (10.f/100.f) * gross;
        ded = (3.f/100.f) * gross;
        net = gross + all - ded;
        printf("You fall under (>$10000) salary bracket.\n");
        printf("Hence your gross salary of $%.2f is equal to $%.2f net salary.", gross, net);
    }

    else if (gross > 5000){
        all = (7.f/100.f) * gross;
        ded = (2.f/100.f) * gross;
        net = gross + all - ded;
        printf("You fall under ($5000-$10000) salary bracket.\n");
        printf("Hence your gross salary of $%.2f is equal to $%.2f net salary.", gross, net);
    }

    else{
        printf("You donot fall under any salary bracket specified i.e. your salary is less than or equal to $5000.");
    }
    
    return 0;
}