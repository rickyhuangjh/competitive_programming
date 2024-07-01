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

void move_stack(int n, int from, int to) {
    if (n == 0) return;
    int other = 6 - from - to;
    move_stack(n-1, from, other);
    cout << from << ' ' << to << '\n';
    move_stack(n-1, other, to);
}

void solve(int n) {
    vector<int> dp(n+1);
    dp[1] = 1;
    for (int i=2; i<=n; ++i) dp[i] = 2 * dp[i-1] + 1;
    cout << dp[n] << '\n';
    move_stack(n, 1, 3);
}

int main() {
    int n;
    cin >> n;
    solve(n);
    cout << endl;   
}

