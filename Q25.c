#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter expression (num1 num2 operator): ");
    scanf("%f %f %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.0f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.0f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.0f\n", result);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero\n");
            else {
                result = num1 / num2;
                printf("%.0f\n", result);
            }
            break;
        case '%':
            if ((int)num2 == 0)
                printf("Error: Division by zero\n");
            else {
                result = (int)num1 % (int)num2;
                printf("%.0f\n", result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
