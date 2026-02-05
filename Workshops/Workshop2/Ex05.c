#include <stdio.h>
int main() {
    int n;
    int kq = 0;
    n = 1; 
    while (n != 0) {
        printf("Nhap so nguyen duong: ");
        if (scanf("%d", &n) != 1) {
            printf("Vui long nhap so nguyen duong!\n\n");
            break;
        }
        if (n > 0) {
            kq = kq + n; 
        }
        else if (n<0)
        printf("Vui long nhap so nguyen duong!\n");
    }
    printf("Tong cac so nguyen duong la: %d\n", kq);
    return 0;
}