#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int cons =0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') cons++;
        else cons=0;
        if (cons>=k) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    vector<int> v(n,0);
    int one=1,zero=n;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            cout<<one<<' ';
            one++;
        }
        else {
            cout<<zero<<' ';
            zero--;
        }
    }
    cout<<endl;

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
