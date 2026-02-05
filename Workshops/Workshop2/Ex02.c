#include<stdio.h>
#include<stdio.h>
int main(){
float n;
int count = 0;
while(count<5){
	printf("nhap vao n: ");
	while (scanf("%f", &n)!=1 || n<=0 ||n>=1000) {
        printf("Nhap vao n: ");
       //fflush(stdin);
       while(getchar()!='\n');
    }
    printf("Can bac hai la %.2f\n", sqrt(n));
    count++;
    }
    printf("\Da xong, xuat sac");
    return 0;
    }
