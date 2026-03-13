#include <stdio.h>
char message[20], i = 0;
int main() {
    printf("Enter a message: ");
    scanf("%[^\n]", message);
    while (message[i] != '\0') {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = message[i] + 32;
        }
        else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = message[i] - 32;
        }
        i++;
    }
    printf("%s", message);
}
