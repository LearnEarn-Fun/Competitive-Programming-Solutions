#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n;

int main() {
    cin >> t;
    while(t--) {
        cin >> n;

        if((n * (n + 1))%4 != 0) {
            cout << 0 << endl;
            continue;
        }

        ll lans = INT_MAX, rans = -1, upper = (n * (n + 1))/4, lower = (n * (n + 1))/4 - n + 1;
        ll l = 1, r = n;
        while(l <= r) {
            ll mid = (l + r)/2, cur = (mid * (mid + 1))/2;
            if(cur > upper) {
                r = mid - 1;
            } else if(cur < lower) {
                l = mid + 1;
            } else {
                rans = max(rans, mid);
                l = mid + 1;
            }
        }

        l = 1, r = n;
        while(l <= r) {
            ll mid = (l + r)/2, cur = (mid * (mid + 1))/2;
            //cout << l << ' ' << r << ' ' << mid << endl;
            if(cur > upper) {
                r = mid - 1;
            } else if(cur < lower) {
                l = mid + 1;
            } else {
                //cout << cur << ' ' << lower << endl;
                lans = min(lans, mid);
                r = mid - 1;
            }
        }

        //cout << lans << ' ' << rans << endl;

        if(lans == INT_MAX || rans == -1) {
            cout << 0 << endl;
            continue;
        }

        ll ans = 0;
        for(ll i = lans; i <= rans; ++i) {
            ll cur = (n * (n + 1))/4 - (i * (i + 1))/2;
            if(cur == 0) {
                ans += (i * (i - 1))/2 + ((n - i) * (n - i - 1))/2;
                continue;
            }
            ans += min(i, n - cur) - max(1ll, i - cur + 1) + 1;
            //cout << min(i, n - cur) - max(1ll, i - cur + 1) + 1 << endl;
        }

        cout << ans << endl;
    }

    return 0;
}
