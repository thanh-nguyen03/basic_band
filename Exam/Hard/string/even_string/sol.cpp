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

string s;
void run_test_case() {
    cin >> s;
    int mp[200] = {0};
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]]) {
            cnt += 2;
            for (int j = 'a'; j <= 'z'; j++) {
                mp[j] = 0;
            }
        }
        else mp[s[i]] = 1;
    }
    cout << s.size() - cnt << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}