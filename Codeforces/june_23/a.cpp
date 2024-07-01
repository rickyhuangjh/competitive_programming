#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>

#define ll long long

using namespace std;


void solve(int x1, int x2, int x3) {
    vector<int> v{x1, x2, x3};
    sort(v.begin(), v.end());
    int med = v[1];
    int res = abs(x1 - med) + abs(x2 - med) + abs(x3 - med);

    cout << res;

}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        solve(x1, x2, x3);
    cout << endl;
    }
}

