#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

long long solve(int n) {
    vector<long long> dp;
    dp.push_back(1);
    for (int i=1; i<n; ++i) {
        long long cur = 0;
        for (int j=1; j<=6; ++j) if (i - j >= 0) cur += dp[i-j] + dp[j-1];
        dp.push_back(cur);
    }
    return dp.back();
}

int main() {
    int n;
    cin >> n;
    cout << solve(n);
}

