#include <stdio.h>

int main(){
    int i,n;
    
    printf("Enter the number of natural numbers to print (n): ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        printf("%d\n", i);
    }
    
    return 0;
}