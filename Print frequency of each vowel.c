#include <stdio.h>

int main() {
    char str[200];
    int i, a=0, e=0, i_v=0, o=0, u=0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        switch(str[i]) {
            case 'a': case 'A': a++; break;
            case 'e': case 'E': e++; break;
            case 'i': case 'I': i_v++; break;
            case 'o': case 'O': o++; break;
            case 'u': case 'U': u++; break;
        }
    }

    printf("Vowel frequencies:\n");
    printf("A/a = %d\n", a);
    printf("E/e = %d\n", e);
    printf("I/i = %d\n", i_v);
    printf("O/o = %d\n", o);
    printf("U/u = %d\n", u);

    return 0;
}
