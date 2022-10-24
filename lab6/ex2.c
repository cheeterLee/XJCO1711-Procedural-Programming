#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[]);

int main(void) {
    char s1[] = "abc";
    char s2[] = "def";

    if (equalStrings(s1, s2)) {
        printf("The two strings equals");
    } else {
        printf("The two strings does not match.");
    }

    return 0;
}

bool equalStrings(const char s1[], const char s2[]) {
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}