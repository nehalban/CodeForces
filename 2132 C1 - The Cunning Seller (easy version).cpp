#include <bits/stdc++.h>
using namespace std;

void solve() {
//     long long n;
//     cin >> n;
//     vector<long long> v;
//     for (int k=log10(n);k>=1;k--) {
//         long long x=pow(10,k)+1;
//         if (n%x==0) v.push_back(n/x);
//     }
//     cout<<v.size()<<endl;
//     for (const auto x:v) cout<<x<<" ";
//     cout<<endl;


    int n;
    long long ans=0;
    cin>>n;
    int it=0;
    while (n) {
        ans+=(n%3)*(pow(3,it+1)+it*pow(3,it-1));
        n/=3;
        it++;
    }
    cout<<ans<<endl;
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
