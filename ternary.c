#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num > 0) ? printf("The number is positive\n") :
    (num < 0) ? printf("The number is negative\n") :
        printf("The number is zero\n");

    return 0;
}
