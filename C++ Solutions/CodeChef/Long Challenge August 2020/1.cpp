#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, h, p;

int main() {
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld %lld", &h, &p);
        while(h && p) {
            h -= p;
            p /= 2;
        }

        if(h <= 0) printf("1\n");
        else printf("0\n");
    }

    return 0;
}