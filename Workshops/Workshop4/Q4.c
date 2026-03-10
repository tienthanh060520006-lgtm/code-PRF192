#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
    system("cls");
    printf("INPUT:\n");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    if (scanf("%d", &n) <= 0) return 0;
    int a[n];
    int visited[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        visited[i] = 0;
    }
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not found\n");
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0 && visited[i] == 0) {
                int count = 0;
                for (int j = 0; j < n; j++) {
                    if (a[j] == a[i]) {
                        count++;
                        visited[j] = 1; 
                    }
                }
                printf("%d-%d\n", count, a[i]);
            }
        }
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    system ("pause");
    return(0);
}