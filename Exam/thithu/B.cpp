#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n+5][n+5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    printf("%d ", a[i][j]);
                }
            }
            else {
                for (int j = n - 1; j >= 0; j--) {
                    printf("%d ", a[i][j]);
                }
            }
        }

        printf("\n");
    }
}