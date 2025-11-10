#include <stdio.h>

int main() {
    int n, i;
    double x, result;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);

    double coeff[n + 1];

    printf("Enter the coefficients (a0 to a%d):\n", n);
    for (i = 0; i <= n; i++) {
        scanf("%lf", &coeff[i]);
    }

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    
    result = coeff[n];
    for (i = n - 1; i >= 0; i--) {
        result = result * x + coeff[i];
    }

    printf("The value of the polynomial at x = %.2lf is %.2lf\n", x, result);

    return 0;
}
