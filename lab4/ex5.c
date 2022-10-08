#include <stdio.h>

void transposeMatrix(int arr1[4][5], int arr2[5][4]);

int main(void) {
    int preTranspose[4][5];
    int postTranspose[5][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter the element at preTranspose[%d][%d]", i + 1, j + 1);
            scanf("%d", &preTranspose[i][j]);
        }
    }

    transposeMatrix(preTranspose, postTranspose);
    
    return 0;
}

void transposeMatrix(int arr1[4][5], int arr2[5][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[j][i] = arr1[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
            if (j == 3) {
                printf("\n");
            }
        }
    }
}