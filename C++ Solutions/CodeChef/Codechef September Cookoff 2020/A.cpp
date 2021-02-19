#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, k, l;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n >> k >> l;
        if(n/k + (n%k != 0) > l) {
            cout << -1 << '\n';
            continue;
        }

        if(k == 1 && n != 1) {
            cout << -1 << '\n';
            continue;
        }

        ll cur = 1;
        for(ll i = 1; i <= n; ++i) {
            cout << cur << ' ';
            cur = cur + 1;
            if(cur > k) {
                cur = 1;
            }
        }

        cout << '\n';
    }

    return 0;
}