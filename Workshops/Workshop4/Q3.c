#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    printf("INPUT:\n");
    // -- @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int n;
    int evens[100];
    int count = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
    } else {
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0) {
                evens[count++] = a[i];
            }
        }
        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (evens[i] < evens[j]) {
                    int temp = evens[i];
                    evens[i] = evens[j];
                    evens[j] = temp;
                }
            }
        }
    }
    // -- Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    
    if (n <= 0) {
        printf("Invalid input\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("%d\n", evens[i]);
        }
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    system ("pause");
    return(0);
}