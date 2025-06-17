// For Output, paste in terminal:
// g++ -std=c++11 -O2 -Wall filename.cpp 
// ./a.out

#include <iostream>
#include <cmath>
using namespace std;



void solve(){
    int k,a,b,x,y,ans=0;
    cin>>k>>a>>b>>x>>y;
    if(x<=y){
        if(k>=a) ans = ans+ floor((k-a)/x)+1;
        if ((k-ans*x)>=b) ans= ans+ floor((k-ans*x-b)/y)+1;
    }
    else{
        if(k>=b) ans = ans+ floor((k-b)/y)+1;
        if ((k-ans*y)>=a) ans= ans+ floor((k-ans*y-a)/x)+1;
    }
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