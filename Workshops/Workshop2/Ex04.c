#include <stdio.h>
int main() {
	int n;
	int kq;
	printf("Nhap so nguyen n: ");
	while(scanf("%d", &n) != 1 || n <= 0) {
		printf("Nhap lai: ");
		while (getchar() != '\n');
	}
	while(n > 0) {
		int sodu = n % 10;
		kq = kq * 10 + sodu;
		n = n / 10;
	}
	printf("%d", kq);
	return 0;
}