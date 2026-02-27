#include <stdio.h>
int timMax(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}
int nhapInt() {
    int soInt;
    printf("nhap so: ");
    while(scanf("%d", &soInt) != 1 ) {
        printf("nhap lai so duong: ");
        while(getchar() != '\n'); 
    }
    return soInt;
}
int main() {
    int a = nhapInt();
    int b = nhapInt();
    int c = nhapInt();
    
    int kq = timMax(a, b, c);
    printf("so lon nhat la %d", kq);
    return 0;
}