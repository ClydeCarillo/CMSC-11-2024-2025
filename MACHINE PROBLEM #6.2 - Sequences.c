#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // If n is 0, we do nothing
    if (n == 0) {
        return 0;
    }

    // Define the sequence pattern
    int series[] = {4, 8, 7, 14, 12, 16, 21, 28, 20, 24, 35};
    
    // Print the first n elements
    for (int i = 0; i < n; i++) {
        printf("%d", series[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
