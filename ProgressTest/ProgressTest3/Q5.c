#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findDifference(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
if ( n <= 0) return 0;
int maximum = arr[0];
int minimum = arr[0];
for(int i = 1; i < n; i++){
	if(arr[i] > maximum){
		maximum = arr[i];
	}

    if(arr[i] < minimum){
    	minimum = arr[i];
	}
} return maximum - minimum;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
 if( scanf("%d", &n) != 1 )
return 0;
int arr[n];
for (int i = 0; i < n; i++){
	scanf("%d", &arr[i]);
}  
  int result = findDifference(arr, n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
   printf("%d\n", result);
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
