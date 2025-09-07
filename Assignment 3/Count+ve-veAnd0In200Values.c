#include <stdio.h>

int main(){
    int i;
    int j = 0;
    int k = 0;
    int l = 0;
    int TwoHundredValues[200];
    
    for(i=0;i<200;i++){
        printf("Enter the number (%d): ", i+1);
        scanf("%d", &TwoHundredValues[i]);
    }
    for(i=0;i<200;i++){
        if(TwoHundredValues[i] == 0){
            j++;
        }
        else if(TwoHundredValues[i] > 0){
            k++;
        }
        else{
            l++;
        }
    }
    printf("Number of positive (+ve) values: %d\n", k);
    printf("Number of negative (-ve) values: %d\n", l);
    printf("Number of zero (0) values: %d\n", j);
    
    return 0;
}