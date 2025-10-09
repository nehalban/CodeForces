#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;
    string a;
    cin>>a;
    int left=-1,right=n;
    for(int i=0;i<x-1;i++){if (a[i]=='#') left=i;}
    for(int i=x-1;i<n;i++) {
        if (a[i]=='#') {
            right=i;
            break;
        }
    }
    int walls = max(min(left+1,n-x),min(x-1,n-right));
    cout<<walls+1<<'\n';
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
