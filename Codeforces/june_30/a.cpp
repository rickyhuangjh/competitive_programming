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

void solve(int n, int k) {
    cout << (n - 1) * k + 1 << '\n';
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }   
    cout << endl;
}

