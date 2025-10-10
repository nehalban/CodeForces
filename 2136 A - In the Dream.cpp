#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maxi = max(a,b);
    int mini = min(a,b);
    if (maxi-2>2*mini) {cout<<"NO"<<endl; return;}
    else {
        maxi = max(c-a,d-b);
        mini = min(c-a,d-b);
        if (maxi-2>2*mini) {cout<<"NO"<<endl; return;}
        else {cout<<"YES"<<endl; return;}
    }
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
