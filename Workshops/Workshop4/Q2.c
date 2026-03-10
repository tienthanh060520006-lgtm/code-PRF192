#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 float x1, y1, x2, y2;
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
   double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  printf("%.4f\n", d);
  if(d==0){
  printf("Points are coincident\n");
}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
