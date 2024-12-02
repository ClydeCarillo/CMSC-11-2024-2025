#include <stdio.h>

int main() {
    char str[71]; 
    int i = 0, toggle = 0; // Alternates case

    // Input
    printf("Enter a string (up to 70 characters): ");
    fgets(str, 71, stdin); // Read up to 70 characters, including spaces

    // Conversion to sArCaSm
    while (str[i] != '\0' && str[i] != '\n') { 
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Lowercase letters
            if (toggle == 0) {
                printf("%c", str[i]); // Print as-is for lowercase
            } else {
                printf("%c", str[i] - 32); // Convert to uppercase
            }
            toggle = 1 - toggle; // Switch toggle
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Uppercase letters
            if (toggle == 0) {
                printf("%c", str[i] + 32); // Convert to lowercase
            } else {
                printf("%c", str[i]); // Print as-is for uppercase
            }
            toggle = 1 - toggle; // Switch toggle
        } else {
            // Non-alphabet characters (e.g., spaces)
            printf("%c", str[i]);
            if (str[i] == ' ') {
                toggle = 0; // Reset toggle after a space
            }
        }
        i++;
    }

    printf("\n"); // End with a newline
    return 0;
}
