#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 10];
        long long sum = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sum += a[i];

            int check = 1;
            for (int j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    check = 0;
                    break;
                }
            }
            if (check == 1 && a[i] >= 2) {
                cnt++;
            } 
        }

        int check1 = 1, check2 = 1;
        for (int i = 2; i <= sqrt(sum); i++) {
            if (sum % i == 0) {
                check1 = 0;
                break;
            }
        }
        if (sum < 2) {
            check1 = 0;
        }

        for (int i = 2; i <= sqrt(cnt); i++) {
            if (cnt % i == 0) {
                check2 = 0;
                break;
            }
        }
        if (cnt < 2) {
            check2 = 0;
        }

        if (check1 && check2) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
}