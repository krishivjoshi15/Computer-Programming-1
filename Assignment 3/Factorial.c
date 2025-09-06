#include <stdio.h>

int main(){
    int i,n;
    int fac = 1;
    
    printf("Enter the number whose factorial is required: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        fac = fac * i;
    }
    printf("%d\n", fac);
    
    return 0;
}