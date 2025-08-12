#include <stdio.h>

int main(){
    float base = 0.0f;
    float height = 0.0f;
    float area = 0.0f;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = (height * base) / 2;

    printf("The area of the triangle is %.2f sq. units.", area);
    
    return 0;
}