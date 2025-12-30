#include <stdio.h>

void calculate(int num1, int num2, int *sum, int *diff, int *prod, float *div) {
    *sum = num1 + num2;
    *diff = num1 - num2;
    *prod = num1 * num2;
    *div = (float)num1 / num2;
}

int main() {
    int n1, n2, sum, diff, prod;
    float div;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    calculate(n1, n2, &sum, &diff, &prod, &div);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Division: %.2f\n", div);

    return 0;
}