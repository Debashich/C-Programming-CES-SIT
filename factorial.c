#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("The factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
