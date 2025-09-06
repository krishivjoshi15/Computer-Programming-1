#include <stdio.h>

int main(){
    int i,n;
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", &name);
    
    printf("Enter number of times you want your name printed (n): ");
    scanf("%d", &n);
    
    
    
    for(i=0;i<n;i++){
        printf("%s\n", name);
    }