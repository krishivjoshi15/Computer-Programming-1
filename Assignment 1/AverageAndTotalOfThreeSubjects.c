#include <stdio.h>

int main(){

    float sub1 = 0.0f;
    float sub2 = 0.0f;
    float sub3 = 0.0f;
    float avg = 0.0f;
    float total = 0.0f;

    printf("Enter the marks of first subject: ");
    scanf("%f", &sub1);

    printf("Enter the marks of second subject: ");
    scanf("%f", &sub2);

    printf("Enter the marks of third subject: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("The average marks is %.2f and the total marks are %.2f.", avg, total);
    
    return 0;
}