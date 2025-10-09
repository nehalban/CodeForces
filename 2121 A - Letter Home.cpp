#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void solve(){
    int n, s, ans=0;
    cin>>n>>s;
    int a[n];
    int minim=100, maxim=1;
    for (int i=0;i<n;i++){
        cin>>a[i];
        minim = min(minim, a[i]);
        maxim = max(maxim, a[i]);
    }
    ans = ans + min(abs(s-minim), abs(s-maxim)) + abs(maxim-minim);
    cout<<ans<<'\n';
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
