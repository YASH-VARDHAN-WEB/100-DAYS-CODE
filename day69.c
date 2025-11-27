#include <stdio.h>

int main() {
    int n;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* 
       XOR Logic:
       - XOR of all array elements
       - XOR of numbers from 0 to n-2
       Because the array contains numbers 0 to n-2 with one repeated
    */

    int xorAll = 0;
    int xorRange = 0;

    for(int i = 0; i < n; i++) {
        xorAll ^= arr[i];       // XOR of all array values
        if(i < n - 1)
            xorRange ^= i;      // XOR of numbers 0 to n-2
    }

    int repeated = xorAll ^ xorRange;  // Final repeated number

    // Output repeated element
    printf("%d\n", repeated);

    return 0;
}
