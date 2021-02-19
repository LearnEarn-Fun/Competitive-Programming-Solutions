#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, k, p, dp[100007];
vector<pair<ll, ll>> v;

int main() {
    cin >> n >> k >> p;
    for(ll i = 0; i < n; ++i) {
        ll temp;
        cin >> temp;
        v.push_back(make_pair(temp, i + 1));
    }

    sort(v.begin(), v.end());

    ll cur = 1;
    dp[v[0].second] = 1;
    for(ll i = 1; i < n; ++i) {
        if(v[i].first - v[i - 1].first <= k) {
            dp[v[i].second] = cur;
        } else {
            dp[v[i].second] = ++cur;
        }
    }

    for(ll i = 0; i < p; ++i) {
        ll a, b;
        cin >> a >> b;
        if(dp[a] == dp[b]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}