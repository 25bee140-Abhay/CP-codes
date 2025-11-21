#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &num); // Read the first number
    largest = smallest = num; // Initialize both to first number

    // Loop for remaining 99 numbers
    for(i = 2; i <= 100; i++) {
        scanf("%d", &num);

        if(num > largest)
            largest = num;

        if(num < smallest)
            smallest = num;
    }

    printf("\nLargest number = %d", largest);
    printf("\nSmallest number = %d", smallest);

    return 0;
}
