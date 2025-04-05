#include <stdio.h>

int main() {
    int n, arr[100], swapped, isSortedInitially = 1;

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // Reset swap flag at the start of each pass
        for (int j = 0; j < n - i - 1; j++) { // Fixed condition
            if (arr[j] > arr[j + 1]) { // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
                isSortedInitially = 0; // Mark that a swap was made
            }
        }
        if (swapped == 0) break; // Stop early if already sorted
    }

    // Print if the array was sorted or not
    if (isSortedInitially) {
        printf("Sorted\n");
    
    }

    return 0;
}