#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

long long solve(long long n, long long a, long long b) {
    long long k = b - a + 1;
    k = min(k, b);
    k = min(k, n);
    if (k < 0) return a * n; 
    return k * ((b - k + 1) + b) / 2 + (n - k) * a;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << solve(n, a, b) << '\n';
    }
    cout.flush();
}


