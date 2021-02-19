#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll table[1007][1007];

int main() {
    for(ll i = 0; i <= 1000; ++i) {
        for(ll j = 0; j <= 1000; ++j) table[i][j] = i^j;
    }    

    ll cnt = 0;
    for(ll i = 0; i <= 19; ++i) cnt += (ll)pow(2, i);

    cout << cnt << endl;

    return 0;
}