#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("INPUT:\n");
    
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    float a, b;
    if (scanf("%f %f", &a, &b) != 2) {
        printf("\nOUTPUT:\n");
        printf("Invalid input\n");
    } else {
        double result = pow((a * a) + (b * b), 1.0/3.0);
        // Fixed Do not edit anything here.
        printf("\nOUTPUT:\n");
        // @STUDENT: WRITE YOUR OUTPUT HERE:
        printf("%.2f\n", result);
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}