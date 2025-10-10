#include <bits/stdc++.h>
using namespace std;

void solve() {
     long long n;
     cin >> n;
     vector<long long> v;
     long long power= 10;
     for (int k=1;k<to_string(n).size();k++) {
         long long x=1+power;
         if (n%x==0) v.push_back(n/x);
         power*=10;
     }
     cout<<v.size()<<endl;
    reverse(v.begin(),v.end());
     for (const auto x:v) cout<<x<<" ";
     cout<<endl;


    // int n,k;
    // long long ans=0;
    // cin>>n>>k;
    //
    // int it=0;
    // while (n) {
    //     ans+=(n%3)*(pow(3,it+1)+it*pow(3,it-1));
    //     n/=3;
    //     it++;
    // }
    // cout<<ans<<endl;
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
