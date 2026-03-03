#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play_game() {
    int secret, guess, attempts = 0;
    const int MAX_ATTEMPTS = 7; 
    srand(time(0));
    secret = rand() % 100 + 1;
    printf("--- GAME DOAN SO TU 1 DEN 100 (Toi da %d luot) ---\n", MAX_ATTEMPTS);
    while (attempts < MAX_ATTEMPTS) {
        printf("\nLuot thu %d. Nhap so ban doan: ", attempts + 1);
        scanf("%d", &guess);
        if (guess < 1 || guess > 100) {
            printf("=> Ngoai pham vi! Nhap lai (khong mat luot).\n");
            continue; 
    }
        attempts++; 
        if (guess == secret) {
            printf("=> CHUC MUNG! Ban da thang cuoc.\n");
            break;
        }
        if (guess > secret) {
            printf("=> So ban chon LON hon so bi mat.\n");
        } else {
            printf("=> So ban chon NHO hon so bi mat.\n");
        }
        if (attempts == MAX_ATTEMPTS) {
            printf("\n=> Ban da het %d luot. Game Over! So dung la: %d\n", MAX_ATTEMPTS, secret);
        }
    }
}
int main() {
    play_game();
    return 0;
}