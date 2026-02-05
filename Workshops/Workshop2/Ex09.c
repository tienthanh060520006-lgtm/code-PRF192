#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int mayChon, nguoiDoan;
    srand(time(NULL)); 
    mayChon = rand() % 10 + 1; 

    printf("--- GAME DOAN SO (1 den 10) ---\n");
    printf("May tinh da chon xong mot so. Moi ban doan!\n");

   
    while (1) {
        printf("Nhap so ban doan: ");
        if (scanf("%d", &nguoiDoan) != 1) {
            printf("Tam biet!\n");
            break;
        }
        if (nguoiDoan == mayChon) {
            printf("Chuc mung! Ban da doan dung so %d.\n", mayChon);
            break; 
        } 
        else if (nguoiDoan < mayChon) {
            printf("Goi y: Lon hon!\n");
        } 
        else {
            printf("Goi y: Nho hon!\n");
        }
    }

    return 0;
}