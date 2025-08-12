#include <stdio.h>

int main(){
    float cel = 0.0f;
    float fah = 0.0f;

    printf("Enter the temperature in degree celsius (°C): ");
    scanf("%f", &cel);

    fah = (1.8 * cel) + 32;

    printf("The temperature %.2f °C is equal to %.2f °F.", cel, fah);







    return 0;
}