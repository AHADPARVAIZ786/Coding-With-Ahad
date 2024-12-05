#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the value of 'a': ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Not a Quadratic Equation.\n");
        return;
    }

    printf("Enter the value of 'b': ");
    scanf("%f", &b);

    printf("Enter the value of 'c': ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %f and %f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %f + %fi and %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}
