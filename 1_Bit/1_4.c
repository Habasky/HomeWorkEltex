#include <stdio.h>

int main() {
    int number;
    int byte;

    scanf("%d", &number);
    
    if (number < 0) number *= -1;

    scanf("%d", &byte);

    if (byte < 0) byte = 0;
    if (byte > 255) byte = 255;

    number &= ~(0xFF << 16);
    number |= (byte & 0xFF) << 16;


    printf("%d\n", number);
    return 0;
}