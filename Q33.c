#include <stdio.h>

int main() {
    int n, original, digit, digits = 0;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power 'digits'
    temp = n;
    while (temp != 0) {
        digit = temp % 10;

        // integer power: digit ^ digits
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
