#include <stdio.h>
#include <string.h>

int main() {
    char item[50];
    double price;
    int quantity;
    char currency = '$';
    double total;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0;

    printf("What's the price for each?: ");
    scanf("%lf", &price);

    printf("How many?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s(s).\n", quantity, item);
    printf("The total is: %c%.2lf\n", currency, total);

    return 0;
}