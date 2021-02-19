#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, b[10007];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> b[i];

        bool ok = 1;
        for(ll i = 0; i < n; ++i) {
            if(b[i] > i + 1 || (i + 1)%b[i] != 0) {
                ok = 0;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}