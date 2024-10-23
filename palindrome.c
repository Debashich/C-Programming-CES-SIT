#include <stdio.h>

int is_palindrome(int num) {
    int original_num = num,reversed_num = 0;
    while (num!=0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return original_num == reversed_num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_palindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
