#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, b[100007], ans[100007];
bool composite[2000007];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(ll i = 2; i <= 2000000; ++i) {
        if(composite[i]) continue;
        for(ll j = i * 2; j <= 2000000; j += i) composite[j] = 1;
    }

    cin >> t;
    while(t--) {
        memset(ans, 0, sizeof(ans[0]) * 100007);
        cin >> n;
        for(ll i = 1; i <= n; ++i) {
            cin >> b[i];
        }

        ll cur = 2;
        for(ll i = 1; i <= n; ++i) {
            if(!ans[i]) {
                if(!ans[b[i]]) {
                    ans[b[i]] = ans[i] = cur;
                } else {
                    ans[i] = ans[b[i]];
                }
            }

            cur++;
            while(composite[cur]) cur++;
        }

        for(ll i = 1; i <= n; ++i) cout << ans[i] << ' ';
        cout << '\n';
    }

    return 0;
}