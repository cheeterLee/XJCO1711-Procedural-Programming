#include <stdio.h>

int main(void) {
    double array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    double sum = 0;
    double average = 0;

    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    average = sum / 10;
    printf("average = %lf", average);

    return 0;
} 