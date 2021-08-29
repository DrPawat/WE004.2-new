#include <stdio.h>
int main() {
    int i;
    float num[100], sum = 0.0, avg;
    for (i = 0; i < 10; ++i) {
        printf("student %d height: ", i + 1);
        scanf_s("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / 10;
    printf("Average of student height = %.2f", avg);
    return 0;
}