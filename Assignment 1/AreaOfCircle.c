#include <stdio.h>
#include <math.h>

int main(){

    float rad = 0.0f;
    float area = 0.0f;
    const float pi = 3.14159;

    printf("Enter the radius (r) of the circle: ");
    scanf("%f", &rad);

    area = pi * pow(rad, 2);

    printf("The area of the circle is %.2f sq. units.", area);

    










    return 0;
}