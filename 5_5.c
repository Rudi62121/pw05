#include <stdio.h>
#include <math.h>

double calc(double a, double b) {
    return exp(a) + log(b);
}

int main(void) {
    double a, b;

    while (printf("Enter a and b: "), scanf("%lf %lf", &a, &b) == 2) {
        if (b <= 0) {
            printf("Error: b must be greater than 0 for ln(b)\n");
            continue;
        }
        double result = calc(a, b);
        printf("Result: %.4f\n", result);
    }

    return 0;
}
