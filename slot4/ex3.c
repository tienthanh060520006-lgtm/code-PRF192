#include <stdio.h>

int main() {
    float n;
    int phanNguyen;
    float phanThuc;

    printf("Nhap so thuc: ");
    scanf("%f", &n); 

    phanNguyen = (int)n;
    phanThuc = n - phanNguyen;
	printf("Gia tri da nhap: %.4f\n", n);
    printf("Phan nguyen la: %d\n", phanNguyen);
    printf("Phan thuc la: %.4f\n", phanThuc);
    return 0;
}