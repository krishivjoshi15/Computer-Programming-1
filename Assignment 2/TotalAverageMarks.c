#include <stdio.h>

int main(){

    float sub1 = 0.0f;
    float sub2 = 0.0f;
    float sub3 = 0.0f;
    float avg = 0.0f;
    float total = 0.0f;

    printf("Enter the marks in the first subject: ");
    scanf("%f", &sub1);

    printf("Enter the marks in the second subject: ");
    scanf("%f", &sub2);

    printf("Enter the marks in the third subject: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("The total marks are %.2f.\n", total);
    printf("The average marks are %.2f.\n", avg);

    if ((sub1 < 35) || (sub2 < 35) || (sub3 < 35)){
        printf("You have failed.");
    }

    else{
        if (avg >= 70){
        printf("Your grade is distinction!");
    }
    
    else if (avg >= 60){
        printf("Your grade is first.");
    }

    else if (avg >= 50){
        printf("Your grade is second.");
    }

    else if (avg >= 35){
        printf("Your grade is third class.");
    }

    else{
        printf("You have failed.");
    }
    }
    return 0;
}