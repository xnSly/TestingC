#include <stdio.h>
#include <string.h>

void clearInputBuffer(void) {
    int c;

    while ((c = getchar()) != '\n' && c != EOF) { }
}

double calculateEquation(char operator[5], double num1, double num2) {
    double result = 0.0;

    if (strcmp(operator, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(operator, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(operator, "*") == 0) {
        result = num1 * num2;
    } else if (strcmp(operator, "/") == 0) {
        result = num1 / num2;
    }

    return result;
}

int main(void) {
    while (1) {
        printf("Type one of the following operators: + - / *\n");

        char operator[5];

        if (fgets(operator, sizeof(operator), stdin) == NULL) {
            break;
        }

        operator[strcspn(operator, "\n")] = 0;

        if (strlen(operator) == 1) {
            printf("Type two whole numbers separated by a space to perform the calculation on.\n");

            double num1;
            double num2;

            scanf("%lf %lf", &num1, &num2);

            clearInputBuffer();

            double result = calculateEquation(operator, num1, num2);

            printf("Calculation: %lf %s %lf\n", num1, operator, num2);
            printf("Result: %lf\n", result);
        } else {
            printf("Invalid operator, please try again.");
        }
    }

    printf("Thank you for using my C calculator!");

    return 0;
}