#include <stdio.h>

int main(){
    int i,j,swap;
    int HundredValues[100];
    
    for(i=0;i<100;i++){
        printf("Enter the number (%d): ", i+1);
        scanf("%d", &HundredValues[i]);
    }
    
    for(i=0;i<100;i++){
        for(j=i+1;j<100;j++){
            if(HundredValues[i] > HundredValues[j]){
                swap = HundredValues[i];
                HundredValues[i] = HundredValues[j];
                HundredValues[j] = swap;
            }
        }
    }
    
    printf("Largest of the 100 values is %d", HundredValues[99]);
    printf("Smallest of the 100 values is %d", HundredValues[0]);
    return 0;
}