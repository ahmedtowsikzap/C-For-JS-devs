#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

      if (n != m) {
        printf("NO\n");
        return 0;
    }

    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int total = 1;

    for (int i = 0; i < n; i++) {
        if (matrix[i][i] != 1) {
            total = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (matrix[i][n - i -1] != 1) {
            total = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i != j && j != (n - i - 1) && matrix[i][j] != 0) {
                total = 0;
                break;
            }
        }
    }

    if (total) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
