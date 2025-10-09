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
    int ans =0;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if ((2*i+2)<=a[i] | i==0)
        {
            continue;
        }
        else if (i+2<=a[i] && a[i]<2*i+2)
        {
            if(a[a[i]-i-2]==1){
                ans++;
            }
        }
        else if(i+1>=a[i])
        {
            for (int j = 0; j < i; j++)
            {
                if(a[j]*a[i]==i+j+2){
                    ans++;
                }
            }
        }
       
    }
    cout<<ans<<endl;
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