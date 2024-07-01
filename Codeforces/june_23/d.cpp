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

int solve(vector<int>& digits) {
    int n = digits.size();
    int sum = 0;
    for (int i=0; i<n; ++i) {
        if (digits[i] == 0) {
            
        }
        else sum += digits[i];
    }

    vector<int> mult;
    for (int i=0; i<n-1; ++i) {
        if (digits[i] < static_cast<double>(digits[i]) / digits[i+1] + 1) {
            mult.push_back(sum - digits[i] - digits[i+1] + (d))
        }
    }

    
}

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; ++t) {
        int n;
        char c;
        cin >> n;
        vector<int> digits;
        for (int i=0; i<n; ++i) {
            cin >> c;
            digits.push_back(c - '0');
        }
        int res = solve(digits);
        cout << res << '\n';
    }
    cout << endl;
    
}

