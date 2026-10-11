#include <stdio.h>

int main(void) {
    double celsius = 25.0;
    double fahrenheit = celsius * 1.8 + 32;
    printf("Temperature in Celsius: %.2f\nTemperature in Fahrenheit: %.2f\n", celsius, fahrenheit);
    return 0;
}
