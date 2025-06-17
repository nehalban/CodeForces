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
    int n;
    cin>>n;
    int a[2*n];
    vector <bool> b(2*n+1, false);
    b[0] = true;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            a[i+j+1] = x;
            b[x] = true;
        }
        
    }
    for (int i = 0; i < 2*n+1; i++)
    {
        if (b[i]==false) a[0]=i;
    }
    for (int i = 0; i < 2*n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
    
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}