#include <stdio.h>
int main(void) {
    int department, course;
    printf("Department (1=Computing, 2=Business): ");
    scanf("%d", &department);
    printf("Course (1 or 2): ");
    scanf("%d", &course);
    switch (department) {
        case 1:
            switch (course) {
                case 1: printf("Programming in C\n"); break;
                case 2: printf("Databases\n"); break;
                default: printf("Unknown computing course\n");
            }
            break;
        case 2:
            switch (course) {
                case 1: printf("Accounting\n"); break;
                case 2: printf("Marketing\n"); break;
                default: printf("Unknown business course\n");
            }
            break;
        default: printf("Unknown department\n");
    }
    return 0;
}
