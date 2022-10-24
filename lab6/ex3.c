#include <stdio.h>

int countWords (const char string[]);

int main (void) {
    const char text1[] = "Well, here goes.";
    const char text2[] = "And here we go... again.";
    const char text3[] = "";
    printf ("%s - words = %i\n", text1, countWords (text1)); 
    printf ("%s - words = %i\n", text2, countWords (text2)); 
    printf ("%s - words = %i\n", text2, countWords (text3));
    return 0;
}

int countWords (const char string[]) {
    int i = 0;
    int count = 0;
    while(string[i] != '\0') {
        count = 1;
        if (string[i] == ' ') {
            count++;
        }
        i++;
    }
    return count;
}
