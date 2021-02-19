#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, grid[67][67];
bool res[67];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; ++i) {
            for(ll j = 0; j < n; ++j) cin >> grid[i][j];
        }

        memset(res, 0, sizeof(res));
        
        for(ll i = 1; i < n; ++i) {
            if(grid[0][i] != i + 1) res[i] = 1;
        }

        //for(ll i = 0; i < n; ++i) cout << res[i] << ' ';
        //cout << endl;

        ll ans = 0;
        for(ll i = 2; i < n; ++i) if(res[i] != res[i - 1]) ans++;

        if(res[n - 1]) ans++;
        cout << ans << endl;
    }

    return 0;
}