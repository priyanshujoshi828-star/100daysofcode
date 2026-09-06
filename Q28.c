#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int first = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld (", product);

    for (int i = 2; i <= n; i += 2) {
        if (!first)
            printf(" * ");
        printf("%d", i);
        first = 0;
    }
    printf(")\n");

    return 0;
}
