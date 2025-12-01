#include <stdio.h>

int main() {
    int distance;
    float fuel, avg;

    printf("Enter total distance (in km): ");
    scanf("%d", &distance);

    printf("Enter total fuel spent (in liters): ");
    scanf("%f", &fuel);

    avg = distance / fuel;

    printf("Average consumption = %.2f km/l\n", avg);
    return 0;
}
