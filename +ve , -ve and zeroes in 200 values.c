#include <stdio.h>

int main() {
    int i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for(i = 1; i <= 200; i++) {
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;
    }

    printf("\nTotal Positive numbers = %d", positive);
    printf("\nTotal Negative numbers = %d", negative);
    printf("\nTotal Zeroes = %d", zero);

    return 0;
}
