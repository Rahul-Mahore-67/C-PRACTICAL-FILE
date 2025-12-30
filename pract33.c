#include <stdio.h>

// Function declaration
void factorial(int n, long long *result);

int main() {
    int num;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call (call by reference)
    factorial(num, &fact);

    printf("Factorial of %d is %lld\n", num, fact);

    return 0;
}

// Function definition
void factorial(int n, long long *result) {
    int i;
    *result = 1;

    for (i = 1; i <= n; i++) {
        *result = (*result) * i;
    }
}