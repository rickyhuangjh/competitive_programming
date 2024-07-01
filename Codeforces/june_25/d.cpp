#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <numeric>

using ll = long long;

using namespace std;

void solve(vector<vector<int>>& matrix, vector<vector<int>>& snow, int k) {
    int n = matrix.size();
    int m = matrix[0].size();
    ll target = 0;
    for (int i=0; i<n; ++i) for (int j=0; j<m; ++j) {
        if (snow[i][j] == -1) target += matrix[i][j];
        else target -= matrix[i][j];
    }
    target = abs(target);
    vector<int> divisors;
    for (int i=1; i<n; ++i) snow[i][0] += snow[i-1][0];
    for (int j=1; j<m; ++j) snow[0][j] += snow[0][j-1];
    for (int i=1; i<n; ++i) for (int j=1; j<m; ++j) snow[i][j] += snow[i-1][j] + snow[i][j-1] - snow[i-1][j-1];
    for (int i=k-1; i<n; ++i) {
        for (int j=k-1; j<m; ++j) {
            int sum = snow[i][j];
            if (i >= k) sum -= snow[i-k][j];
            if (j >= k) sum -= snow[i][j-k];
            if (i >=k && j >= k) sum += snow[i-k][j-k];
            divisors.push_back(abs(sum));
        }
    }
    int the_gcd = divisors[0];
    for (int i=1; i<divisors.size(); ++i) the_gcd = gcd(the_gcd, divisors[i]);

    if (!target) cout << "YES";
    else if (!the_gcd || target % the_gcd) cout << "NO";
    else cout << "YES";
    cout << '\n';
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> matrix(n, vector<int>(m));
    int tc;
        vector<vector<int>> snow(n, vector<int>(m));
        for (int i=0; i<n; ++i) for (int j=0; j<m; ++j) {
            cin >> matrix[i][j];
        }
        char c;
        for (int i=0; i<n; ++i) for (int j=0; j<m; ++j) {
            cin >> c;
            snow[i][j] = (c == '0')? 1: -1;
        }
        solve(matrix, snow, k);
    }
    cout << endl;
}

