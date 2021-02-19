#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t;
map<char, ll> c;
string p, s;

int main() {
    scanf("%lld", &t);
    while(t--) {
        c.clear();
        string ans;
        cin >> s >> p;
        
        for(ll i = 0; i < s.length(); ++i) c[s[i]]++;
        for(ll i = 0; i < p.length(); ++i) c[p[i]]--;

        s.clear();
        for(auto i = c.begin(); i != c.end(); ++i) s += string(i->second, i->first);
        
        string pref = "", suff = s;
        ans = pref + p + suff;
        for(ll i = 0; i < s.length(); ++i) {
            //cout << pref << ' ' << suff << endl;
            string cur = pref + p + suff;
            pref += s[i];
            suff.erase(0, 1);
            ans = min(ans, cur);
        }

        string cur = s + p;
        ans = min(cur, ans);

        cout << ans << endl;
    }

    return 0;
}