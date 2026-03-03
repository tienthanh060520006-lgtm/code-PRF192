#include <stdio.h>

void calculate_salary() {
    float hours, rate, total;
    printf("Nhap so gio lam: ");
    while (scanf("%f", &hours) != 1 || hours < 0) {
        printf("Loi! Nhap lai so gio lam: ");
        while(getchar() != '\n'); 
    }
    printf("Nhap muc luong moi gio: ");
    while (scanf("%f", &rate) != 1 || rate < 0) {
        printf("Loi! Nhap lai muc luong (>= 0): ");
        while(getchar() != '\n'); 
    }
    if (hours <= 40) {
        total = hours * rate;
    } else {
        total = (40 * rate) + (hours - 40) * rate * 1.5;
    }
    printf("=> Tong luong thuc nhan: %.0f\n", total);
}

int main() {
    calculate_salary();
    return 0;
}