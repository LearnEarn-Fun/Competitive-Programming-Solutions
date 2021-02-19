#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, a[100007];

int main() {
    cin >> t;
    while(t--) {
        ll ans = 0;
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> a[i];
        ll cnt = 1;
        for(ll i = 1; i < n; ++i) {
            if(a[i] >= a[i - 1]) {
                cnt++;
            } else {
                ans += (cnt * (cnt + 1))/2;
                cnt = 1;
            }
        }

        ans += (cnt * (cnt + 1))/2;

        cout << ans << endl;
    }

    return 0;
}