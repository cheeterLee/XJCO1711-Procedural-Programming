#include <stdio.h>
#include <string.h>

void substring (char source[], int start, int count, char result[]);

int main(void) {
    char source[21] = "life is like an ocean";
    char result[3];
    substring(source, 1, 3, result);

    return 0;
}

void substring (char source[], int start, int count, char result[]) {
    for (int i = start, j = 0; j <= count; i++, j++) {
        result[j] = source[i];
    }
    for (int k = 0; k < strlen(result); k++) {
        printf("%c", result[k]);
    }
}