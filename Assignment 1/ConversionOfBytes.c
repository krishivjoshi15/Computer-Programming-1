#include <stdio.h>

int main(){
    float kb = 0.0f;
    float b = 0.0f;
    float mb = 0.0f;
    float gb = 0.0f;

    printf("Enter the value of bytes (b): ");
    scanf("%f", &b);

    kb = b / 1000;
    mb = kb / 1000;
    gb = mb / 1000;

    printf("The value %f byte/s is equal to %f kb/s, %f mb/s and %f gb/s.", b, kb, mb, gb);












    return 0;
}