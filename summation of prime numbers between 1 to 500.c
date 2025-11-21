#include <stdio.h>

int main() {
    int i, j, isPrime;
    int sum = 0;

    for (i = 2; i <= 500; i++) {  // Start from 2
        isPrime = 1;  // Assume i is prime

        // Check divisibility up to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime) {
            sum += i;  // Add prime to sum
        }
    }

    printf("Summation of prime numbers between 1 and 500 is: %d\n", sum);

    return 0;
}
