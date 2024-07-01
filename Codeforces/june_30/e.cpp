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


ll solve(vector<ll>& a, vector<unordered_set<int>>& connected, vector<unordered_set<int>>& connected_copy, vector<int>& parents) {
    int n = a.size();
    vector<ll> min_depth(n, INT_MAX);
    for (int i=0; i<n; ++i) if (connected[i].empty()) min_depth[i] = 0;
    ll res = 0;
    for (int i=0; i<n; ++i) cout << connected[i].size() << 's';
    while (!connected[0].empty()) {
        for (int node=0; node<n; ++node) if (connected[node].empty()) {
            int parent = parents[node];
            ll child_sum = 0;
            for (auto og_nbr : connected_copy[node]) {
                child_sum += a[og_nbr];
                min_depth[node] = min(min_depth[node], min_depth[og_nbr] + 1);
            }
            ll missing = max(static_cast<ll>(0), child_sum - a[node]);
            ll children_add = min_depth[node] * children_add;
            cout << '\n' << min_depth[node] << '\n';
            res += children_add;
            a[node] += missing;
            connected[parent].erase(node);
        }
    }


    int node = 0;
    ll child_sum = 0;
    for (auto og_nbr : connected_copy[node]) child_sum += a[og_nbr];
    ll missing = max(static_cast<ll>(0), child_sum - a[node]);
    ll children_add = min_depth[node] * children_add;
    res += children_add;
    a[node] += missing;
    return res;
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i=0; i<n; ++i) cin >> a[i];
        vector<unordered_set<int>> connected(n);
        vector<int> parents(n);
        for (int i=1; i<n; ++i) {
            int u;
            cin >> u;
            --u;
            connected[u].insert(i);
            parents[i] = u;
        }
        cout << solve(a, connected, connected, parents) << '\n';
    }   
    cout << endl;
}

