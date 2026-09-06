#include <stdio.h>

int main() {
    int n;
    int binary[32];
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        binary[count] = n % 2;
        n /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
