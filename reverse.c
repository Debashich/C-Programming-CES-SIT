#include <stdio.h>

int reverse(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    reversed = reversed * 10 + (n % 10);
    return reverse(n / 10, reversed);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int reversed = reverse(n, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
