#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,x;
    cin>>n;
    if(n%3== 0) {
        cout << "0\n";
        return;
    }
    if(n%3==1) {
        cout << "2\n";
        return;

    }
    if(n%3==2) {
        cout << "1\n";
        return;
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

