#include <stdio.h>

void suma(int a, int b) {
    int c;
    c = a + b;

    printf("%d", c);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    suma(a, b);
    return 0;
}
