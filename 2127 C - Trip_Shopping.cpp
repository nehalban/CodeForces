#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<pair<long long,long long> > v(n, pair<long long,long long>());
    for(int i=0;i<n;i++) {cin>>v[i].first;}
    for(int i=0;i<n;i++) {cin>>v[i].second;}
    for(int i=0;i<n;i++) {
        if (v[i].second<v[i].first) {
            swap(v[i].first,v[i].second);
        }

    }
    sort(v.begin(),v.end());
    long long ans=0;
    long long diff=1000000000;
    for(int i=0;i<n-1;i++) {
        diff = min(v[i+1].first-v[i].second, diff);
        ans+=v[i].second-v[i].first;
    }
    ans+=v[n-1].second-v[n-1].first;
    if (diff<=0) cout<< ans<<endl;
    else cout<< ans+2*diff<<endl;
    // vector<int> a(n);
    // vector<int> b(n);
    // bool same_array = false;
    // for (int i=0;i<n;i++) {cin>>a[i];}
    // for (int i=0;i<n;i++) {cin>>b[i];}
    // for (int i=0;i<n;i++) {
    //     int const maxi = max(a[i],b[i]);
    //     int const mini = min(a[i],b[i]);
    //     for (int j=i+1;j<n;j++) {
    //         if (!(((a[j]>=maxi) && (b[j]>=maxi))||((a[j]<=mini) && (b[j]<=mini)))) {same_array = true;}
    //     }
    // }
    // int diff=0;
    // if (!same_array) {
    //     diff=1000000000;
    //     sort(a.begin(),a.end());
    //     sort(b.begin(),b.end());
    //     for (int i=0;i<n-1;i++) {
    //         diff=min(diff,min(a[i+1],b[i+1])-max(a[i],b[i]));
    //     }
    // }
    // int ans=2*diff;
    // for (int i=0;i<n;i++) {
    //     ans+=abs(a[i]-b[i]);
    // }
    // cout<<ans<<'\n';

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
