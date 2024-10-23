#include <stdio.h>

int main() {
    int arr[]={23,45,12,67,34,89,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            largest=arr[i];
        }
        if (arr[i] < smallest){
            smallest=arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}
