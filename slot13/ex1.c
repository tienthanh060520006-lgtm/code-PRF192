#include <stdio.h>
#define MAX 100
void addValue(int arr[], int *size);
void searchValue(int arr[], int size);
void removeFirst(int arr[], int *size);
void removeAll(int arr[], int *size);
void printArray(int arr[], int size);
void printSorted(int arr[], int size, int ascending);
int main() {
    int arr[MAX];
    int size = 0;
    int choice;
    do {
        printf("\n========== MENU QUAN LY MANG ==========\n");
        printf("1- Them mot gia tri\n");
        printf("2- Tim kiem mot gia tri\n");
        printf("3- Xoa gia tri dau tien tim thay\n");
        printf("4- Xoa tat ca cac gia tri trung khop\n");
        printf("5- In mang hien tai\n");
        printf("6- In mang tang dan (khong doi vi tri goc)\n");
        printf("7- In mang giam dan (khong doi vi tri goc)\n");
        printf("Bam phim khac de Thoat\n");
        printf("Lua chon cua ban: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1: addValue(arr, &size); break;
            case 2: searchValue(arr, size); break;
            case 3: removeFirst(arr, &size); break;
            case 4: removeAll(arr, &size); break;
            case 5: 
                printf("Mang hien tai: ");
                printArray(arr, size); 
                break;
            case 6: printSorted(arr, size, 1); break;
            case 7: printSorted(arr, size, 0); break;
            default: printf("Tam biet!\n"); return 0;
        }
    } while (1);

    return 0;
}
void addValue(int arr[], int *size) {
    if (*size < MAX) {
        printf("Nhap gia tri can them: ");
        scanf("%d", &arr[*size]);
        (*size)++;
        printf("Da them thanh cong.\n");
    } else {
        printf("Mang da day (toi da 100 phan tu)!\n");
    }
}
void searchValue(int arr[], int size) {
    int val, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &val);
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            printf("Tim thay tai vi tri (index): %d\n", i);
            found = 1;
        }
    }
    if (!found) printf("Khong tim thay gia tri %d trong mang.\n", val);
}
void removeFirst(int arr[], int *size) {
    int val, i, j;
    printf("Nhap gia tri can xoa (lan dau): ");
    scanf("%d", &val);
    for (i = 0; i < *size; i++) {
        if (arr[i] == val) {
            for (j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            printf("Da xoa phan tu dau tien tim thay.\n");
            return;
        }
    }
    printf("Khong tim thay gia tri de xoa.\n");
}
void removeAll(int arr[], int *size) {
    int val, count = 0;
    printf("Nhap gia tri can xoa tat ca: ");
    scanf("%d", &val);
    for (int i = 0; i < *size; i++) {
        if (arr[i] == val) {
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            i--;
            count++;
        }
    }
    printf("Da xoa %d phan tu trung khop.\n", count);
}
void printArray(int arr[], int size) {
    if (size == 0) {
        printf("Mang dang trong.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void printSorted(int arr[], int size, int ascending) {
    if (size == 0) {
        printf("Mang trong, khong co gi de in.\n");
        return;
    }
    int temp[MAX];
    for (int i = 0; i < size; i++) temp[i] = arr[i];
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            int condition = ascending ? (temp[j] > temp[j+1]) : (temp[j] < temp[j+1]);
            if (condition) {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    printf("Ket qua (%s): ", ascending ? "Tang dan" : "Giam dan");
    for (int i = 0; i < size; i++) printf("%d ", temp[i]);
    printf("\n(Luu y: Vi tri trong mang goc khong thay doi)\n");
}