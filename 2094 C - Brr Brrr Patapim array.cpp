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
    int leftov = n*(2*n+1);
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i+j+1];
        }
        
    }
    for (int i = 1; i < 2*n; i++)
    {
        leftov-=a[i];
    }
    a[0] = leftov;
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