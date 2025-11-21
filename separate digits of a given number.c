#include <stdio.h>

int main() {
    int num, temp, digit, i = 0;
    int digits[10]; // Array to store digits (assuming number has <=10 digits)

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Loop to extract digits and store in array
    while(temp > 0) {
        digits[i] = temp % 10;  // Get last digit
        temp = temp / 10;        // Remove last digit
        i++;
    }

    printf("Digits of the number in original order: ");

    // Loop to print digits in reverse of array (most significant first)
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", digits[j]);
        if(j != 0)
            printf(",");
    }

    printf("\n");

    return 0;
}
