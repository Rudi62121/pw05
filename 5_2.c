#include <stdio.h>

#define HEIGHT 5

int main(void) {
    int i, j;
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < HEIGHT; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("+");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}
