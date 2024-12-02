#include <stdio.h>

int main() {
    int arr[20], modes[20];
    int i, j, maxCount = 0, count, modeCount = 0;
    float mean, median, sum = 0;

    // Input
    printf("Enter 20 sorted integers: ");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate mean
    for (i = 0; i < 20; i++) {
        sum += arr[i];
    }
    mean = sum / 20.0f;

    // Calculate median
    median = (arr[9] + arr[10]) / 2.0f;

    // Calculate mode
    modeCount = 0; // Reset the count of modes
    maxCount = 0;
    for (i = 0; i < 20; i++) {
        count = 1;
        for (j = i + 1; j < 20; j++) {
            if (arr[j] == arr[i]) {
                count++;
            } else {
                break;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            modeCount = 0;
            modes[modeCount] = arr[i];
            modeCount++;
        } else if (count == maxCount && count > 1) {
            modes[modeCount] = arr[i];
            modeCount++;
        }

        i += count - 1; // Skip the counted numbers
    }

    // If no number repeats, all are modes
    if (maxCount == 1) {
        for (i = 0; i < 20; i++) {
            modes[i] = arr[i];
        }
        modeCount = 20;
    }

    // Output results
    printf("mean: %.2f\n", mean);
    printf("median: %.2f\n", median);
    printf("mode: ");
    for (i = 0; i < modeCount; i++) {
        printf("%d", modes[i]);
        if (i < modeCount - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
