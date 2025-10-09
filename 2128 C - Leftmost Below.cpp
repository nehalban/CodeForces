#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
	int a[n];
    bool ans=true;
    int m=1000000000;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]>2*m-1) ans=false;
        m=min(m,a[i]);
	}
    cout<<(ans?"YES":"NO")<<'\n';
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
