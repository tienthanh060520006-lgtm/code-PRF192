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
    int digits = 0, letters = 0, others = 0;

    scanf("%[^\n]%*c", str);   

    while(str[i])  {
        if (isdigit(str[i])) digits++;
        else if (isalpha(str[i])) letters++;
        else others++;

        i++;
    }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d\n", others);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}