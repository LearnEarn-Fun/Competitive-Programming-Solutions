#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, a[200007];

int main() {
    cin >> t;
    for(ll tc = 1; tc <= t; ++tc) {
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> a[i];

        ll maxn = 0;
        for(ll i = 0; i < n; ) {
            ll j = i;
            while(a[j + 1] - a[j] == a[i + 1] - a[i] && j + 1 < n) j++;
            //cout << i << ' ' << j << endl;
            maxn = max(maxn, j - i + 1);
            i = max(i + 1, j);
        }

        cout << "Case #" << tc << ": " << maxn << endl;
    }

    return 0;
}