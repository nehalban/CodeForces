#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ans= false;
    map<char, int> freq;
    for (int i=0;i<n-1;i++){
        if (freq[s[i]]) ans=true;
        else freq[s[i]]++;
    }
    if (freq[s[n-1]] && (s[n-1] != s[0])) ans = true;
    if(ans){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    return;
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
