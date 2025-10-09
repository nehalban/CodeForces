// For Output, paste in terminal:
// g++ -std=c++11 -O2 -Wall filename.cpp 
// ./a.out

#include <iostream>
#include <cmath>
using namespace std;



void solve(){
    int w,h,a,b,x1,y1,x2,y2;
    cin>>w>>h>>a>>b;
    cin>>x1>>y1>>x2>>y2;
    if((!(x1-x2) && (y1-y2)%b)|| (!(y1-y2) && (x1-x2)%a)) cout<<"No"<<'\n';
    else if((x1-x2)%a && (y1-y2)%b) cout<<"No"<<'\n';
    else cout<<"Yes"<<'\n';
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