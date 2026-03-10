#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * Filters the string to keep only vowel characters.
 * @param str: The input string to be processed in-place.
 */
void filterString(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    system("cls");
    char input[101];

    printf("INPUT:\n");
    if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = 0;
    }
    filterString(input);

    printf("OUTPUT:\n");
    printf("%s\n", input);
    //--FIXED PART
    printf("\n");
    system("pause");
    return(0);
}