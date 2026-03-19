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
    int i = 0;
    int words = 0;
  	scanf("%[^\n]%*c", str);
  	while (str[i]) {
        if ((str[i] == ' ' || str[i] == '\t') && str[i+1] != ' ') {
            words++;
        }
        i++;
    }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (str[i-1] != ' ') {
        words++;}
	printf("%d\n", words);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}