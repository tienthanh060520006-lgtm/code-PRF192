#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    printf("\nINPUT:\n");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    
    int tong = 0;
   
    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) { 
            tong += i;
        }
    }
    printf("%d", tong); 

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}