#include <stdio.h>
int main() {
    char str[50] = "Hello World";
    char rev[50];
    int i, j;

    for (i = 0; str[i] != '\0'; i++);

    for (j = 0, i = i - 1; i >= 0; i--, j++) {
        rev[j] = str[i];
    }

    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}