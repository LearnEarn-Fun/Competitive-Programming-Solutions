#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, x, dp[1000007];
const ll MOD = 1e9 + 9;

void populate() {
    dp[0] = 1;
    for(ll i = 0; i <= 1000000; ++i) {
        dp[i + 2] += dp[i];
        dp[i + 3] += dp[i];
        dp[i + 2] %= MOD;
        dp[i + 3] %= MOD;
    }

    return;
}

int main() {
    cin >> t;
    populate();

    while(t--) {
        cin >> x;
        cout << dp[x] << endl;
    }

    return 0;
}