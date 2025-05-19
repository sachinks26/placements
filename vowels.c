#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);

    // Check if the letter is a vowel (both uppercase and lowercase)
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        printf("The given letter is a vowel.\n");
    } else {
        printf("The given letter is not a vowel.\n");
    }

    return 0;
}