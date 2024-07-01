#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using ll = long long;

using namespace std;

void solve(string& s) {
    int n = s.length();
    int res = 1;
    int cur = 1;
    for (int i=1; i<n; ++i) {
        if (s[i] == s[i-1]) {
            ++cur;
            res = max(res, cur);
        } else cur = 1;
    }
    cout << res;
}

int main() {
    string s;
    cin >> s;
    solve(s);
    cout << endl;   
}

