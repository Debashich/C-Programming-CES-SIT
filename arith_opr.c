#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1 , &num2);
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    int difference = num1 - num2;
    printf("Difference: %d\n", difference);
    int product = num1 * num2;
    printf("Product: %d\n",product);
    int division = num1 / num2;
    printf("Division: %d\n",division);
    int modulus = num1 % num2;
    printf("Modulus: %d\n", modulus);
    return 0;
}
