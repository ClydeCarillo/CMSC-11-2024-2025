#include <stdio.h>

int main() {
    float s;
    
    // Prompt the user to input the side length of a square
    printf("Enter the side of a square: \n");
    scanf("%f", &s);
    
    // Calculate area and perimeter
    float area = s * s;
    float perimeter = 4 * s;
    
    // Output the area and perimeter with two decimal places
    printf("%.2f square units\n", area);
    printf("%.2f units\n", perimeter);
    
    return 0;
}
