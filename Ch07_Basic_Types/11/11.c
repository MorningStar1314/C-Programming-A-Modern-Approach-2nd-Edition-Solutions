#include <stdio.h>

int main() {

    char ch, letter;

    printf("Enter a first and last name: ");
    scanf(" %c", &letter);

    while ((ch = getchar()) != ' ') {
        ch = getchar();
    }

    while (ch == ' ') {
        ch = getchar();
    }

    while (ch != '\n' && ch != ' ') {
        putchar(ch);
        ch = getchar();
    }

    printf(", %c.", letter);

    return 0;
}