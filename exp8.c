#include <stdio.h>
#include <math.h> 
int main() {
    double radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    diameter = 2 * radius;

    circumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
    printf("Diameter: %.2lf\n", diameter);
    printf("Circumference: %.2lf\n", circumference);
    printf("Area: %.2lf\n", area);
    return 0;
}