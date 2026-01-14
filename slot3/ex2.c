#include <stdio.h>

int main() {
    char kt = 'A'; 

    printf("%-15s %-15s %-15s %-15s %-15s\n", "Ky tu", "Thap phan", "Hex", "Octal", "Kich thuoc");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("%-15c %-15d %-15x %-15o %-15zu\n", kt, kt, kt, kt, sizeof(kt));
    return 0;
}