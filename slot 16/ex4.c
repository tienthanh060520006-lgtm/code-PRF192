#include <stdio.h>


void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    printf("\nTruoc khi goi ham: a = %d, b = %d\n", a, b);


    swap(&a, &b);

    printf("Sau khi goi ham:  a = %d, b = %d\n", a, b);

    return 0;
}