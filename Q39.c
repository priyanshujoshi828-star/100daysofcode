#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int digits[10], count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    if (temp == 0) {
        digits[count++] = 0;
    }
    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            digits[count++] = digit;
        }
        temp /= 10;
    }


    for (int i = 0; i < count / 2; i++) {
        int t = digits[i];
        digits[i] = digits[count - 1 - i];
        digits[count - 1 - i] = t;
    }

    for (int i = 0; i < count; i++) {
        product *= digits[i];
    }

    if (count == 0) {
        printf("1 (no odd digits, assume 1)\n");
    } else {
        printf("%lld (", product);
        for (int i = 0; i < count; i++) {
            if (i != 0)
                printf("*");
            printf("%d", digits[i]);
        }
        printf(")\n");
    }

    return 0;
}
