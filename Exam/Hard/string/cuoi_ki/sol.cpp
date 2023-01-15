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

string a, b;
void run_test_case() {
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a.size(); ++i) {
        ans += a[i] != b[i];
    }
 
    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] != b[i] && a[i + 1] != a[i] && b[i + 1] != b[i]) {
            --ans;
            ++i;
        }
    }
 
    cout << ans << "\n";
}

int main() {
    faster();
    tester() 
        run_test_case();
}