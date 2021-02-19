#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, p, k, x, a[400007], n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n >> x >> p >> k;
        for(ll i = 1; i <= n; ++i) cin >> a[i];

        sort(a + 1, a + 1 + n);

        ll closest = 1;
        for(ll i = 1; i <= n; ++i) {
            if(a[i] == x && abs(p - i) < abs(p - closest)) {
                closest = i;
            }
        }

        bool ok = 0;

        if(a[closest] != x) {
            a[k] = x;
            closest = k;
            sort(a + 1, a + 1 + n);
            ok = 1;
        }

        if(a[p] == x) {
            cout << ok << '\n';
            continue;
        }

        if((a[p] < x && k > p) || (a[p] > x && k < p)) {
            cout << "-1\n";
            continue;
        } 

        ll ans = INT_MAX;
        for(ll i = 1; i <= n; ++i) {
            if(a[i] == x && abs(p - ans) > abs(p - i)) {
                ans = i;
            }
        } 

        cout << abs(p - ans) + ok << '\n';
    }

    return 0;
}