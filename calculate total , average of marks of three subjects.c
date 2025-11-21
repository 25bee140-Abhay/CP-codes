#include <stdio.h>

int main() {
    float m1, m2, m3, total, average;

    // Input marks of 3 subjects
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    // Calculate total and average
    total = m1 + m2 + m3;
    average = total / 3;

    // Check for fail in any subject
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("\nTotal = %.2f", total);
        printf("\nAverage = %.2f", average);
        printf("\nResult: Fail (Less than 35 in one or more subjects)\n");
    }
    else {
        // Determine grade based on average
        if (average >= 70)
            printf("\nResult: Distinction\n");
        else if (average >= 60)
            printf("\nResult: First Class\n");
        else if (average >= 50)
            printf("\nResult: Second Class\n");
        else if (average >= 35)
            printf("\nResult: Third Class\n");
        else
            printf("\nResult: Fail\n");

        printf("Total = %.2f\n", total);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
