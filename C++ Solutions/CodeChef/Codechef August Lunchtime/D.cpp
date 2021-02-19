#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t;
long double n, d;
long double c[100007];

bool check(long double x) {
    long double cur = c[0] + x;
    for(ll i = 1; i < n; ++i) {
        if(cur  - (c[i] + d) >= 0.000000000001) return 0;
        else {
            cur = max(cur + x, c[i] + x);
        }
    }

    return 1;
}

int main() {
    cin >> t;
    while(t--) {
       cin >> n >> d;

       long double maxn = 0.0;
       for(ll i = 0; i < n; ++i) {
           cin >> c[i];
       } 

       sort(c, c + (ll)n);

       //for(ll i = 0; i < n; ++i) cout << c[i] << endl;

       long double l = 0.0, r = c[(ll)n - 1] + d, ans = 0.0;

       while(r - l >= 0.000000000001) {
           long double mid = (l + r)/2.0;
           if(check(mid)) {
               ans = mid;
               l = mid + 0.000000000001;
           } else r = mid - 0.000000000001;
       }

       cout << fixed << setprecision(7) << ans << endl;
    }

    return 0;
}