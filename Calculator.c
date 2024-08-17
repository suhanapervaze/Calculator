#include <stdio.h>

int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
            break;
        case '/':
            if (second != 0.0)
                printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
            else
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator.");
    }

    return 0;
}
