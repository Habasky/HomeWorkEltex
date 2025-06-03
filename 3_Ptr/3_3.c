#include <stdio.h>

int main(void) {

    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *data_ptr = data;

    for(int i = 0; i < 10; i++){
        printf("%d ", *(data_ptr + i));
    }

    return 1;
}