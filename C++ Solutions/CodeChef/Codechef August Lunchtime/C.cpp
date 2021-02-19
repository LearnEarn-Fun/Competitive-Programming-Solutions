#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, a[300007];

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> a[i];

        ll ans = 0, ans2 = 0, cnt = 0;

        for(ll i = 0; i < n; ++i) {
            if(a[i] == 0) {
                cnt++;
            }
            else {
                if(cnt > ans) {
                    ans2 = ans;
                    ans = cnt;
                } else if(cnt > ans2) {
                    ans2 = cnt;
                }
                cnt = 0;
            }
        }

        if((ans + 1)/2 > ans2 && ans%2 == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}