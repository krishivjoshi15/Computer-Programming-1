#include <stdio.h>

int main(){
    float gram = 0.0f;
    float kilo = 0.0f;

    printf("Enter the weight in gram/s (g): ");
    scanf("%f", &gram);

    kilo = gram / 1000;

    printf("%.2f g weight converted to kilograms is %.2f kg.",gram ,kilo);
    
    return 0;
}