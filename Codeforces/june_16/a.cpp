#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(vector<int>& v) {
    int n = v.size();
    int x = v[n-1];
    int y = 0;
    for (int i=0; i<n-1; ++i) y = max(y, v[i]);
    cout << x + y << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n;
        cin >> n;
        int a;
        vector<int> v;
        for (int j=0; j<n; ++j) {
            cin >> a;
            v.push_back(a);
        }
        solve(v);
    }
}

