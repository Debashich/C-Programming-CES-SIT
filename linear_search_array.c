#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    int key = 25;
    int found = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element %d found at index %d\n", key, i);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
