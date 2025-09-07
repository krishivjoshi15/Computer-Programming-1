#include <stdio.h>
#include <string.h>
int main(){
    int i;
    int b = 0;
    int g = 0;
    char gender[50];
    
    for(i=0;i<50;i++){
        printf("Enter the gender (B/G) (%d):\n", i+1);
        scanf(" %c", &gender[i]);
    }
    
    for(i=0;i<50;i++){
        if(gender[i] == 'B' ){
            b++;
        }
        else if(gender[i] == 'G'){
            g++;
        }
    }
    printf("Number of boys = %d\n", b);
    printf("Number of girls = %d\n", g);
    
    return 0;
}