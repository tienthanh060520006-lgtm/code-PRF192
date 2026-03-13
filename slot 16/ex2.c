#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char c) {
    c = tolower(c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;

    return 0;
}
int countVowel(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (isVowel(*str)) {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char *str;
    char temp[100];

    printf("Nhap vao mot chuoi: ");
    fgets(temp, sizeof(temp), stdin);

    temp[strcspn(temp, "\n")] = '\0';

    str = temp; 

    int result = countVowel(str);

    printf("So luong nguyen am trong chuoi la: %d\n", result);

    return 0;
}
