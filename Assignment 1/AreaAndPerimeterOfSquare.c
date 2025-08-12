#include <stdio.h>
#include <math.h>

int main(){
    float area = 0.0f;
    float side = 0.0f;
    float peri = 0.0f;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = pow(side, 2);
    peri = side * 4;

    printf("The area of the square is %.2f sq. units and perimeter is %.2f units.", area, peri);
    
    return 0;
}