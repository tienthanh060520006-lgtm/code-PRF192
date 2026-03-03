#include <stdio.h>
void show_menu() {
    printf("\n--- MAY TINH BO TUI ---\n");
    printf("1. Phep cong (+)\n");
    printf("2. Phep tru (-)\n");
    printf("3. Phep nhan (*)\n");
    printf("4. Phep chia (/)\n");
    printf("0. Thoat chuong trinh\n");
    printf("-----------------------\n");
    printf("Chon phep tinh: ");
}
void processor() {
    int choice;
    float a, b;
    do {
        show_menu();
        scanf("%d", &choice);
        if (choice == 0) {
            printf("Dang thoat chuong trinh...\n");
            break; 
        }
        if (choice >= 1 && choice <= 4) {
            printf("Nhap so thu nhat: ");
            scanf("%f", &a);
            printf("Nhap so thu hai: ");
            scanf("%f", &b);
        }
        switch (choice) {
            case 1:
                printf("=> Ket qua: %.2f + %.2f = %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("=> Ket qua: %.2f - %.2f = %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("=> Ket qua: %.2f * %.2f = %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0)
                    printf("=> Ket qua: %.2f / %.2f = %.2f\n", a, b, a / b);
                else
                    printf("=> Loi: Khong the chia cho 0!\n");
                break;
            default:
                printf("=> Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 0);
}
int main() {
    processor();
    return 0;
}