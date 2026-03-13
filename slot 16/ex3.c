#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n, i;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int a[n]; 


    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for (i = 0; i < n / 2; i++) {
        swap(&a[i], &a[n - 1 - i]);
    }


    printf("\nMang sau khi dao nguoc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}