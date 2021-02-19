#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, temp, t;
map<ll, ll> occ;
map<ll, ll> occ2;

int main() {
    cin >> t;
    while(t--) {
        occ.clear();
        occ2.clear();
        cin >> n;
        for(ll i = 0; i < n; ++i) {
            cin >> temp;
            occ[temp]++;
         }

        ll ans = 0, maxn = 0;
        for(auto i = occ.begin(); i != occ.end(); ++i) {
            occ2[i->second]++;
        }

        for(auto i = occ2.begin(); i != occ2.end(); ++i) {
            if(i->second > maxn) {
                ans = i->first;
                maxn = i->second;
            }
        }

        cout << ans << endl;
    }
    return 0;
}