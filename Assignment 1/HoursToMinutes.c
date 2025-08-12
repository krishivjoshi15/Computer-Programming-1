#include <stdio.h>

int main(){
    float hour = 0.0f;
    float minute = 0.0f;

    printf("Enter the time in hours: ");
    scanf("%f", &hour);

    minute = hour * 60;

    printf("The time %.2f hour/s is equal to %.2f minute/s. ", hour, minute);

    return 0;
}