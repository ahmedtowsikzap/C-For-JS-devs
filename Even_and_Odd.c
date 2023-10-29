#include <stdio.h>

void odd_even() {
    int n;
    scanf("%d", &n); 

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totaleven = 0, totalodd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            totaleven++;
        } else {
            totalodd++;
        }
    }

    printf("%d %d\n", totaleven, totalodd);
}

int main() {
    odd_even();

    return 0;
}
