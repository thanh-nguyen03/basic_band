#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
    int t;
    scanf("%d", &t);
    while (t--) {
        string s;
        cin >> s;
        if (next_permutation(s.begin(), s.end())) cout << s << endl;
        else cout << -1 << endl;
    }
	return 0;
}
