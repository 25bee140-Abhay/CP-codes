#include <stdio.h>

int main() {
    int n, i, num = 1;

    printf("Enter how many odd numbers you want: ");
    scanf("%d", &n);

    printf("First %d odd numbers are:\n", n);

    for(i = 1; i <= n; i++) {
        printf("%d ", num);
        num = num + 2;   // Move to the next odd number
    }

    return 0;
}
