#include <stdio.h>

int Sum(int A[], int N, int index) {
    if (index == N) {
        return 0;
    }

    int remainingSum = calculateSum(A, N, index + 1);
    
    return remainingSum;
}

int main() {
    int n;
    scanf("%d", &n);

    int Arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
    }

    int sum = Sum(Arr, n, 0);

    printf("%d", sum);

    return 0;
}
