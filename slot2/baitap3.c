#include <stdio.h>

int main() {
    // Khai bao bien so thuc a, b va khoi tao gia tri
	 float a =5, b = 10.216;

    //  Khai bao bien kq la ket qua cua a + B
    float kq = a + b;
    printf("gia tri cua a la %.0f\n", a);
    printf("gia tri cua b la %.3f\n", b);
    printf("%0.f + %.3f = %.2f\n", a, b, kq);

    return 0;
}