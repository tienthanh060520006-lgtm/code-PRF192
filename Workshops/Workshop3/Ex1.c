#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; 
    return 0;     
}

void get_days_in_month(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d nam %d co 31 ngay.\n", month, year);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay.\n", month, year);
            break;
        case 2:
            if (is_leap_year(year))
                printf("Thang 2 nam %d co 29 ngay (Nam nhuan).\n", year);
            else
                printf("Thang 2 nam %d co 28 ngay.\n", year);
            break;
        default:
            printf("Thang khong hop le!\n");
    }
}

int main() {
    int m, y;
    printf("Nhap thang va nam (vi du: 2 2025): ");
    scanf("%d %d", &m, &y);
    
    get_days_in_month(m, y);
    
    return 0;
}