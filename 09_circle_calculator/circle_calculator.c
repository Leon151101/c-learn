#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    double area;
    double surfaceArea;
    double volume;
    const double PI = 3.14159;

    printf("Enter the radius (in cm): ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4/3.0) * PI * pow(radius, 3);

    printf("Area: %.2lfcm^2\n", area);
    printf("Surface area: %.2lfcm^2\n", surfaceArea);
    printf("Volume: %.2lfcm^3\n", volume);

    return 0;
}