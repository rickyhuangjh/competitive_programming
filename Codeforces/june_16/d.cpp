#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <iostream>
#include <queue>

using namespace std;

void solve(vector<long long>& v, int c) {
    int n = v.size();
    vector<int> res(n, -1);
    map<int, long long> mp;
    for (int i=0; i<n; ++i) mp[i] = v[i];
    mp[0] += c;
    c = 0;
    auto comp = [&mp](int a, int b){return mp[a] < mp[b];};
    priority_queue<int, vector<int>, decltype(comp)> pq(comp);
    for (int i=0; i<n; ++i) pq.push(i);
    for (int i=0; i<n; ++i) {
        int prev = -1;
        while (prev == -1 || pq.top() == prev) {
            int win = pq.top();
            pq.pop();
            prev = win;
            if (res[win] != -1) continue;
        }
        pq.pop();
        res[win] = 0;
        

        res[win] = i;
        c = mp[win];
        mp.begin()->second += c;
        mp.erase(win);

        if (found) ++i;

        pq.push(mp.begin()->first);

    }
    for (int i=0; i<n; ++i) cout << res[i] << ' ';
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n, c;
        cin >> n >> c;
        int a;
        vector<long long> v;
        for (int j=0; j<n; ++j) {
            cin >> a;
            v.push_back(a);
        }
        solve(v, c);
    }
    cout << endl;
}


