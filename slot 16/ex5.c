#include <stdio.h>


void cyclicSwap(int *n1, int *n2, int *n3) {
    int temp;

    temp = *n1;   
    *n1 = *n3;    
    *n3 = *n2;    
    *n2 = temp;   
}

int main() {
    int a, b, c;

    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nTruoc khi hoan doi: a=%d, b=%d, c=%d\n", a, b, c);

    
    cyclicSwap(&a, &b, &c);

    printf("Sau khi hoan doi:  a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}