#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int positive_sum = 0;
    int negative_sum = 0;
    int num;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);

        
    }
    if (num > 0) {
            positive_sum = positive_sum+num;
        } else if (num < 0) {
            negative_sum = negative_sum+num;
        }

    printf("%d ", positive_sum);
    printf("%d ", negative_sum);

    return 0;
}
