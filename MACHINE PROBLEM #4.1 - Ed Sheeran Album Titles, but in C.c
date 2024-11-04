#include <stdio.h>

int main() {
    int a, b;
    
    // Prompt user to input two integers
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);
    
    // Ensure the second integer (b) is not zero to avoid division by zero
    if (b != 0) {
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int quotient = a / b;
        
        // Output the results in the specified order
        printf("%d %d %d %d\n", sum, difference, product, quotient);
    } else {
        printf("Error: Division by zero is undefined.\n");
    }
    
    return 0;
}
