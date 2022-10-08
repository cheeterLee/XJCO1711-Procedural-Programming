#include <stdio.h>

int calculateTriangularNumber (int n) {
    int i, triangularNumber = 0;
    for (i = 1; i <= n; i++) {
        triangularNumber += i;
    }
    return triangularNumber;
}

int main (void) {
    int triangularNumber;
    triangularNumber =  calculateTriangularNumber(10); 
    printf ("Triangular number 10 is %i\n", triangularNumber);
    triangularNumber = calculateTriangularNumber(20); 
    printf ("Triangular number 20 is %i\n", triangularNumber);
    triangularNumber = calculateTriangularNumber(50); 
    printf ("Triangular number 30 is %i\n", triangularNumber);
    return 0;
}