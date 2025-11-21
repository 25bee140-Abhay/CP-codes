#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            next = 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
