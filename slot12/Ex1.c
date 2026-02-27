#include <stdio.h>

// 1. Ham xu ly
int tongUoc(int n) {
    int tong = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) tong += i;
    }
    return tong;
}

// 2. Ham nhap (O giua)
int nhapInt() {
    int soInt;
    printf("nhap n: ");
    // Dung != de so sanh khac
    while(scanf("%d", &soInt) != 1 || soInt <= 0) {
        printf("Nhap sai! Nhap lai so duong: ");
        while(getchar() != '\n'); 
    }
    return soInt; // BAT BUOC PHAI CO DONG NAY
}

// 3. Ham main
int main() {
    int n = nhapInt(); // Goi ham nhap da viet o tren
    
    int kq = tongUoc(n);
    printf("tong uoc cua so %d la %d", n, kq);
    
    return 0;
}