#include <stdio.h>

int main(){
    float area = 0.0f;
    float len = 0.0f;
    float peri = 0.0f;
    float wid = 0.0f;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &len);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &wid);



    area = len * wid;
    peri = 2 * (len + wid);

    printf("The area of the rectangle is %.2f sq. units and perimeter is %.2f units.", area, peri);
    
    return 0;
}