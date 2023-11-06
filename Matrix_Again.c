#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    // R
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        if (j != m - 1) {
            printf("%d ", matrix[n - 1][j]);
        } else {
            printf("%d\n", matrix[n - 1][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d ", matrix[i][m - 1]);
        } else {
            printf("%d", matrix[i][m - 1]);
        }
    }

    return 0;
}
