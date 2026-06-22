#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr[100], size, key, i;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }// User enters number to search
    printf("Enter number to search: ");
    scanf("%d", &key);
 // Search
    int result = binarySearch(arr, size, key);
    // Output result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}