#include <stdio.h>

// Function to classify a triangle based on its side lengths
char* classifyTriangle(float a, float b, float c) {
    // Validate positive sides
    if (a <= 0 || b <= 0 || c <= 0)
        return "Invalid: sides must be positive";

    // Validate triangle inequality
    if ((a + b <= c) || (b + c <= a) || (a + c <= b))
        return "Invalid: does not satisfy triangle inequality";

    // Classification
    if (a == b && b == c)
        return "Equilateral";
    else if (a == b || b == c || a == c)
        return "Isosceles";
    else
        return "Scalene";
}

int main() {
    float a, b, c;

    printf("Enter side A: ");
    scanf("%f", &a);
    printf("Enter side B: ");
    scanf("%f", &b);
    printf("Enter side C: ");
    scanf("%f", &c);

    printf("The triangle is: %s\n", classifyTriangle(a, b, c));

    return 0;
}
