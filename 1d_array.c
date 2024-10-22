#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
