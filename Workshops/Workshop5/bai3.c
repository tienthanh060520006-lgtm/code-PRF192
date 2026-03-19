#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	char str[100];
	scanf("%s", str);
  	int len = strlen(str);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < len/2; ++i) {
        if (str[i] != str[len-1-i]) {
            printf("No\n");
            return 0; // Exit the program as string is not palindrome.
        }
     }
    printf("Yes\n");
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}