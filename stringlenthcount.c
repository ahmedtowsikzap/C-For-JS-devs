#include <stdio.h>

int my_len(char str[]) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int main() {
    char s[] = "Hello";
    int length = my_len(s);
    printf("%d\n", length);
    return 0;
}
