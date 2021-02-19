#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, k, p;

int main() {
    scanf("%lld", &t);
    while(t--) {
        ll ans = INT_MAX, j = -1;
        scanf("%lld %lld", &n, &k);
        for(ll i = 1; i <= n; ++i) {
            scanf("%lld", &p);
            if(p > k) continue;
            if((k - p)%p == 0 && (k - p)/p < ans) {
                ans = (k - p)/p;
                j = p;
            }
        }

        printf("%lld\n", j);
    }

    return 0;
}