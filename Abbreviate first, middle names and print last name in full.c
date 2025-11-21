#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *token;
    char last[50];

    printf("Enter full name: ");
    gets(name);

    token = strtok(name, " ");
    while (token != NULL) {
        strcpy(last, token);
        token = strtok(NULL, " ");
        if (token != NULL)
            printf("%c. ", last[0]);
    }

    printf("%s", last);
    return 0;
}
