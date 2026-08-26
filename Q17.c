// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, real, imaginary;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f", root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f", root1);
    }
    else {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);

        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
        printf("Root 2 = %.2f - %.2fi", real, imaginary);
    }

    return 0;
}
