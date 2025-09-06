#include <stdio.h>

int main(){
    int i;
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", &name);
    
    for(i=0;i<5;i++){
        printf("%s\n", name);
    }
    
    return 0;
}