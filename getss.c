#include <stdio.h>

int main() {
    char str[100];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            words++;
    }

    words++; // Number of words is spaces + 1

    printf("You entered: %s", str);
    printf("Number of words: %d\n", words);

    return 0;
}

