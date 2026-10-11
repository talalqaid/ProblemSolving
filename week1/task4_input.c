#include <stdio.h>

int main(void) {
    double celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    printf("Temperature in Celsius: %.2f\nTemperature in Fahrenheit: %.2f\n", celsius, celsius * 1.8 + 32);
    return 0;
}
