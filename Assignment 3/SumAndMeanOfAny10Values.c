#include <stdio.h>

int main(){
    int i,mean;
    int sum = 0;
    int num[10];
    
    for(i=0;i<10;i++){
        printf("Enter number: ", i);
        scanf("%d", &num[i]);
        
        sum = sum + num[i];
    }
    printf("Sum = %d\n", sum);
    
    mean = sum / 10;
    printf("Mean = %d\n", mean);
    
    
    return 0;
}