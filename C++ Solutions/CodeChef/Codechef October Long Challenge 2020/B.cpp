#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, k, x, y;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    while(t--) {
        cin >> n >> k >> x >> y;

        bool ok = 0;
        for(ll i = 0; i <= n; ++i) {
            if((x + i * k)%n == y) {
                cout << "YES\n";
                ok = 1;
                break;
            }
        }

        if(!ok) cout << "NO\n";
    }

    return 0;
}