#include <stdio.h>
#define PI 3.14  // PI tu define kori disu

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;  // Area formula add kori dilu

    printf("Area of the circle: %.2f\n", area);

    return 0;
}
