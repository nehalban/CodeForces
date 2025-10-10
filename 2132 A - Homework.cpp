#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    string a,b,c,v_str,d_str;
    cin>>n;
    cin>>a;
    cin>>m;
    cin>>b>>c;
    for (int i=0;i<m;i++) {
        if (c[i]=='V') v_str+=b[i];
        else d_str+=b[i];
    }
    reverse(v_str.begin(),v_str.end());
    cout<<v_str<<a<<d_str<<endl;
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
