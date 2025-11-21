#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 500 are:\n");

    for (i = 2; i <= 500; i++) {  // Start from 2 because 1 is not prime
        isPrime = 1;  // Assume i is prime

        for (j = 2; j * j <= i; j++) {  // Check divisibility up to sqrt(i)
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
