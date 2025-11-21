#include <stdio.h>

int main() {
    int i;
    char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");

    // Loop runs 50 times for 50 students
    for(i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex);   // space before %c to skip newline

        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
        else
            printf("Invalid code! Please enter M or F.\n");
    }

    printf("\nTotal Boys = %d", boys);
    printf("\nTotal Girls = %d", girls);

    return 0;
}
