#include<stdio.h>
int main() {
    int arr[10] = {1,1,3,4,1,6,2,8,2,10};
    int check = 0;
    for (int i = 0; i < 10; i++) {
        check = arr[i];
        for (int j = i+1; j < 10; j++) {
            if (check == arr[j]) {
                arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\ ", arr[i]);
    }
}
