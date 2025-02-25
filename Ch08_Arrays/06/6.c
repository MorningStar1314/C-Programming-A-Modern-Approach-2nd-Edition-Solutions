#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {

    char message[MAX_SIZE], ch;
    int i = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && i < MAX_SIZE){
        message[i++] = ch;
    }

    printf("In B1FF-speak: ");
    for (int j = 0; j < i; j++){
        switch (toupper(message[j])){
            case 'A':
                putchar('4');
                break;
            
            case 'B':
                putchar('8');
                break;

            case 'E':
                putchar('3');
                break;
            
            case 'I':
                putchar('1');
                break;

            case 'O':
                putchar('0');
                break;

            case 'S':
                putchar('5');
                break;
            
            default:
                putchar(toupper(message[j]));
                break;
        }
    }

    printf("!!!!!!!!!!");

    return 0;
}