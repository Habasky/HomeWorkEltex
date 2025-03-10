#include <stdio.h>
#define N 10

int main() {
    int data[N];
    int n;
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &n);
        data[i] = n;
    }
    
    for(int i = N - 1; i >= 0; i--) {
            printf("%d ", data[i]);
    }

    return 0;
}