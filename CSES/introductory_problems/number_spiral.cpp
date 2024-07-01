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

ll solve(int y, int x) {
    ll the_min = min(y, x);
    ll the_max = max(y, x);
    ll square =  the_max * the_max;
    if (square % 2) {
        // squre is column
        if (x > y) return square - y + 1;
        return square - 2 * the_max + x + 1;
    }

    if (x > y) return square - 2 * the_max + y + 1;
    return square - x + 1;
}

int main() {
    int tc;
    cin >> tc;
    int y, x;
    for (int t=0; t<tc; ++t) {
        cin >> y >> x;
        cout << solve(y, x) << '\n';
    }
    cout << endl;
}

