#include <stdio.h>

int arraySum(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main(void) {
    int nums[3] = {1, 2, 3};
    int sum = arraySum(3, nums);
    printf("Sum of the array is %d", sum);

    return 0;
}