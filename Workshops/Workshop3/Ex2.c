#include <stdio.h>
void calculate_taxi_fare(float distance) {
    float total_fare = 0;
    if (distance <= 0) {
        printf("So km khong hop le!\n");
        return;
    }
    else if (distance <= 1) {
        total_fare = distance * 15000;
    } 
    else if (distance <= 30) {
        total_fare = (1 * 15000) + (distance - 1) * 12000;
    } 
    else {
        total_fare = (1 * 15000) + (29 * 12000) + (distance - 30) * 10000;
    }

    printf("Quang duong di duoc: %.2f km\n", distance);
    printf("Tong tien cuoc taxi: %.0f dong\n", total_fare);
}

int main() {
    float km;
    printf("Nhap so km : ");
    scanf("%f", &km);
    calculate_taxi_fare(km);

    return 0;
}