#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define FoR(i, a) for(int i=0; i<a; i++)
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define MEM(a, b, n) memset(a, b, sizeof(a[0])*n)
#define pb push_back
#define endl "\n"

const int MOD = 1e9+7;
const int SIZE_INT = 16;


void solve()
{
    string line;
    cin>>line;

    ll pair=0;
    char present, past;
    past = line[0];
    for(ll i=1; i<line.length(); i++){
        present = line[i];

        if(past == present){
            past = present;
            continue;
        }
        else{
            pair++;
            past = line[i+1];
            i++;
        }
    }

    cout<<pair<<endl; 
}

int main()
{
    //two lines to speed-up
    cin.tie(0);
    ios::sync_with_stdio(false);

    // solve();

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        solve();
    }

    return 0;
}