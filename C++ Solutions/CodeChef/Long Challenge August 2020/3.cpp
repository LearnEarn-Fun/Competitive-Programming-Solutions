#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, pc, pr;

int main() {
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld %lld", &pc, &pr);
        pc = pc/9 + (pc%9 > 0);
        pr = pr/9 + (pr%9 > 0);

        if(pc >= pr) printf("1 %lld\n", pr);
        else printf("0 %lld\n", pc);
    }

    return 0;
}