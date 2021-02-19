#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        if(n == 1) {
            cout << 1 << '\n';
            continue;
        }
        if((n & (n - 1)) == 0) {
            cout << "-1\n";
            continue;
        }
        cout << 2 << ' ' << 3 << ' ' << 1 << ' ';
        for(ll i = 4; i <= n; ++i) {
            if((i & (i - 1)) == 0) {
                cout << i + 1 << ' ';
            } else if(((i - 1) & (i - 2)) == 0) {
                cout << i - 1 << ' ';
            } else cout << i << ' ';
        }

        cout << '\n';
    }

    return 0;
}