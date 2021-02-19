#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n;
set<ll> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while(t--) {
        s.clear();
        cin >> n;
        for(ll i = 0; i < n; ++i) {
            ll temp;
            cin >> temp;
            s.insert(temp);
        }

        cout << (ll)s.size() - (s.count(0)) << endl;
    }

    return 0;
}