#include <stdio.h>
#include <math.h>
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void find_primes() {
    int a, b, count = 0; 
    printf("Nhap khoang [a, b]: ");
    scanf("%d %d", &a, &b);
    printf("Cac so nguyen to trong khoang [%d, %d] la: ", a, b);
    for (int i = a; i <= b; i++) {
        
        if (i > 2 && i % 2 == 0) continue; 

        if (is_prime(i)) {
            printf("%d ", i);
            count++; 
        }
    }
    if (count == 0) {
        printf("Khong co so nguyen to nao!");
    }
    printf("\n");
}
int main() {
    find_primes();
    return 0;
}