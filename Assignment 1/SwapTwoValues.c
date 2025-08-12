#include <stdio.h>

int main(){

    int val1 = 0;
    int val2 = 0;

    printf("Enter the first value: ");
    scanf("%d", &val1);

    printf("Enter the second value: ");
    scanf("%d", &val2);

    val1 = val1 + val2;
    val2 = val1 - val2;
    val1 = val1 - val2;

    printf("After swapping, the first value is %d and second value is %d.", val1, val2);









    return 0;
}