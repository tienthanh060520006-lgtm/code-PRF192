#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;

    printf("Nhap vao n: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao tung phan tu cua mang: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    fp = fopen("baitap2.txt", "w");
    if (fp == NULL) {
        printf("Loi: Khong the tao file!");
        return 1;
    }

    fprintf(fp, "%d\n", n);

    for(i = 0; i < n; i++) {
        fprintf(fp, "%d ", a[i]);
    }
    fclose(fp);
    printf("\nDa ghi du lieu vao baitap2.txt xong!\n");

    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) {
        printf("Loi: Khong the mo file de doc!");
        return 1;
    }

    int n_file;
  
    fscanf(fp, "%d", &n_file);
    printf("\nSo luong phan tu doc duoc tu file: %d\n", n_file);
  
    int b[n_file];
    printf("Cac phan tu trong mang la: ");
    for(i = 0; i < n_file; i++) {
        fscanf(fp, "%d", &b[i]);
        printf("%d ", b[i]);
    }

    fclose(fp);
    return 0;
}