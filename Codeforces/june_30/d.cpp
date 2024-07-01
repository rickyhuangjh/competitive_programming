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

int solve(vector<int>& a) {
    int n = a.size();
    int res = 0;
    vector<int> freqs(5001), cakes_with_freq(500);
    for (int i=0; i<n; ++i) ++freqs[a[i]];
    for (int i=0; i<n; ++i) ++cakes_with_freq[freqs[i]];
    for (int i=1; i<=5000; ++i) {
        if (cakes_with_freq[i] == 0) continue;
        cout << cakes_with_freq[i] << ' ';
        while (cakes_with_freq[i] >= i) {
            ++res;
            cakes_with_freq[i] -= i + 1;
        }
    }
    return res;
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n;
        cin >> n;
        vector<int> a(n);
        cout << solve(a) << '\n';

    }   
    cout << endl;
}

