#include <stdio.h>

int calculateTriangularNumber (int n);

int main(void) {
    int n, number, counter;
    for (counter = 1; counter <= 5; counter++) {
        printf("What triangular numebr do you want?");
        scanf("%i", &number);
        printf("Triangular number %d is %d\n",number, calculateTriangularNumber(number));
    }

    return 0;
}

int calculateTriangularNumber (int n) {
    int i, triangularNumber = 0;
    for (i = 1; i <= n; i++) {
        triangularNumber += i;
    }
    return triangularNumber;
}