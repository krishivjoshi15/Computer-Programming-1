#include <stdio.h>
#include <string.h>

int main(){
    float num1 = 0.0f;
    float num2 = 0.0f;
    char op = '\0';
    float result = 0.0f;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    
    getchar();
    printf("\nSelect the operator (+-*/): ");
    scanf("%c", &op);
    
    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    if (op == '+'){
        result = num1 + num2;
        printf("The additon of %.2f and %.2f is %.2f.", num1, num2, result);
    }
    else if(op == '-'){
        result = num1 - num2;
        printf("Enter subtraction of %.2f and %.2f is %.2f.", num1, num2, result);
    }
    else if(op == '*'){
        result = num1 * num2;
        printf("Enter multiplication of %.2f and %.2f is %.2f.", num1, num2, result);
    }
    else if(op == '/'){
        if (num2 != 0){
            result = num1 / num2;
        printf("Enter division of %.2f and %.2f is %.2f.", num1, num2, result);
    }
    else{
        printf("Cant divide by zero! ");
    }
    }
    else{
        printf("Please enter a valid operator. (+-*/)");
    }


    
    return 0;
}