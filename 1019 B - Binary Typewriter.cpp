#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    char prev='0';
    int switchh=0;
    vector<char> s(n);
    for (int i=0; i<n; i++){
        cin>>s[i];
        if (prev!=s[i]){
            switchh++;
            prev=s[i];}
    }
    switch (switchh){
        case 0:
            cout<<n<<'\n';
            break;
        case 1:
        case 2:
            cout<<n+1<<'\n';
            break;
        default:
            cout<<n+switchh-2<<'\n';
            break;
    }
    return;
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}