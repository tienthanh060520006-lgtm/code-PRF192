#include <stdio.h>
int main() {
    int n;
    printf("Nhap so thap phan: ");
    while (scanf("%d", &n) == 1) {
        long long nhiPhan = 0;
        long long bacMu = 1;
        int tam = n;
        if (n == 0) {
            printf("He nhi phan: 0");
        } if (n < 0){
        	printf("Sai dinh dang!");
		} else {
            
            while (tam > 0) {
                int du = tam % 2;
                nhiPhan = nhiPhan + (du * bacMu); 
                tam = tam / 2;
                bacMu = bacMu * 10;
            }
            printf("He nhi phan cua %d la: %lld", n, nhiPhan);
        }
        printf("\n\nNhap tiep : ");
    }
    return 0;
}