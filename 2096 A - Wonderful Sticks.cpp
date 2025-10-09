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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int max, min;
    max = n;
    min = 1;
    int a[n];
 
    for (int i = 0; i < n-1; i++)
    {
        if (s[n-i-2]=='>'){
            a[n-i-1]=max;
            max--;
        }
        else if (s[n-i-2]=='<'){
            a[n-i-1]=min;
            min++;
        }
    }
    a[0] = max;
    for (int j = 0; j < n; j++)
    {
        cout<<a[j]<<' ';
    }
    cout<<'\n';
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}