#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int A[n], B[n], C[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < n; i++) {
            B[i] = A[i];
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            C[i] = A[i] - B[i];
            if (C[i] < 0) {
                C[i] = -C[i];
            }
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
