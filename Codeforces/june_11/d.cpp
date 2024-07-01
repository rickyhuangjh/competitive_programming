#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

void solve(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int start_row, start_col, end_row, end_col;
    for (int i=0; i<n; ++i) for (int j=0; j<m; ++j) {
        if (grid[i][j] == '#') {
            start_row = i;
            start_col = j;
            break;
        }
    }
    for (int i=n-1; i>=0; --i) for (int j=m-1; j>=0; --j) {
        if (grid[i][j] == '#') {
            end_row = i;
            end_col = j;
            break;
        }
    }
    cout << (start_row + end_row) / 2 + 1 << ' ' << (start_col + end_col) / 2 + 1 << endl;
    
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, 0));
        for (int j=0; j<n; ++j) for (int k=0; k<m; ++k) {
            char c;
            cin >> c;
            grid[j][k] = c;
        }
        solve(grid);
    } 
}


