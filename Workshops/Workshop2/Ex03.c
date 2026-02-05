#include <stdio.h>

int main (){
	int n;
	printf("Nhap so nguyen n:");
	while(scanf("%d", &n) !=1 || n <= 0 || n > 10){
		printf("Nhap lai n:");
	}
	int i = 1; 
		while(i <= n){
		printf(" %d", i);
		i++;
	}
	printf("\n");
	i =1;
	while(i <= 10){
		printf("%d x %d = %d\n", n, i, n*i);
		i++;
	}
	return 0;
}