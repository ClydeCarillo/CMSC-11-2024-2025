#include <stdio.h>

int main() {
    unsigned int x;
    scanf("%u", &x);

    unsigned int place = 1;  // Start at the ones place
    int first = 1;  // To control formatting for "+" sign

    // First, find the highest place value
    unsigned int highest_place = 1;
    unsigned int temp = x;
    
    while (temp > 0) {
        highest_place *= 10;
        temp /= 10;
    }

    // Iterate over the places from highest to lowest
    while (highest_place > 0) {
        unsigned int part = (x / highest_place) * highest_place;  // Extract the decimal place
        if (part != 0) {  // Only print if the part is not zero
            if (!first) {
                printf(" + ");  // Print "+" between terms
            }
            printf("%u", part);  // Print the current non-zero part
            first = 0;  // After printing the first part, set 'first' to 0
        }
        x %= highest_place;  // Remove the current highest place value
        highest_place /= 10;  // Move to the next lower place value
    }

    printf("\n");
    return 0;
}
