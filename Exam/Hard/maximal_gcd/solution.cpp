#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

ll n, k;
ll a[MAX], b[MAX];
void run_test_case() {
    scanf("%lld%lld", &n, &k);
    if (k > 1e7) {
        printf("-1\n");
        return;
    }
    ll j1 = 0, j2 = 0;
    ll s = sqrt(n);

    // luu cac uoc so cua n vao mang a dung code C thuan
    for (ll i = 1; i <= s; i++) {
        if (n % i == 0) {
            a[j1++] = i;
            if (i * i == n) continue;
            b[j2++] = n / i;
        }
    }
    ll r = j1;
    while (j2 > 0) {
        a[r++] = b[--j2];
    }


    ll sumBase = k * (k + 1) / 2;
    if (sumBase > n) {
        printf("-1\n");
        return;
    }
    
    for (ll i = r - 1; i >= 0; i--) {
        if (a[i] * sumBase <= n && a[i] * sumBase > 0) {
            for (ll j = 1; j < k; j++) {
                printf("%lld ", j * a[i]);
                n -= j * a[i];
            }
            printf("%lld\n", n);
            return;
        }
    }
    printf("-1\n");
}

int main() {
    tester() 
        run_test_case();
}