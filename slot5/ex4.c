#include <stdio.h>

int main() {
    int money;
    int sokwh;
    printf("Nhap so kwh: ");      
    scanf("%d", &sokwh);         
    if (sokwh < 100) {
        money = sokwh * 950;
    } 
    else if (sokwh >= 100 && sokwh < 150) {
        money = sokwh * 1250;
    } 
    else if (sokwh >= 150 && sokwh < 200) {
        money = sokwh * 1350;
    } 
    else {
        money = sokwh * 1550;
    }
    printf("So tien dien la: %d", money);
    return 0;
}