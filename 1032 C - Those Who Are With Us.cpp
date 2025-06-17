#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
using namespace std;
void solve(){
    int n=0,m=0, maxim=0;
    cin>>n>>m;
    vector<pair<int, int>> coord;
    int grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
            maxim = max(maxim, grid[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == maxim)
            {
                coord.push_back(make_pair(i, j));
            }
        }
    }
    int size = coord.size();
    if (size == 1||size == 2)
    {
        cout<< maxim-1<<'\n';
        return;
    }
    else if (size>n+m-1)
    {
        cout<<maxim<<'\n';
        return;
    }
    else if (size == 3)
    {
        int r1 = coord[0].first, c1 = coord[0].second;
        int r2 = coord[1].first, c2 = coord[1].second;
        int r3 = coord[2].first, c3 = coord[2].second;
        if ((r1 == r2 && r1 == r3) || (c1 == c2 && c1 == c3))
        {
            cout<<maxim-1<<'\n';
            return;
        }
        else if (r1 == r2 || c1 == c2 || r1 == r3 || c1 == c3 || r2 == r3 || c2 == c3)
        {
            cout<<maxim-1<<'\n';
            return;
        }
        else{
            cout<<maxim<<'\n';
            return;
        }
    }
    else{
        int r1 = coord[0].first, c1 = coord[0].second;
        int r2 = coord[1].first, c2 = coord[1].second;
        int r=-1, c=-1;
        if(r1 == r2){
            r= r1;
        }
        else if(c1 == c2){
            c = c1;
        }
        else{
            if (coord[2].first == r1) {
                r=r1;
                c=c2;
            }
            else if (coord[2].first == r2) {
                r=r2;
                c=c1;
            }
            else{
                if(coord[2].second == c1) {
                    c=c1;
                    r=r2;
                }
                else if (coord[2].second == c2) {
                    c=c2;
                    r=r1;
                }
                else{
                    cout<<maxim<<'\n';
                    return;
                }
            }
            
        }
        for (int k = 2; k < size; k++)
        {
            if (coord[k].first == r || coord[k].second == c) continue;
            else if (r == -1) r= coord[k].first;
            else if (c == -1) c = coord[k].second;
            else{
                cout<<maxim<<'\n';
                return;
            }
            
        }
        cout<< maxim-1<<'\n';
        return;
        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}
