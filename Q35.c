#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int first = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!first)
                printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
