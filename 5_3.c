#include <stdio.h>

int main(void) {
    int N;

    while (1) {
        printf("Enter N: ");
        if (scanf("%d", &N) != 1 || N <= 0) {
            break;
        }

        double sum = 0.0;
        for (int i = 1; i <= N; i++) {
            double power_of_two = 1.0;
            for (int j = 0; j < i; j++) {
                power_of_two *= 2.0;
            }
            sum += (double)(i * i) / power_of_two;
        }

        printf("SUM: %.6f\n", sum);
    }

    return 0;
}
