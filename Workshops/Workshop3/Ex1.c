#include<stdio.h>
int main(){
	int i, sum = 0;
	for (i=1;i<=5;i++){
		if(i%2==1)
		{
			printf("the odd number is:%d\n", i);
			sum += i;
		}
	}
	printf("sum the odd number is: %d\n", sum);
}