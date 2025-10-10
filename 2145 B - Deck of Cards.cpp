#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>
#include <queue>
#include <map>
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
 
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int top=0, bottom=0, either=0;
    for (char c : s) {
        if (c == '0') top++;
        else if (c == '1') bottom++;
        else if (c == '2') either++;
    }
    if(n-top-bottom==either){
        string ans;
        for(int i = 0; i < n; i++) ans.push_back('-');
        cout<<ans<<endl;
    }
    else if(n-top-bottom<=2*either){
        string ans;
        for(int i = 0; i < top; i++) ans.push_back('-');
        for(int i = 0; i < (n-top-bottom); i++) ans.push_back('?');
        for(int i = 0; i < bottom; i++) ans.push_back('-');
        cout<<ans<<endl;
    }
    else{
        string ans;
        for(int i = 0; i < top; i++) ans.push_back('-');
        for(int i = 0; i < either; i++) ans.push_back('?');
        for(int i = 0; i < (n-top-bottom-2*either); i++) ans.push_back('+');
        for(int i = 0; i < either; i++) ans.push_back('?');
        for(int i = 0; i < bottom; i++) ans.push_back('-');
        cout<<ans<<endl;
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
