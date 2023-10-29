#include <stdio.h>

void change_last_element(int arr[], int size) {
    
        arr[size - 1] = 100;
}

int main() {
    int n;
    scanf("%d", &n);

    int my_array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &my_array[i]);
    }

    change_last_element(my_array, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }

    return 0;
}
