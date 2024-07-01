#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <utility>

#define ll long long
#define rep(i, a, b) (for (int i=a; i<=b; ++i))

using namespace std;


void solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            int val = 0;
            if (i > 0) val = matrix[i-1][j];
            if (i < n - 1) val = max(val, matrix[i+1][j]);
            if (j > 0) val = max(val, matrix[i][j-1]);
            if (j < m - 1) val = max(val, matrix[i][j+1]);
            matrix[i][j] = min(matrix[i][j], val);
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i=0; i<n; ++i) for (int j=0; j<m; ++j) cin >> matrix[i][j];
        solve(matrix);
    }
    cout << endl;
}

