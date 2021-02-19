#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, b, a[100007];

int main() {
    scanf("%lld", &t);
    for(ll tc = 1; tc <= t; ++tc) {
        scanf("%lld %lld", &n, &b);
        for(ll i = 0; i < n; ++i) scanf("%lld", &a[i]);

        sort(a, a + n);
        ll cnt = 0, i;

        for(i = 0; i < n; i++) {
            if(a[i] + cnt <= b) cnt += a[i];
            else {
                break;
            }
        }

        printf("Case #%lld: %lld\n", tc, i);         
    }
    return 0;
}