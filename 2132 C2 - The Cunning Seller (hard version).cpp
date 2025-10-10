#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    long long ans=0;
    cin>>n>>k;
    vector<int> v(20,0);
    int it=0;
    while (n) {
        v[it]=n%3;
        k-=v[it];
        n/=3;
        it++;
    }
    if (k<0) {
        cout<<"-1"<<endl;
        return;
    }
    for (int i=it;i>0;i--) {
        if (k<=1) break;
        int p=min(v[i],k/2);
        v[i]-=p;
        v[i-1]+=3*p;
        k-=2*p;
    }
    for (int i=it;i>=0;i--) {ans+=v[i]*(pow(3,i+1)+i*pow(3,i-1));}
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
