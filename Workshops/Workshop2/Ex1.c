#include <stdio.h>
#include <math.h>
int main() {
    float n;
    printf("Nhap vao n: ");
    while (scanf("%f", &n)!=1 || n<=0 ||n>=1000) {
        printf("Nhap vao n: ");
       //fflush(stdin);
       while(getchar()!='\n');
    }
    printf("Can bac hai la %.2f", sqrt(n));
    return 0;
}
