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
  fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	 	if(str[len-1] == '\n'){
      	str[len-1] = '\0';
      	len--;
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 	for (int i = len - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}