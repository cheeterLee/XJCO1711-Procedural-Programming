#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m % n == 0) {
        printf("True, m can be evenly divided by n\n");
    } else {
        printf("False, m can't be evenly divided by n\n");
    }

    return 0;
}