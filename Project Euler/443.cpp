#include <vector>
#include <iostream>
#include <numeric>
#include <climits>
#include <set>
using namespace std;
using ll = long long;

vector<ll> primes;
set<ll> primes_set;
vector<ll> f(ll n) {
    vector<ll> ret;
    //cout << "factoring " << n << '\n';
    for (ll p : primes) {
        if (n == 1) break;
        if (primes_set.count(n)) {
            ret.push_back(n);
            n = 1;
            break;
        }
        if (n % p == 0) {
            ret.push_back(p);
            while (n % p == 0) n /= p;
        }
    }
    if (n > 1) {
        for (ll i = primes.back() + 1; n > 1; i++) {
            if (n % i == 0) {
                ret.push_back(i);
                while(n % i == 0) n /= i;
            }
        }
    }
    return ret;
}

int main() {
    ll n = 1'000;
    vector<ll> sieve(n + 1);
    for (ll i = 2; i <= n/2; i++) {
        if (sieve[i]) continue;
        primes.push_back(i);
        primes_set.insert(i);
        for (ll j = i; j <= n; j += i) {
            sieve[j] = 1;
        }
    }

    ll ans = 13;
    ll m = 100;
    ll t = 100;
    ll i = 5;
    ll steps = 0;
    while (i < m) {
        ll d = abs(ans - i);
        vector<ll> factors = f(d);
        ll jump = LLONG_MAX;
        for (ll p : factors) {
            ll val = i % p;
            val = p - val;
            jump = min(jump, val); 
        }
        if (jump == LLONG_MAX) {
            cout << "uh oh" << '\n';
            cout << d << '\n';
            cout << factors.size() << '\n';
            break;
        }
        ans += jump;
        i += jump;

        ans += gcd(ans, i);
        i++;


        cout << "g(" << i << "): " << ans << '\n';

        steps++;
    
    }

    while (i < t) {
        ans += gcd(ans, i);
        i++;
        cout << "g(" << i << "): " << ans << '\n';

        steps++;
    }

    cout << "g(" << i << "): " << ans << '\n';
    cout << "steps: " << steps << '\n';
    return 0;
}