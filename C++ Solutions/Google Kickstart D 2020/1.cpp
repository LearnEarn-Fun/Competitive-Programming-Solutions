#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, a[200007];

int main() {
    cin >> t;
    for(ll tc = 1; tc <= t; ++tc) {
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> a[i];
        ll maxn = 0, cnt = 0;
        for(ll i = 0; i < n; ++i) {
            bool ok = 1;
            if(i > 0 && a[i] <= maxn) ok = 0;
            if(i < n - 1 && a[i + 1] >= a[i]) ok = 0;

            if(ok) cnt++;
            maxn = max(maxn, a[i]);
        }

        cout << "Case #" << tc << ": " << cnt << endl;
    }
}