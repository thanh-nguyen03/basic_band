#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n + 10], m[100000] = {0};
    int max1 = 0, max2 = 0, ans = -1, maxE = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        m[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (m[a[i]] > max1) {
            max2 = max1;
            ans = maxE;
            maxE = a[i];
            max1 = m[a[i]];
        }
        else if (m[a[i]] > max2 && m[a[i]] < max1) {
            max2 = m[a[i]];
            ans = a[i];
        }
    }

    printf("%d", ans);
}