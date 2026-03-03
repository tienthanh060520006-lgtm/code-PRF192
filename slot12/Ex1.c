#include <stdio.h>

int tongUoc(int n) {
    int tong = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) tong += i;
    }
    return tong;
}

int nhapInt() {
    int soInt;
    printf("nhap n: ");
    while(scanf("%d", &soInt) != 1 || soInt <= 0) {
        printf("Nhap sai! Nhap lai so duong: ");
        while(getchar() != '\n'); 
    }
    return soInt; 
}

int main() {
    int n = nhapInt(); 
    
    int kq = tongUoc(n);
    printf("tong uoc cua so %d la %d", n, kq);
    
    return 0;
}