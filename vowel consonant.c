#include <stdio.h>

int main() {
    char ch;
    int is_lower_vowel, is_upper_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    is_lower_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    is_upper_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (is_lower_vowel || is_upper_vowel) {
        printf("%c is a Vowel.\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a Consonant.\n", ch);
    }
    else {
        printf("%c is not an alphabet letter.\n", ch);
    }

    return 0;
}
