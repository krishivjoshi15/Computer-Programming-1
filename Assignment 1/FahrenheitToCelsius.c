#include <stdio.h>

int main(){
    float cel = 0.0f;
    float fah = 0.0f;

    printf("Enter the temperature in degree fahrenheit (°F): ");
    scanf("%f", &fah);

    cel = (fah - 32) * 5/9;

    printf("The temperature %.2f °F is equal to %.2f °C.", fah, cel);







    return 0;
}