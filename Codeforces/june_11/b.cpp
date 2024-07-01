#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

void solve(int n) {
    int greatest = 0;
    int res = 0;
    for (int x=2; x<=n; ++x) {
        int k = n / x;
        int cur = k * (k + 1) * x / 2;
        if (cur > greatest) {
            res = x;
            greatest = cur;
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n;
        cin >> n;
        solve(n);
    }
}

