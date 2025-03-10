#include <stdio.h>
#define N 5

int main() {
    int matrix[N][N];
    int n = 1;
    int i1 = 0, i2 = 0, j1 = 0, j2 = 0;
    int i = 0, j = 0;

    while (n <= N * N) {
        matrix[i][j] = n;
        if (i == i1 && j < N - j2 - 1) ++j;
        else if (j == N - j2 - 1 && i < N - i2 - 1) ++i;
        else if (i == N - j2 - 1 && j > j1) --j;
        else  --i;

        if ((i == i1 + 1) && (j == j1) && (j1 != N - j2 - 1)) {
            ++i1;
            ++i2;
            ++j1;
            ++j2;
        }
        ++n;
    }
    
    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++){
            printf("%2d ", matrix[j][i]);
        }
        if (j < N - 1) printf("\n");
    }
    
    return 0;
}