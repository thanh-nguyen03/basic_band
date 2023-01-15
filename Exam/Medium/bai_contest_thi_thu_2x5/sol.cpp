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
#define MAX 100000

int n, a[MAX];
void run_test_case() {
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for (int i = 0; i <= MAX; i++) {
        if (m[i] % 2 == 1) {
            cout << "Game la de" << endl;
            return;
        }
    }

    cout << "Chap thoi" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}