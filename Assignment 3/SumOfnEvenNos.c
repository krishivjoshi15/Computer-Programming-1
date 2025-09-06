#include <stdio.h>

int main(){
    int i,n,sum;
    
    printf("Enter the number of even natural numbers to add (n): ");
    scanf("%d", &n);
    
    for(i=2;i<=n;i+=2){
        sum = n * (n+1);
    }
    printf("%d\n", sum);
    
    return 0;
}