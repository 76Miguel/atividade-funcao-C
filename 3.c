#include <stdio.h>

void contador(int n) {
    int i;

    if (n > 0) {
        for (i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    } else {
        for (i = 1; i >= n; i--) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    contador(n);

    return 0;
}
