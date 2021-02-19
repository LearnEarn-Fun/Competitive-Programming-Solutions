#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
map<ll, ll> occ;
ll t, n, c;

const ll MOD = 1e9 + 7;

ll fastPow(ll x) {
    ll ans = 1, cur = x, k = MOD - 2;
    while(k) {
        if(k%2) {
            ans *= cur;
            ans %= MOD;
        }
        k /= 2;
        cur *= cur;
        cur %= MOD;
    }

    return ans;
}

ll pow2(ll x) {
    ll ans = 1; 
    while(x--) {
        ans *= 2;
        ans %= MOD;
    }

    return (ans + MOD)%MOD;
}

ll choose(ll n, ll r) {
    ll ans = 1;
    for(ll i = 1; i <= r; ++i) {
        ans *= n - r + i;
        ans %= MOD;
    }

    ll d = 1;
    for(ll i = 1; i <= r; ++i) {
        d *= i;
        d %= MOD;
    }
  
    ans *= fastPow(d);
    ans %= MOD;

    return (ans + MOD)%MOD;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        occ.clear();

        ll maxn = 0;
        for(ll i = 0; i < n; ++i) {
            cin >> c;
            occ[c]++;
            maxn = max(maxn, c);
        }

        if(occ[maxn]%2 == 1) {
            cout << pow2(n) << '\n';
            continue;
        }

        cout << (pow2(n)%MOD - (choose(occ[maxn], occ[maxn]/2) * pow2(n - occ[maxn]) + MOD)%MOD + MOD)%MOD << '\n';
    }

    return 0;
}