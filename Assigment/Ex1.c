#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("baitap1.txt", "w");
	if(fp==NULL){
		printf("Enrror");
		return 0;
	}
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	fprintf(fp,"Gia tri n: %d", n);
	fclose(fp);
	 printf("\nDa ghi du lieu vao baitap2.txt xong!\n");
	
	
}