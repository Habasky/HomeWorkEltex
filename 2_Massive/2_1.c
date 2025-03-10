#include <stdio.h>
#define N 5

int main() {
    int matrix[N][N];
    int n = 1;
    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++){
            matrix[j][i] = n++;
        }
    }
    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++){
            printf("%2d ", matrix[j][i]);
        }
        if (j < N - 1) printf("\n");
    }
    
    return 0;
}