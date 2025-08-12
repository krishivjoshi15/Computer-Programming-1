#include <stdio.h>

int main(){
    float pri = 0.0f;
    float rate = 0.0f;
    int time = 0;
    float interest = 0.0f;

    printf("Enter the principle amount (in $): ");
    scanf("%f", &pri);

    printf("Enter the rate of simple interest in percentage: ");
    scanf("%f", &rate);
    rate/=100;

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    interest = pri * rate * time;

    printf("The simple interest is $%.2f.", interest);

    








    return 0;
}