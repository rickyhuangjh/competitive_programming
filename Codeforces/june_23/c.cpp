#include <cmath>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <utility>
#include <algorithm>

#define ll long long
#define rep(i, a, b) (for (int i=a; i<=b; ++i))

using namespace std;

void solve(string& s, vector<int>& idxs, vector<char>& chars) {
    int n = s.length();
    int m = idxs.size();
    sort(chars.begin(), chars.end());
    vector<int> freqs(n);
    for (int i=0; i<m; ++i) {
        ++freqs[idxs[i]];
    }
    for (int i=0; i<n; ++i) {
        while (freqs[i] > 1) {
            --freqs[i];
            chars.pop_back();
        }   
    }
    int char_idx = 0;
    for (int i=0; i<n; ++i) {
        if (freqs[i]) {
            s[i] = chars[char_idx];
            ++char_idx;
        }
    }
    cout << s << '\n';
    
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n, m;
        cin >> n >> m;
        string s;
        vector<int> idxs;
        vector<char> chars;
        cin >> s;
        int idx;
        char c;
        for (int i=0; i<m; ++i) {
            cin >> idx;
            idxs.push_back(idx - 1);
        }
        for (int i=0; i<m; ++i) {
            cin >> c;
            chars.push_back(c);
        }
        solve(s, idxs, chars);
    }
}

