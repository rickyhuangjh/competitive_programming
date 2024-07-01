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

void solve(vector<int>& deck, int l, int r) {
    int n = deck.size();
    ll res = 0;
    for (int i=1; i<n; ++i) deck[i] += deck[i-1];
    int left = 0, right = 0;
    while (left < n && right < n) {
        if (deck[right] - deck[left] < l) ++right;
        else if (deck[right] - deck[left] > r) ++left;
        else {
            ++res;
            left = right;
        }
    }
    cout << res << '\n';
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<int> deck;
        deck.push_back(0);
        int x;
        for (int i=0; i<n; ++i) {
            cin >> x;
            deck.push_back(x);
        }
        solve(deck, l, r);
    }
    cout << endl;
}

