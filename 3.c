#include <stdio.h>

int main() {
    int id;
    float hours, rate, salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter total worked hours in a month: ");
    scanf("%f", &hours);

    printf("Enter amount received per hour: ");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Employee ID = %d\n", id);
    printf("Salary = %.2f\n", salary);

    return 0;
}
