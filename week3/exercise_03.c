#include <stdio.h>
int main(void) {
    char letter;
    printf("Enter a letter: ");
    if (scanf(" %c", &letter) != 1) return 1;
    switch (letter) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n"); break;
        default: printf("Not a vowel\n");
    }
    return 0;
}
