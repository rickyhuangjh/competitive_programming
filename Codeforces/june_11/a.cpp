#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

void solve(string& a, string& b) {
    swap(a[0], b[0]);
    cout << a << ' ' << b << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        string a;
        string b;
        cin >> a;
        cin >> b;
        solve(a, b);
    }
}

