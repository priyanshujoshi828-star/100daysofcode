#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = (i == 1) ? 1 : 2 * i;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
