#include <stdio.h>

int main(){
    int i,n,sum;
    
    printf("Enter the number of natural numbers to add (n): ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        sum = n * (n+1) / 2;
    }
    printf("%d\n", sum);
    
    return 0;
}