#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, temp, res[20];

const ll ones = 1048575;

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        memset(res, 0, sizeof(res));
        cout << 1 << ' ' << ones << '\n';
        cout.flush();

        ll allOnes;

        cin >> allOnes;

        for(ll i = 1; i < 20; ++i) {
            cout << 1 << ' ' << ones - (1 << i) << '\n';
            cout.flush();

            cin >> temp;
            ll diff = temp - allOnes;
            res[i] = (((1 << i) * n + diff)/(2 * (1 << i)))%2;

        }

        ll ans = 0, place = 1;
        if(allOnes%2 != n%2) ans++;
        for(ll i = 1; i < 20; ++i) {
            ans += place * res[i];
            place *= 2;
        }

        cout << 2 << ' ' << ans << '\n';                                                                                                                                                                                                                                                                                                                                 
        cout.flush();

        cin >> temp;
        if(temp == -1) return 0;
    }

    return 0;
}