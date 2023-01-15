#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 2; i++) {
        if (i == 0) {
            for (int j = 0; j < n; j++) {
                printf("* ");
            }
        }
        else if (i < n - 3) {
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == n - 1) {
                    printf("* ");
                }
                else printf("  ");
            }
        }
        else if (i == n - 3) {
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == 1 || j == n - 2 || j == n - 1) {
                    printf("* ");
                }
                else printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n - 1; i++) {
        printf("  ");
        for (int j = 0; j < n - 2; j++) {
            if (i < n - 2 && j != 0 && j != n - 3) {
                printf("  ");
            }
            else {
                printf("* ");
            }
        }

        printf("\n");
    }
}