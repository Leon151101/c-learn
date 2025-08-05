#include <stdio.h>
#include <string.h>

int main() {
    int age;
    double gpa;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // White space in the beginning ignores any leading white spaces including \n

    getchar(); // Removes \n from the input buffer
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Removes \n from the name variable

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2lf\n", gpa);
    printf("%c\n", grade);

    return 0;
}