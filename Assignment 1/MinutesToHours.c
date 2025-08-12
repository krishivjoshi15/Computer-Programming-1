#include <stdio.h>

int main(){
    float hour = 0.0f;
    float minute = 0.0f;

    printf("Enter the time in minute/s: ");
    scanf("%f", &minute);

    hour = minute / 60;

    printf("The time %.2f minute/s is equal to %.2f hour/s. ", minute, hour);

    return 0;
}