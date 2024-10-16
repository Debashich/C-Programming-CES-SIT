#include <stdio.h>

int main() {
    float num1, num2, result;
    int operation;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f+%.2f=%.2f\n",num1,num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f-%.2f=%.2f\n",num1,num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f*%.2f=%.2f\n",num1,num2, result);
            break;
        case 4:
            if (num2 != 0){
                result = num1 / num2;
                printf("Result: %.2f/%.2f=%.2f\n",num1,num2,result);
            }
            else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation selected.\n");
    }
    return 0;
}
