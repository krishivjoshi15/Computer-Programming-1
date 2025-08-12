#include <stdio.h>

int main(){
    float gram = 0.0f;
    float kilo = 0.0f;

    printf("Enter the weight in kilogram/s (g): ");
    scanf("%f", &kilo);

    gram = kilo * 1000;

    printf("%.2f kg weight converted to grams is %.2f g.",kilo ,gram);
    
    return 0;
}