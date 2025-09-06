#include <stdio.h>

int main(){
    int i,n,sum;
    
    printf("Enter the number of odd natural numbers to add (n): ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i+=2){
        sum = n * n;
    }
    printf("%d\n", sum);
    
    return 0;
}