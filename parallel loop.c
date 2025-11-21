#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 5; i++) {
        // Series (A)
        printf("%d %d\t", i, 6 - i);

        // Series (B)
        if(i == 1 || i == 2)
            printf("1 5");
        else if(i == 3 || i == 4)
            printf("2 4");
        else if(i == 5)
            printf("3 3");

        printf("\n");
    }

    // Extra "3 3" on same line as blank in Series A
    printf("\t3 3\n");

    return 0;
}
