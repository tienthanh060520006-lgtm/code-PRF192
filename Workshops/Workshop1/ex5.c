#include <stdio.h>

int main() {
    float sokm, giatien = 0;
    int thoigiancho;
    int kq;

    
    printf("nhap so km: ");
    kq = scanf("%f", &sokm);
    if (kq != 1 || sokm < 0) {
        printf("Nhap sai roi!\n");
        return 0; 
    }

    
    printf("nhap thoi gian cho: ");
    kq = scanf("%d", &thoigiancho);
    if (kq != 1 || thoigiancho < 0) {
        printf("Nhap sai roi!\n");
        return 0;
    }

    
    if (sokm <= 0.5) {
        giatien = 12000;
    } 
    else if (sokm <= 30) {
        giatien = 12000 + (sokm - 0.5) * 15000;
    } 
    else {
        giatien = 12000 + (29.5 * 15000) + (sokm - 30) * 12000;
    }

    if (thoigiancho > 5) {
        giatien = giatien + (thoigiancho - 5) * 1000;
    }

  
    printf("\n%-15s %-15s %-15s\n", "So km", "So phut cho", "Tong tien");
    printf("%-15.1f %-15d %-15.0f VND", sokm, thoigiancho, giatien);

    return 0;
}