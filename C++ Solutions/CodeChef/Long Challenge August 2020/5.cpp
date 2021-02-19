#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, k, f[1007], dp[1007][1007];

ll getAns(ll x, ll y) {
    if(x > y) return 0;
    if(dp[x][y]) return dp[x][y];
    ll q = INT_MAX;
    for(ll i = x; i <= y; ++i) {
        q = min(q, getAns(x, i) + getAns(i + 1, y));
    }

    dp[x][y] = q;
    return q;
}

int main() {
    scanf("%lld", &t);
    while(t--) {
        memset(dp, 0, sizeof(dp[0][0]) * 1007 * 1007);

        scanf("%lld %lld", &n, &k);
        for(ll i = 1; i <= n; ++i) scanf("%lld", &f[i]);

        for(ll i = 1; i <= n; ++i) {
            dp[i][i] = k;
        }

        printf("%lld\n", getAns(1, n));

    }

    return 0;
}