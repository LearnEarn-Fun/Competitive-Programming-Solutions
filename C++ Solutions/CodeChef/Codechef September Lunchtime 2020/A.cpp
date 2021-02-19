#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, a[17];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> a[i];

        ll sum = 0;
        for(ll i = 0; i < n; ++i) sum += a[i];

        if(sum < 0) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}