#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--) {

        unsigned int bit = (number >> i) & 1;
        printf("%u", bit);
    }
    
    return 0;
}