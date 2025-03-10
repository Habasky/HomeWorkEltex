#include <stdio.h>
#define N 5

int main() {
    int matrix[N][N];
    int x = N - 1;

    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++){
            if (i<x) matrix[j][i] = 0;
            else matrix[j][i] = 1;
        }
        x--;
    }


    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++){
            printf("%d ", matrix[j][i]);
        }
        if (j < N - 1) printf("\n");
    }
    
    return 0;
}