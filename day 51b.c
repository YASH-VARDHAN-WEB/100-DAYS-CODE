#include <stdio.h>

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = -1;

    // Find smallest element >= x
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;       // first occurrence
        }
    }

    printf("%d\n", index);   // print index or -1

    return 0;
}
