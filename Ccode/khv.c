#include <stdio.h>

int main() {
    float kwh;

    printf("Enter kWh: ");
    scanf("%f", &kwh);

    if (kwh < 1000) {
        printf("Usage is less than 1000 kWh.\n");
    } else if (kwh < 2000) {
        printf("Usage is between 1000 and 2000 kWh.\n");
    } else {
        printf("Usage is 2000 kWh or more.\n");
    }

    return 0;
}
