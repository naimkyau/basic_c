#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        printf("This is a lowercase letter\n");
    } else {
        printf("This is not a lowercase letter\n");
    }

    return 0;
}
