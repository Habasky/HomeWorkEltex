#include <stdio.h>

int main() {
    int number, k = 0;
    scanf("%d", &number);

    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        unsigned int bit = (number >> i) & 1;
        // printf("%u", bit);
        if (bit == 1) k++;
    }
    printf("%d", k);
    return 0;
}