#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, k, q[100007], n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(ll i = 0; i < n; ++i) cin >> q[i];

        ll prev = 0;
        bool ok = 0;
        for(ll i = 0; i < n; ++i) {
            if(prev + q[i] >= k) {
                prev = (prev + q[i]) - k;
            } else {
                prev = 0;
                cout << i + 1 << '\n';
                ok = 1;
                break;
            }
        }

        if(!ok) cout << n + prev/k + 1 << '\n';
    }

    return 0;
}