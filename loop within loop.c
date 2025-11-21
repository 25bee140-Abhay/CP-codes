#include <stdio.h>

int main() {
    int i, j, k;

    // Series A
    printf("Series A:\n");
    for(i=1; i<=2; i++) {         // outer loop
        for(j=1; j<=3; j++) {     // inner loop
            printf("%d %d\n", i, j);
        }
    }

    // Series B
    printf("\nSeries B:\n");
    for(i=1; i<=3; i++) {
        for(j=1; j<=3; j++) {
            if(j <= i)
                printf("%d %d\n", i, j);
        }
    }

    // Series C
    printf("\nSeries C:\n");
    for(i=1; i<=2; i++) {
        for(j=1; j<=2; j++) {
            for(k=1; k<=2; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    // Series D
    printf("\nSeries D:\n");
    for(i=5; i>=3; i--) {
        for(j=1; j<=2; j++) {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}
