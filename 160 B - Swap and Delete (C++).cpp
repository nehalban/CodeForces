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
#include <cstring>
#include <cmath>
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    vector<bool> a;
    int zero=0, one=0;
    for (char i:s){
        if (i=='0') {a.push_back(false);zero++;}
        else {a.push_back(true);one++;}
    }
    int n=one+zero;
    if(zero==one) n-=1;
    for(bool i:a){
        if (zero>-1 && one>-1){
            if(i) zero--;
            else one--;
            n-=1;
        }
        else break;
    }
    cout<<n+1<<'\n';
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}