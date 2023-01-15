#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, cnt = 0;
        scanf("%lld", &n);
        
        for (int i = 2; i <= sqrt(n); i++) {
            int check = 1;
            if (i == 2 || i == 3) {
                cnt++;
                continue;
            }
            for (int j = 5; j <= sqrt(i); j += 6) {
                if (i % (j + 2) == 0) {
                    check = 0;
                    break;
                }
            }
            if (check && i >= 2) {
                cnt++;
            }
        }

        printf("%lld\n", cnt);
    }
}