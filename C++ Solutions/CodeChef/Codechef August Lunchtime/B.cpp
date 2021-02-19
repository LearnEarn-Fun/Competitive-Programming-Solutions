#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
typedef long long int ll;
int main() {
    int t;
    cin >> t;
    //cout << endl;
    while (t--) {
        //GOOD LUCK
        int n, m;
        cin >> n >> m;
        pair<int, int> r[n];
        int rating[n][m+1];
        for (int i = 0; i < n; i ++) {
            cin >> rating[i][0];
        }
        for (int j = 0; j < n; j ++) {
            for (int i = 1; i <= m; i ++) {
                int x;
                cin >> x;
                //cout << x << endl;
                rating[j][i] = rating[j][i-1]+x;
                //cout << rating[j][i] << " ";
            }
            //cout << endl;
        }
        int ranking[n][m+1];
        for (int i = 1; i <= m; i ++) {
            vector<pair<int, int> >sorter;
            for (int j = 0; j < n; j ++) {
                sorter.push_back(make_pair(-1*rating[j][i], j));
            }
            sort(sorter.begin(), sorter.end());
            ranking[sorter[0].second][i] = 0;
            for (int j = 1; j < n; j ++) {
                if (sorter[j].first == sorter[j-1].first) {
                    ranking[sorter[j].second][i] = ranking[sorter[j-1].second][i];
                }
                else {
                    ranking[sorter[j].second][i] = j;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i ++) {
            int max_rating = -1000000000;
            int pos_rating;
            int max_ranking = 1000000000;
            int pos_ranking;
            for (int j = 1; j <= m; j ++) {
                if (rating[i][j] > max_rating) {
                    max_rating = rating[i][j];
                    pos_rating = j;
                }
                if (ranking[i][j] > max_ranking) {
                    max_ranking = ranking[i][j];
                    pos_ranking = j;
                }
                //cout << ranking[i][j] << " ";
            }
            if (pos_ranking != pos_rating) {
                ans ++;
            }
            //cout << endl;
        } 
        cout << ans << endl;
    }  
}