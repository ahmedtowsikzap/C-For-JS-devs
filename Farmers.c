#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int totalDays = D - ((M1 * D) / (M1 + M2));
        printf("%d\n", totalDays);
    }

    return 0;
}
