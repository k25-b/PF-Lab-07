#include<stdio.h>
int main() {
    char str[100];
    int i = 0, vowel = 0, consonant = 0;
    printf("Enter a word: ");
    scanf("%s", &str);
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
            i++;
        }
        else {
            consonant++;
            i++;
        }
    }
    printf("Total vowels: %d\n", vowel);
    printf("Total consonants: %d\n", consonant);
}
