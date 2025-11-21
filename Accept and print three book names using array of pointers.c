#include <stdio.h>

int main() {
    char book1[100], book2[100], book3[100];
    char *books[3] = { book1, book2, book3 };
    int i;

    printf("Enter names of 3 books:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        fgets(books[i], 100, stdin);
    }

    printf("\nBook names are:\n");
    for (i = 0; i < 3; i++) {
        printf("%s", books[i]); // fgets keeps '\n' at the end
    }

    return 0;
}
