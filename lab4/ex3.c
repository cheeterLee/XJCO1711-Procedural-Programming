#include <stdio.h>

int powerCount(int x, int n) {
    long result = 1;
    while (n != 0) {
        result *= x;
        n--;
    }
    return result;
}

int main(void) {
    long result = powerCount(2, 5);
    printf("2 to the 5th power equals %ld", result);
    return 0;
}