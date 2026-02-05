#include <stdio.h>
int main() {
    int n;
    printf("Nhap mot so de kiem tra : ");
    while (scanf("%d", &n) == 1) {
        if (n < 0) {
            printf("%d khong phai la so chinh phuong .\n", n);
        } else {
            int i = 0;
            int laSoChinhPhuong = 0;
            while (i * i <= n) {
                if (i * i == n) {
                    laSoChinhPhuong = 1;
                    break;
                }
                i++;
            }
            if (laSoChinhPhuong) {
                printf("%d la so chinh phuong .\n", n, i, i, n);
            } else {
                printf("%d khong phai la so chinh phuong.\n", n);
            }
        }
        printf("\nNhap so tiep theo: ");
    }
    return 0;
}