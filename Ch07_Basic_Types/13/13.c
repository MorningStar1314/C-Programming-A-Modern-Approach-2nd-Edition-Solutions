#include <stdio.h>

int main() {

    int words = 0, letters = 0;
    char ch;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n') {
        if (ch == ' ' || ch == '\t') {
            words++;
        } else {
            letters++;
        }
    }
    
    printf("Average word length: %.1f", (float) letters / (words + 1));

    return 0;
}