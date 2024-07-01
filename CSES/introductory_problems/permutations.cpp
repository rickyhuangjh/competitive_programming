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
    if (n == 1) {
        cout << '1';
        return;
    }
    if (n == 4) {
        cout << "2 4 1 3";
        return;
    }
    if (n < 5) {
        cout << "NO SOLUTION";
        return;
    }
    for (int i=0; i<n; ++i) {
        cout << (i % 2) * (n + 1) / 2 + i / 2 + 1 << ' '; 
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
    cout << endl;
}


