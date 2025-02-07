#include <stdio.h>
#include <ctype.h>

int main() {

    int vowel = 0;
    char ch;
    
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            vowel++;
        }
    }

    printf("Your sentence contains %d vowels.", vowel);

    return 0;
}