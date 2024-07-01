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

long long solve(vector<int>& a) {
    int n = a.size();
    long long res = 0;
    long long max_changed = 0;
    for (int i=1; i<n; ++i) {
        long long new_num = max(a[i], a[i-1]);
        max_changed = max(max_changed, new_num - a[i]);
        res += new_num - a[i];
        a[i] = new_num;
    }
    return res + max_changed;

}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; ++i) cin >> a[i];
        cout << solve(a) << '\n';
    }   
    cout << endl;
}

