#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
 
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}
int countVowel(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int result = countVowel(str);
    printf("So luong nguyen am trong chuoi la: %d\n", result);
    return 0;
}