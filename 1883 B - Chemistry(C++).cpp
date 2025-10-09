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
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    map<char,bool> mymap;
    for (char x: s){
        if (mymap.find(x)==mymap.end()){
            mymap[x]=true;
        }
        else{
            mymap[x]=!mymap[x];
        }
    }
    int odd=0;
    for(auto y : mymap){
        if (y.second == true){
            odd++;
        }
    }
    if(odd-k<2)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}