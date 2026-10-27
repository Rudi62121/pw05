#include <stdio.h>

void main() {
    unsigned long num = 111260283;
    short K = 0;

    int var41 = (num % 30) + 1;
    int var42 = ((num + (K + 6)) % 30) + 1;
    int var43 = ((num + (K + 12)) % 30) + 1;
    int var44 = ((num + (K + 18)) % 30) + 1;
    int var45 = ((num + (K + 22)) % 30) + 1;

    printf("variant 5.1: %d\nvariant 5.2: %d\nvariant 5.3: %d\nvariant 5.4: %d\nvariant 5.5: %d\n", var41, var42, var43, var44, var45);
}