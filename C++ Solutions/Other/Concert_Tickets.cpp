#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ull unsigned long long
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rsz resize
#define bk back()
#define pb push_back
#define endl "\n"
#define dotl " "

#define fr1(i,a,b) for(int i = (a); i < (b); ++i)
#define fr(i,a) fr1(i,0,a)
#define rf1(i,a,b) for(int i = (b)-1; i >= (a); --i)
#define rf(i,a) rf1(i,0,a)
#define trav(x,a) for (auto& x: a)

#define deb(x) cout << #x << "=" << x << endl
#define showRunTime cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define ONLINE_JUDGE freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

const int MX  = 2e5+5;
const int N   = 1e5+5;
const int MOD = 1e9+7;      // used in most problems
const ld  PI  = acos(-1);   // inverse cos of -1

void solution(){
  int n, m, curr, tick;   cin>>n>>m; 
  multiset<int, greater<int>> mult;
  while(n--){ 
    cin>>tick;
    mult.insert(tick);
  }

  while(m--){
    cin>>curr;
    auto it = mult.lower_bound(curr);
    if(it == mult.end())  cout<<"-1"<<endl;
    else{
      cout<<*it<<endl;
      mult.erase(it);
    }
  }
}

int main(){
  // ONLINE_JUDGE;

  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t = 1;

  while (t--)
  {
    solution();
  }

  showRunTime;
  return 0;
}

/*

Input:
5 3
5 3 7 8 5
4 8 3

Output:
3
8
-1

*/