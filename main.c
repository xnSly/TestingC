#include <stdio.h>

int main() {
    printf("Type either +, -, /, or *\n");

    char operator;

    scanf("%c", &operator);

    printf("Type two whole numbers separated by a space to perform the calculation on.\n");

    long num1;
    long num2;

    scanf("%d %d", &num1, &num2);

    long result;
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("The operator you provided is invalid");
            break;
    }

    printf("%d", result);

    return 0;
}