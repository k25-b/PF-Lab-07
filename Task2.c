#include<stdio.h>
int main() {
    int arr[10], search = 0, count = 0, present = 0;
    for(int i=0;i<10;i++) {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("Enter a number you want to search for: ");
    scanf("%d",&search);
    for (int i=0;i<10;i++) {
        if (arr[i] == search) {
            present = 1;
            count++;
        }
        else {
            present = 0;
        }
    }
    if (present) {
        printf("%d was found %d times!", search, count);
    }
    else {
        printf("Number not found!");
    }

}
