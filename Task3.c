#include<stdio.h>
int main() {
    int fail_array[10], pass_array[10], fail_count=0, pass_count=0, input_marks=0;
    float pass_sum = 0, fail_sum = 0;
    while (1) {
        printf("Enter marks between 0-10:");
        scanf("%d", &input_marks);
        if (input_marks == -1) {
            break;
        }
        if (input_marks < 5) {
            if (fail_count > 9) {
                break;
            }
            fail_array[fail_count] = input_marks;
            printf("Faliure student!\n");
            fail_sum += fail_array[fail_count];

            fail_count++;
        }
        if (input_marks >= 5) {
            if (pass_count > 9) {
                break;
            }
            pass_array[pass_count] = input_marks;
            printf("Passing student!\n");
            pass_sum += pass_array[pass_count];
            pass_count++;
        }
    }
    printf("Passing Array \n");
for (int i = 0; i < pass_count; i++) {
    printf("%d ", pass_array[i]);
}
    printf("Pass Avg %.2f", pass_sum / pass_count);
    printf("\n");
    printf("Failing Array \n");
    for (int i = 0; i < fail_count; i++) {
        printf("%d ", fail_array[i]);
    }
    printf("Fail Avg %.2f", fail_sum / fail_count);



}
