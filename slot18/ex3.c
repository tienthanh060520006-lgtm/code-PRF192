#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct{

	int x;
	int y;
} point;	
void nhapDiem(point ds[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d%d",&ds[i].x,&ds[i].y);
	}
}
void xuatDiem(point ds[], int n){
	for(int i = 0; i < n; i++){
		printf("%d,%d\n",ds[i].x,ds[i].y);
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int n;
  scanf("%d", &n);

  point ds[n];

  nhapDiem(ds, n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  xuatDiem(ds, n);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}