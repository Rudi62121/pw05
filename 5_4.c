#include <stdio.h>

int main(void) {
    double arr[8];
    double a = 1.0;
    double d = 2.0;

    for (int i = 0; i < 8; i++) {
        arr[i] = a + i * d;
    }

    for (int i = 0; i < 8; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    for (int i = 7; i >= 0; i--) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
