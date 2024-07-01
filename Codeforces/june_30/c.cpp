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

ll solve(vector<int>& h) {
    int n = h.size();
    vector<int> dp(n);
    dp[n-1] = h[n-1];
    for (int i=n-2; i>=0; --i) {
        if (h[i] > dp[i+1]) dp[i] = h[i];
        else dp[i] = dp[i+1] + 1;
    }
    return dp[0];
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i=0; i<n; ++i) cin >> h[i];
        cout << solve(h) << '\n';
    }   
    cout << endl;
}

