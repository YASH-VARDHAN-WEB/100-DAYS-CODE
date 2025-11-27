#include <stdio.h>

int main() {
    int n, target;

    // Read the size of the array
    scanf("%d", &n);

    int nums[n];

    // Read array elements (positive integers)
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Read the target sum value
    scanf("%d", &target);

    int found = 0;   // Flag to check if solution exists

    // Check all pairs (i, j) such that i < j
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            // If the sum of the pair equals the target, print indices
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;       // Mark that solution is found
                break;           // Exit inner loop
            }
        }

        // If found, break outer loop too
        if(found) break;
    }

    // If no valid pair found, print "-1 -1"
    if(!found) {
        printf("-1 -1\n");
    }

    return 0;
}
