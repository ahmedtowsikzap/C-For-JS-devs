#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int D;
        D = M / (A * B * C);

        if (M == A * B * C * D) {
            printf("%lld\n", D);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
