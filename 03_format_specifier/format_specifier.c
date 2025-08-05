#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Leon";
    bool isOnline = true;

    printf("%d\n", age);        // %d: int, bool
    printf("%.2f\n", price);    // %f: float, (double)
    printf("%.10lf\n", pi);     // %lf: double
    printf("%c\n", currency);   // %c: char
    printf("%s\n", name);       // %s: char[]
    printf("%d\n", isOnline);

    // %3d: Specifies the minimum amount of characters printed to 3 (  1) or (1  ) for "%-3d" 
    // %03d: A 0 in front fills all empty spaces with 0; (001) or (100) for "%-03d"
    // %+d: Outputs a + or - before the number; (+100) or (-100)  
    
    // %6f: Specifies the minimum amount of characters printed to 6 (  1.23) or (1.23  ) for "%-6f"
    // %.2f: Specifies the amount of decimal numbers to 2 (default is 6) Note: This will round the output
    // %+f: Outputs a + or - before the number; (+1.23) or (-1.23)  

    return 0;
}