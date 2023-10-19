#include <stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++) {
        char s[10001];
        scanf("%s", s);

        int capital = 0;
        int smaller = 0;
        int digits = 0;

        for (int i = 0; i<strlen(s); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                capital++;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                smaller++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                digits++;
            }
        }

        printf("%d %d %d\n", capital, smaller, digits);
    }

    return 0;
}
