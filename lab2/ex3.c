#include <stdio.h>

int main(void) {
    int rows;
    int character = 97;
    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%c ", character);
        }
        character++;
        printf("\n");
    }

    return 0;
}