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

int n;
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || j == n - 1) cout << "* ";
            else if (i == j) cout << "* ";
            else if (i + j == n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    faster();
        run_test_case();
}