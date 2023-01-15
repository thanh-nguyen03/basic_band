#include <stdio.h>

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 5], f[n + 5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            f[i] = 1e9;
        }
        f[0] = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] == 0) continue;
                if (a[j] + j >= i) {
                    f[i] = min(f[i], f[j] + 1);
                }
            }
        }

        printf("%d\n", f[n-1]);
    }
}