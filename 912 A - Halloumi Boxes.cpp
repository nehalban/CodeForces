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
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    if(k==1){
        bool non_dec = true;
        int x,y;
        x=y=0;
        while(n--)
        {
            cin>>y;
            if(y<x) non_dec = false;
            x=y;
        }
        cout<<(non_dec?"YES":"NO")<<'\n';
    }
    else{
        int temp;
        while(n--) cin>>temp;
        cout<<"YES"<<'\n';
    } 
}
 
int main(){
   int t;
   cin>>t;
   while (t--)solve();
}