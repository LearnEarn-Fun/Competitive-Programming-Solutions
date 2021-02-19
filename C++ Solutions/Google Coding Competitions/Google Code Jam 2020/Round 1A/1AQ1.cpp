#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n;
vector<string> vs;
vector<string> vp;

void stringPut(string s) {
    ll pos = s.find('*');

    if(pos == 0) {
        s.erase(0, 1);
        reverse(s.begin(), s.end());
        vs.push_back(s);
    } else if(pos == s.length() - 1) {
        s.erase(s.length() - 1, 1);
        vp.push_back(s);
    } else {
        string suffix = s.substr(pos + 1);
        string prefix = s.substr(0, pos);
        reverse(suffix.begin(), suffix.end());
        vs.push_back(suffix);
        vp.push_back(prefix);
    }
}

int main() {
    scanf("%lld", &t);
    for(ll tc = 1; tc <= t; ++tc) {
        vs.clear();
        vp.clear();
        scanf("%lld", &n);
        for(ll i = 0; i < n; ++i) {
            string s;
            cin >> s; 
            stringPut(s);
        }
        printf("Case #%lld: ", tc);
        bool flag = false;
        sort(vs.begin(), vs.end());
        sort(vp.begin(), vp.end());
        if(vs.size())
        for(ll i = 0; i < vs.size() - 1; ++i) {
            if(vs[i+1].substr(0, vs[i].length()) != vs[i]) {
                flag = 1;
                printf("*\n");
                break;
            }
        }
        if(!flag && vp.size())
        for(ll i = 0; i < vp.size() - 1; ++i) {
            if(vp[i+1].substr(0, vp[i].length()) != vp[i]) {
                flag = 1;
                printf("*\n");
                break;
            }
        }
        if(vs.size()) reverse(vs[vs.size()-1].begin(), vs[vs.size()-1].end());
        if(!flag) {
            if(vp.size()) cout << vp[vp.size() - 1];
            if(vs.size()) cout << vs[vs.size() - 1];
            cout << endl;
        }
    }
}