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
    vector<int> a(n);
    bool ans=false;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i!=0 && 2*a[i-1]>a[i] && a[i]>a[i-1]/2){
            ans=true;
        }
    }
    cout<<((ans)?"Yes":"No")<<'\n';
    
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
