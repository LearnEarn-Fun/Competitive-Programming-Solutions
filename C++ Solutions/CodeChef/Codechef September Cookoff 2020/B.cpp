#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, k;
string s;

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> k >> s;

        ll first = 0, last = 0;
        while(s[first] == '0') first++;
        while(s[n - 1 - last] == '0') last++;

        ll ones = 0;
        for(ll i = 0; i < n; ++i) if(s[i] == '1') ones++;

        ll ans = n - ones;

        vector<ll> res;
        vector<ll> res2;

        res2.push_back(first);
        res2.push_back(last);

        ll cur = 0;

        for(ll i = first; i < n; ++i) {
            if(s[i] == '0') cur++;
            else {
                res.push_back(cur);
                cur = 0;
            }
        }

        sort(res.begin(), res.end(), greater<ll>());
        sort(res2.begin(), res2.end(), greater<ll>());

        for(ll i = 0; i < res.size(); ++i) {
            if(k < 2) break;
            if((res2[0] || res2[1]) && res2[0] + res2[1] >= res[i]) {
                if(res2[0]) k--;
                if(res2[1]) k--;
                ans -= (res2[0] + res2[1]);
                res2[0] = res2[1] = 0;
            } else {
                k -= 2;
                ans -= res[i];
            }
        }

        if(k) {
            if(res2[1] && res2[0]) {
                if(k >= 2) ans -= res2[0] + res2[1];
                else ans -= max(res2[0], res2[1]);
            } else if(res2[1]) {
                ans -= res2[1];
            } else if(res2[0]) {
                ans -= res2[0];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}