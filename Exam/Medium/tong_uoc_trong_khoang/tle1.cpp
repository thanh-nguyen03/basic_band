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

int solve(int n) {
    if (n == 1) return n;
    ll s = 1 + n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            s += i;
            if (i * i != n) s += n / i;
        }
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        ll sum = 0;
        for (int i = l; i <= r; i++) {
            sum += solve(i);
        }
        cout << sum << endl;
    }
}