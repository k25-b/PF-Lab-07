#include<stdio.h>
int main() {
    int array[5] ={1,2,3,4,5}, count;
    int last_element = array[4];
    for (int i = 4; i >0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = last_element;
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
}
