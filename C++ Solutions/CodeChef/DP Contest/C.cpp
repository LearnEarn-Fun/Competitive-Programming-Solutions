#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, a, b, k, factors[100007], dp[100007][5];
bool composite[100007];

void populate() {
    for(ll i = 2; i <= 1e5; ++i) {
        if(composite[i]) continue;
        for(ll j = i; j <= 1e5; j += i) {
            composite[j] = 1;
            factors[j]++;
        }        
    }

    for(ll i = 2; i <= 1e5; ++i) {
        if(factors[i] <= 5 && factors[i]) dp[i][factors[i] - 1]++;
    }

    for(ll i = 2; i <= 1e5; ++i) {
        dp[i][0] += dp[i - 1][0];
        dp[i][1] += dp[i - 1][1];
        dp[i][2] += dp[i - 1][2];
        dp[i][3] += dp[i - 1][3];
        dp[i][4] += dp[i - 1][4];
    }

    return;
}

int main() {
    populate();
    cin >> t;
    while(t--) {
        cin >> a >> b >> k;
        cout << dp[b][k - 1] - dp[a - 1][k - 1] << endl;
    }

    return 0;
}