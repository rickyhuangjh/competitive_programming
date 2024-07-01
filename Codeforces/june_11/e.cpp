#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <cmath>

using namespace std;

unordered_map<int, int> get_divisors(int n) {
    int sqrt_n = sqrt(n);
    unordered_map<int, int> divisors;
    for (int i=2; i<=sqrt_n; ++i) if (n % i == 0) ++divisors[i];
    return divisors;
}

void solve(int x, int y, int z, int k) {
    
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int x, y, z, k;
        cin >> x >> y >> z >> k;
        solve(x, y, z, k);
    }
    
}


