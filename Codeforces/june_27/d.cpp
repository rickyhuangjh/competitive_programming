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

int solve(vector<int>& a, vector<int>& b, vector<int>& cost, vector<int>& c) {
    int n = cost.size();
    int m = c.size();
    vector<int> idxs;
    for (int i=0; i<n; ++i) idxs.push_back(i);
    sort(idxs.begin(), idxs.end(), [&a](int r, int s){return a[r] < a[s];});

    priority_queue<int> pq;
    int weapon = 0;
    for (int i=m-1; i>=0; --i) {

        while (pq.empty() || a[pq.top()] < ) pq.push(idx)
        
        while (c[i] < a[cur_weapon]) ++cur_weapon;


        int cur = (c[i] - a[i]) / cost[i];

        
    }

  

    int res = 0;
    
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), cost(n), c(m);
    for (int i=0; i<n; ++i) cin >> a[i];
    for (int i=0; i<n; ++i) {
        cin >> b[i];
        cost[i] = a[i] - b[i];
    }
    for (int i=0; i<m; ++i) cin >> c[i];
    cout << solve(a, b, cost, c) << endl;
}

