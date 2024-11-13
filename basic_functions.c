#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int sum = add(num1,num2);
    int difference = subtract(num1,num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The difference of %d and %d is: %d\n", num1, num2, difference);
    return 0;
}
