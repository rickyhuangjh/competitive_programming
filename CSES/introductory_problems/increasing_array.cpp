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

void solve(vector<ll>& v) {
    int n = v.size();
    ll res = 0;
    for (int i=1; i<n; ++i) {
        res += max(v[i-1] - v[i], static_cast<ll>(0));
        v[i] = max(v[i], v[i-1]);
    }
    cout << res;
}

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    solve(v);
    cout << endl;
}


