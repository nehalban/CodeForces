#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>
#include <queue>
#include <map>
#include <cstdlib> 
#include <ctime>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> elements(n*m,0);
    vector<int> neighb(n*m,0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin>>x;
            a[i][j]=x;
            elements[x-1]=1;
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m-1; j++){
            if((a[i][j]==a[i][j+1] | a[i][j]==a[i+1][j])){
                neighb[a[i][j]-1]=1;
            }
        }
        if(a[i][m-1]==a[i+1][m-1]){
            neighb[a[i][m-1]-1]=1;
        }
        
    }

    for (int j = 0; j < m-1; j++)
    {
        if(a[n-1][j]==a[n-1][j+1]){
            neighb[a[n-1][j]-1]=1;
        }
    }
    int neighb_=0;
    int elements_=0;

    for (int i = 0; i < n*m; i++)
    {
        neighb_+=neighb[i];
        elements_+=elements[i];
    }
    if(neighb_<=1){
        cout<<elements_-1<<'\n';
    }
    else{
        cout<<elements_+neighb_-2<<'\n';
    }
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
   {
    solve();
   
   }
    return 0;
}