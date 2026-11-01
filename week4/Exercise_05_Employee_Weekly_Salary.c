#include <stdio.h>
int main(void) {
    float hours, salary;
    for (int i = 1; i <= 4; i++) {
        printf("Hours for employee %d: ", i);
        scanf("%f", &hours);
        if (hours <= 40) salary = hours * 12;
        else salary = 40 * 12 + (hours - 40) * 18;
        printf("Weekly salary: %.2f\n", salary);
    }
    return 0;
}
