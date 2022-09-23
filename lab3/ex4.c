#include <stdio.h>

// just my own version, i'm too lazy to check the slides :)
int main(void) {
    int n;
    int prevprev = 0;
    int prev = 1;
    int curr = prevprev + prev;

    printf("Enter the number of terms(greater or equal to 2) ");
    scanf("%d", &n);

    // print the first two terms
    printf("Fibonacci: %d, %d, ", prevprev, prev);
    
    // 3rd to nth
    for (int i = 3; i <= n; i++) {
        printf("%d, ", curr);
        prevprev = prev;
        prev = curr;
        curr = prevprev + prev;
    }

    return 0;
}