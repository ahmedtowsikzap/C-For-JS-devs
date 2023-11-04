#include <stdio.h>

void fun(int a) {
    if (a == 1) {
        printf("%d", a);
        return;
    }
    printf("%d ", a);
    fun(a - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}
