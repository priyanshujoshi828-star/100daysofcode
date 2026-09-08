#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    sprintf(str, "%lld", num);

    int len = strlen(str);
    int start = 0;

    if (str[0] == '-') start = 1;

    char temp = str[start];
    str[start] = str[len - 1];
    str[len - 1] = temp;

    long long result;
    sscanf(str, "%lld", &result);

    printf("%lld\n", result);

    return 0;
}
