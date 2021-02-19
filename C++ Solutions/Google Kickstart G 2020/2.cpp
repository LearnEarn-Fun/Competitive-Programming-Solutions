#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, grid[1007][1007], ans[2007];

int main() {
    cin >> t;
    for(ll tc = 1; tc <= t; ++tc) {
        memset(ans, 0, sizeof(ans[0]) * 2007);
        cin >> n;
        for(ll i = 1; i <= n; ++i) {
            for(ll j = 1; j <= n; ++j) cin >> grid[i][j];
        }

        ll res = 0;
        for(ll i = 1; i <= n; ++i) {
            for(ll j = 1; j <= n; ++j) {
                ans[i - j + 1000] += grid[i][j];
                res = max(res, ans[i - j + 1000]);
            }
        }

        cout << "Case #" << tc << ": " << res << '\n';
    }

    return 0;
}