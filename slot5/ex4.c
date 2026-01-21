#include <stdio.h>

int main() {
    int sokwh;
    int money;

    printf("Nhap so kwh: ");
    scanf("%d", &sokwh);

    if (sokwh <= 100) {
        money = sokwh * 950;
    } 
    else if (sokwh <= 150) {
        money = (100 * 950) + (sokwh - 100) * 1250;
    } 
    else if (sokwh <= 200) {
        money = (100 * 950) + (50 * 1250) + (sokwh - 150) * 1350;
    } 
    else {
        money = (100 * 950) + (50 * 1250) + (50 * 1350) + (sokwh - 200) * 1550;
    }

    printf("Tong tien dien phai tra la: %d VND\n", money);

    return 0;
}