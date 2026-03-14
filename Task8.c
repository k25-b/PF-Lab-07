#include <stdio.h>
char str[100];
int main() {
    printf("Enter a mix of numbers, symbols, and letters: ");
    scanf("%[^A-Za-z]", str);
    printf("The non-alphabetic characters entered:\n%s", str);
    return 0;
}
