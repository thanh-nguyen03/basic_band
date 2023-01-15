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

int a[1005][1005];
int n, k;
// 1 = 'X', 0 = 'O'
int horizontalX[1005][1005], verticalX[1005][1005], horizontalO[1005][1005], verticalO[1005][1005];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            horizontalX[i][j] = 1;
            verticalX[i][j] = 1;
            horizontalO[i][j] = 1;
            verticalO[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                verticalX[i][j] = horizontalX[i][j] = 0;
            } 
            else {
                horizontalX[i][j] = (j == 0) ? 1 : horizontalX[i][j-1] + 1;
                verticalX[i][j] = (i == 0) ? 1 : verticalX[i-1][j] + 1;
            }

            if (a[i][j] == 1) {
                verticalO[i][j] = horizontalO[i][j] = 0;
            } 
            else {
                horizontalO[i][j] = (j == 0) ? 1 : horizontalO[i][j-1] + 1;
                verticalO[i][j] = (i == 0) ? 1 : verticalO[i-1][j] + 1;
            }
        }
    }
    
    int cntX = 0, cntO = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cntX = max(cntX, max(horizontalX[i][j], verticalX[i][j]));
            cntO = max(cntO, max(horizontalO[i][j], verticalO[i][j]));
        }
    }

    if (cntX >= k && cntO >= k) {
        cout << "Draw" << endl;
        return;
    }
    if (cntX >= k) {
        cout << "Game de" << endl;
        return;
    }
    if (cntO >= k) {
        cout << "Chap thoi" << endl;
        return;
    }
    cout << "Draw" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}