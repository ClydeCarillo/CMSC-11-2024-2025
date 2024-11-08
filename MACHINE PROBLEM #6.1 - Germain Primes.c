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










// Without OOP version
#include <stdio.h>

int main() {
    int n, prime = 1, i, n2;

    scanf("%d", &n);

    if (n <= 1) {
        prime = 0;
    } 
    else {
        i = 2;
        while (i * i <= n) {
            if (n % i == 0) {
                prime = 0; 
            }
            i++;
        }
    }

    // If n is prime, check if 2*n + 1 is also prime
    if (prime == 1) {
        n2 = 2 * n + 1; // Calculate 2*n + 1
        prime = 1; // Assume n2 is prime
        if (n2 <= 1) {
            prime = 0; // n2 is not prime if it's <= 1
        } else {
            i = 2;
            while (i * i <= n2) {
                if (n2 % i == 0) {
                    prime = 0; // n2 is divisible by i, so it's not prime
                }
                i++;
            }
        }
    }
    
    // Output whether n is a Germain Prime or not
    if (prime == 1) {
        printf("%d is a Germain Prime Number.\n", n);
    } else {
        printf("%d is NOT a Germain Prime Number.\n", n);
    }
    return 0;
}
