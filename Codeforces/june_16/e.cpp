#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <queue>

using namespace std;

bool settable_a(string& s, string& t, int i) {
    if (s[i] == '1') return true;
    if (settable_b(s, t, i-1) && settable_b(s, t, i+1)) return true;
}

bool settable_b(string&s, string& t, int i) {
    if (t[i] == '1') return true;
    if (s[i-1] == '0' && s[i+1] == '0') return true;
}

int solve(string& s, string& t, vector<vector<int>>& v) {
    int n = s.length();
    int q = v.size();
    for (auto& query : v) {

    }

}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n, q;
        vector<vector<int>> v;
        string s, t;
        cin >> s >> t;
        cin >> q;
        vector<int> query(2, 0);
        for (int j=0; j<q; ++j) {
            cin >> query[0] >> query[1];
            v.push_back(query);
        }
        solve(s, t, v);
    }
}

