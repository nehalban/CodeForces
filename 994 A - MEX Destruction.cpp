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

int main(){
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    // vector<int> a(n);
    int prev_nonzero=-1;
    bool nonzero_consec=true;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x!=0 && prev_nonzero==-1){
            prev_nonzero=i;
        }
        else if(x!=0 && prev_nonzero==i-1){
            prev_nonzero++;
            nonzero_consec=true;
        }
        else if(x!=0){
            nonzero_consec=false;
        }
   }

   if(prev_nonzero==-1){
    cout<<0<<'\n';
   }
   else if(nonzero_consec){
    cout<<1<<'\n';
   }
   else{
    cout<<2<<'\n';
   }
   
   }
    return 0;
}