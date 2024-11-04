#include <stdio.h>

int main() {
    float rainfall;

    // Prompt user to input rainfall in mm
    scanf("%f", &rainfall);

    // Classify the type of rainfall and print the appropriate warning
    if (rainfall <= 2.5) {
        printf("%.1f mm of rainfall is considered light. No warning would be issued.\n", rainfall);
    } else if (rainfall > 2.5 && rainfall <= 7.5) {
        printf("%.1f mm of rainfall is considered moderate. No warning would be issued.\n", rainfall);
    } else if (rainfall > 7.5 && rainfall <= 15) {
        printf("%.1f mm of rainfall is considered heavy. Yellow warning would be issued.\n", rainfall);
    } else if (rainfall > 15 && rainfall <= 30) {
        printf("%.1f mm of rainfall is considered intense. Orange warning would be issued.\n", rainfall);
    } else {
        printf("%.1f mm of rainfall is considered torrential. Red warning would be issued.\n", rainfall);
    }

    return 0;
}
