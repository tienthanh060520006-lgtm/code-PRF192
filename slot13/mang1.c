#include <stdio.h>
#include <math.h>
void doubleX(int x) {
    x = x + x;
}
void doubleX2(int *p) {
    *p = *p + *p;
}
void inputArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
      while (scanf("%d", &a[i]) != 1) {
    printf("Loi! Vui long nhap lai so nguyen cho a[%d]: ", i);
       while (getchar() != '\n');
     }
    }
}
void outputArr(int a[], int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int countPrimes(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            count++;
        }
    }
    return count;
}
int main() {
    int x = 10;
    printf("Gia tri ban dau cua x = %d\n", x);
    doubleX2(&x); 
    printf("Gia tri x sau khi doubleX2 = %d\n", x);
    printf("---------------------------\n");
    int n;
    int a[100]; 
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    if (n > 0 && n <= 100) {
        inputArr(a, n);
        outputArr(a, n);

        int count = countPrimes(a, n);
        printf("Mang co %d so nguyen to.\n", count);
    } else {
        printf("So luong phan tu khong hop le!\n");
    }
    return 0;
}