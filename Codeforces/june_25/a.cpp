#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>

#define ll long long

using namespace std;

bool solve(int x1, int y1, int x2, int y2) {
    if (x1 < y1 && x2 > y2) return false;
    if (x1 > y1 && x2 < y2) return false;
    return true;

}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (solve(x1, y1, x2, y2)) cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }
    
}

