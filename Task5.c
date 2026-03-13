#include <stdio.h>
int arr[10], array_in = 0, largest = 0, smallest = 999;
int main() {
    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("The difference is %d", largest - smallest);
}
