#include <stdio.h>

int main() {
    int number;
    unsigned char new_byte_value;


    scanf("%d", &number);
    scanf("%hhu", &new_byte_value);

    if (new_byte_value > 255) {
        return 1;
    }

    unsigned char *byte_ptr = (unsigned char*)&number;

    byte_ptr[2] = new_byte_value; 

    printf("%d", number);
    
    return 0;
}