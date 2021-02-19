#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, k;
vector<ll> v;

int main() {
    cin >> t;
    for(ll tc = 1; tc <= t; ++tc) {
        cin >> k;
        for(ll i = 0; i < k; ++i) {
            ll a;
            cin >> a;
            v.push_back(a);
        }

        ll curNote = 0, ans = 0;    
        for(ll i = 1; i < k; ++i) {
            if(v[i] > v[i - 1]) curNote++;
            else if(v[i] < v[i + 1]) curNote--;

            if(curNote > 3 || curNote < -3) {
                ans++;
                curNote = 0;
            }
        }

        cout << "Case #" << tc << ": " << ans << endl;
    }

    return 0;
}

