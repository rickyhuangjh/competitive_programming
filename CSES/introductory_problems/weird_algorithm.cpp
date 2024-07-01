#include <unordered_map>
#include <iostream>

using namespace std;

void solve(long long n) {
    cout << n << ' ';
    while (n != 1) {
        if (n % 2) n = 3 * n + 1;
        else n >>= 1;
        cout << n  << ' ';
    }

    cout << endl;
}

int main() {
    long long n;
    cin >> n;
    solve(n);
}