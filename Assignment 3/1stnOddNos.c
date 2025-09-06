#include <stdio.h>

int main(){
    int i,n;
    
    printf("Enter the number of odd natural numbers to print (n): ");
    scanf("%d", &n);
    
    for(i=1;i<=2*n-1;i+=2){
        printf("%d\n", i);
    }
    
    return 0;
}