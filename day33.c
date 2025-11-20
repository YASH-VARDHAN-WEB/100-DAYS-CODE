#include <stdio.h>

int main() {
    int n, i, key, left, right, mid, found = 0;

    // Input size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements (must be sorted)
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    left = 0;
    right = n - 1;

    // Binary search
    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found)
        printf("%d is found at position %d.\n", key, mid + 1);
    else
        printf("%d is not found in the array.\n", key);

    return 0;
}
