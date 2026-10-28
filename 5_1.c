#include <stdio.h>

int main(void) {
    double A = 1.0;
    double B = 5.0;
    double H = 0.5;
    double x;
    int iteration = 1;

    printf("Iter\tX\t\tY\n");
    for (x = A; x <= B; x += H) {
        double y = 1.0 / x;
        printf("%d\t%.4f\t%.4f\n", iteration, x, y);
        iteration++;
    }

    return 0;
}
