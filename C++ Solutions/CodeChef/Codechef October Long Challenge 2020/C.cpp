#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> v;
        for(ll i = 1; i <= n; ++i) v.push_back(i);

        if((n & (n - 1)) == 0) {
            cout << "-1\n";
            continue;
        }

        do {
            //if(v[0]%2 == 1) continue;
            bool ok = 1;
            for(ll i = 0; i < n - 1; ++i) if((v[i] & v[i + 1]) == 0) {
                ok = 0;
                break;
            } 
            
            if(ok) {
                for(ll i = 0; i < n; ++i) cout << v[i] << ' ';
                cout << '\n';
            }

        } while(next_permutation(v.begin(), v.end()));
    }

    return 0;
}