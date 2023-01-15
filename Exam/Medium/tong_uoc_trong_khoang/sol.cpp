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

ll a[1000005];

void solve() {
    a[0] = 0; a[1] = 1;
    for (int i = 2; i <= 1000000; i++) {
        a[i] = 1;
    }
    for (int i = 2; i <= 1000000; i++) {
        a[i] += i;
        for (int j = i * 2; j <= 1000000; j += i) {
            a[j] += i;
        }
    }
}

int l, r;
void run_test_case() {
    cin >> l >> r;
    ll sum = 0;
    for (int i = l; i <= r; i++) {
        sum += a[i];
    }
    cout << sum << endl;
}

int main() {
    solve();
    tester() 
        run_test_case();
}