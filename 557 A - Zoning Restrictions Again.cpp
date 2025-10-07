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

int main(){
   int n,h,m;
   cin>>n>>h>>m;
   int a[n];
   for (int i = 0; i < n; i++)
   {
        a[i]=h;
   }
   for (int i = 0; i < m; i++)
   {
    int l,r,x;
    cin>>l>>r>>x;
    if(x<h){
        for (int k = l-1; k < r; k++)
        {
            a[k]=min(a[k],x);
        }
    }
   }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans+=a[i]*a[i];
    }
    cout<<ans<<'\n';
    
}