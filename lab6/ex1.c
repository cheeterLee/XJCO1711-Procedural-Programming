#include <stdio.h>
#include <string.h>

void concat(char result[], const char str1[], const char str2[]);

int main(void) {
    char s1[3] = "abc";
    char s2[3] = "def";
    char res[strlen(s1) + strlen(s2)];
    concat(res, s1, s2);
    return 0;
}

void concat(char result[], const char str1[], const char str2[]) {
    // int str1_len = strlen(str1);
    // int str2_len = strlen(str2);
    int i = 0, j = 0, k = 0;
 
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i - 1 + j] = str2[j];
        j++;
    }
    
    for (k = 0; k < strlen(result); k++) {
        printf("%c", result[k]);
    }
}