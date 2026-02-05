#include <stdio.h>

int main() {
    long long soDu = 1000000000;
    int tienRut;
    printf("--- BANKING ---\n");
    printf("So du hien tai cua ban la: %lld VND\n", soDu);
    while (soDu > 0) {
        printf("\nNhap so tien ban muon rut: ");
    
        if (scanf("%d", &tienRut) != 1 || tienRut == 0) {
            printf("Cam on ban da su dung dich vu. Tam biet!\n");
            break;
        }
        if (tienRut < 0) {
            printf("So tien khong kha dung. Vui long nhap lai!\n");
        } 
        else if (tienRut > soDu) {
            printf("Giao dich that bai! So du khong du (Con lai: %lld VND).\n", soDu);
        } 
        else {
            soDu = soDu - tienRut;
            printf("Giao dich thanh cong! Ban da rut: %d VND\n", tienRut);
            printf("So du con lai: %lld VND\n", soDu);
        }
        if (soDu == 0) {
            printf("\nTai khoan cua ban da het tien. Vong lap se ket thuc!\n");
        }
    }

    return 0;
}