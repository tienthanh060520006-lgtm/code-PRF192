#include <stdio.h>
int main() {
    float cc, gk, ck, tong;
    char rank;
    int kq;

    printf("Nhap diem chuyen can: ");
    kq = scanf("%f", &cc);
    if (kq != 1 || cc < 0 || cc > 10) {
        printf("Diem khong hop le!\n");
        return 0;
    }

    printf("Nhap diem giua ky: ");
    kq = scanf("%f", &gk);
    if (kq != 1 || gk < 0 || gk > 10) {
        printf("Diem khong hop le!\n");
        return 0;
    }

    printf("Nhap diem cuoi ky: ");
    kq = scanf("%f", &ck);
    if (kq != 1 || ck < 0 || ck > 10) {
        printf("Diem khong hop le!\n");
        return 0;
    }

    tong = cc * 0.1 + gk * 0.3 + ck * 0.6;

    if (tong >= 8.5) rank = 'A';
    else if (tong >= 7.0) rank = 'B';
    else if (tong >= 5.5) rank = 'C';
    else if (tong >= 4.0) rank = 'D';
    else rank = 'F';

    printf("\n%-10s %-10s %-10s %-10s %-10s\n", "CC", "GK", "CK", "TONG", "RANK");
    printf("%-10.1f %-10.1f %-10.1f %-10.1f %-10c\n", cc, gk, ck, tong, rank);

    if (rank != 'F' && cc >= 4.0 && gk >= 4.0 && ck >= 4.0) {
        printf("\n=> Du dieu kien tot nghiep!");
    } else {
        printf("\n=> Khong du dieu kien tot nghiep.");
    }

    return 0;
}