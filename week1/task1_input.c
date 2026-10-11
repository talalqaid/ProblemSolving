#include <stdio.h>

int main(void) {
    int age;
    char grade;
    double height;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Enter your height: ");
    scanf("%lf", &height);
    printf("Student Information\nAge: %d\nGrade: %c\nHeight: %.2f metres\n", age, grade, height);
    return 0;
}
