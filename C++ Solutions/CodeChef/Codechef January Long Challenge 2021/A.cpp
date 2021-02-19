#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, m, a[1007], b[1007], t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n >> m;
        ll sum1 = 0, sum2 = 0;
        for(ll i = 0; i < n; ++i) cin >> a[i], sum1 += a[i];
        for(ll i = 0; i < m; ++i) cin >> b[i], sum2 += b[i];

        sort(a, a + n);
        sort(b, b + m, greater<ll>());

        ll cnt = 0;
        for(ll i = 0; i < min(n, m); ++i) {
            if(sum1 > sum2) break;
            sum1 += b[i] - a[i];
            sum2 += a[i] - b[i];
            cnt++;
        }

        cout << ((sum1 > sum2) ? cnt : -1) << '\n';
    }

    return 0;
}