#include <stdio.h>

int main() {
    int arr[10], i, j, minIndex, temp;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) { 
        minIndex = i; // Assume the current position holds the smallest value
        for (j = i + 1; j < 10; j++) { // Inner loop to find the smallest value
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update index of the smallest value
            }
        }
        // Swap the smallest value with the current position
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
