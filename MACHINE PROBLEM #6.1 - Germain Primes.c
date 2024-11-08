#include <stdio.h>

// A function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return 0; // Not prime
        i++;
    }
    return 1; // Prime
}

int main() {
    int n;
    scanf("%d", &n);

    // Check if n is a Germain Prime
    if (is_prime(n) && is_prime(2 * n + 1)) {
        printf("%d is a Germain Prime Number.\n", n);
    } else {
        printf("%d is NOT a Germain Prime Number.\n", n);
    }

    return 0;
}
