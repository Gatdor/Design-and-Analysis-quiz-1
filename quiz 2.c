#include <stdio.h>

// Function to reverse elements of an array from start to end indices
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to perform circular shift on a sorted array
void circularShift(int arr[], int n, int k) {
    // Calculate effective shift amount
    k = k % n;

    // Reverse the entire array
    reverse(arr, 0, n - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining n-k elements
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {5, 15, 29, 35, 42};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    circularShift(arr, n, k);

    printf("Circularly Shifted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


