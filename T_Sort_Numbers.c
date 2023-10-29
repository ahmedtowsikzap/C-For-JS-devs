#include <stdio.h>

int main() {
    int A, B, C;
    
    scanf("%d %d %d", &A, &B, &C);

    int arr[3] = {A, B, C};

    for (int i = 0; i < 3-1; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i=0; i<3; i++){

        printf("%d\n", arr[i]);
    }
    printf("\n%d\n%d\n%d\n", A, B, C);

    return 0;
}
