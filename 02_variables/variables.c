#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 23;
    int year;
    year = 2025;

    float price = 19.99;
    double pi = 3.14159265358979; // A double can store around 15 decimal numbers.

    char grade = 'A';
    char name[] = "Leon";
    char food[] = "pizza";

    bool isOnline = true; // 1 == true, 0 == false

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("The price is $%.2f\n", price);
    printf("The value of pi is %.14lf\n", pi);
    printf("Your grade is %c\n", grade);
    printf("Hello %s, your favorite food is %s\n", name, food);

    if (isOnline) {
        printf("You are ONLINE\n");
    } else {
        printf("You are OFFLINE\n");
    }

    return 0;
}