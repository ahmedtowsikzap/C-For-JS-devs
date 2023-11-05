#include <stdio.h>

int Sum(int A[], int N, int index) {
    if (index == N) {
        return 0;
    }

    int remainingSum = calculateSum(A, N, index + 1);
    
    return remainingSum;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int sum = Sum(A, N, 0);

    printf("%d\n", sum);

    return 0;
}
