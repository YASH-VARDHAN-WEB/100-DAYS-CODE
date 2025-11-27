#include <stdio.h>

int main() {
    int m, n;

    // Input size of first array
    scanf("%d", &m);
    int arr1[m];

    // Input elements of first sorted array
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    scanf("%d", &n);
    int arr2[n];

    // Input elements of second sorted array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array size = m + n
    int merged[m + n];

    int i = 0, j = 0, k = 0;

    // Merge both arrays while maintaining sorted order
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // If any elements remain in arr1, add them
    while(i < m) {
        merged[k++] = arr1[i++];
    }

    // If any elements remain in arr2, add them
    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Print the merged sorted array
    for(int t = 0; t < m + n; t++) {
        printf("%d ", merged[t]);
    }

    return 0;
}
