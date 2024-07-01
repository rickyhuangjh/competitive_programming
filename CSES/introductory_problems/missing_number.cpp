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

void solve(int n) {
    vector<bool> seen(n+1);
    int num;
    seen[0] = true;
    for (int i=0; i<n-1; ++i) {
        cin >> num;
        seen[num] = true;
    }
    for (int i=0; i<n+1; ++i) if (!seen[i]) {
        cout << i << endl;
        return;
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
}

