#include <stdio.h>

int main(){
    int i,n;
    float mean = 0.0f;
    int sum = 0;
    
    printf("Enter the number of numbers whose mean and sum you want(n) :");
    scanf("%d", &n);
    
    
    int num[n];
    
    for(i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d", &num[i]);
        
        sum = sum + num[i];
    }
    printf("Sum = %d\n", sum);
    
    mean = sum * 1.0f / n;
    printf("Mean = %.2f\n", mean);
    
    
    return 0;
}