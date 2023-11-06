#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char rounds[100001];
        scanf("%s", rounds);

        int tiger = 0;
        int pathaan = 0;

        for (int i = 0; i < n; i++) {
            if (rounds[i] == 'T') {
                tiger++;
            } else if (rounds[i] == 'P') {
                pathaan++;
            }
        }

        if (tiger > pathaan) {
            printf("Tiger\n");
        } else if (pathaan > tiger) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
