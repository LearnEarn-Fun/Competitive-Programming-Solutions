#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
string s;
string kick = "KICK", start = "START";
ll tc;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> tc;

    for(ll curT = 1; curT <= tc; ++curT) {
        cin >> s;
        ll cnt = 0, ans = 0;
        for(ll i = 0; i < (ll)s.length(); ++i) {
            if(i + 3 < (ll)s.length()) {
                string t = s.substr(i, 4);
            if(t == kick) cnt++;
        }

            if(i + 4 < (ll)s.length()) {
                string t = s.substr(i, 5);
                if(t == start) ans += cnt;
            }
        }

        cout << "Case #" << curT << ": " << ans << '\n';
    }

    return 0;
}