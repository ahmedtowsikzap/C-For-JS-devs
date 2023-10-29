#include <stdio.h>

int my_abs(int num) {
    return num * -1;
}

int main() {
    int num;
    scanf("%d", &num);

    int abs_value = my_abs(num);
    printf("%d\n", abs_value);

    return 0;
}
