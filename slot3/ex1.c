#include <stdio.h>

int main() {
    int a = 7;
    int b = 2;
    float kq; 
    printf("%-15s %-15s %-15s %-15s %-15s\n", "A", "Phep tinh", "B", "Bang", "Ket qua");
    printf("--------------------------------------------------------------------------\n");
    kq = a + b;
    printf("%-15d %-15s %-15d %-15s %-15.1f\n", a, "+", b, "=", kq);
    kq = a - b;
    printf("%-15d %-15s %-15d %-15s %-15.1f\n", a, "-", b, "=", kq);
    kq = a * b;
    printf("%-15d %-15s %-15d %-15s %-15.1f\n", a, "*", b, "=", kq);
    kq = (float)a / b;
    printf("%-15d %-15s %-15d %-15s %-15.1f\n", a, "/", b, "=", kq);
    return 0;
}