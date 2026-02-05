#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap hai so a va b: ");
    while (scanf("%d %d", &a, &b) == 2) {
        int soA = a;
        int soB = b;
        while (b != 0) {
            int du = a % b; 
            a = b;          
            b = du;         
        }
        printf("UCLN cua %d va %d la: %d\n", soA, soB, a);
        printf("\nNhap tiep hai so khac: ");
    }
    return 0;
}