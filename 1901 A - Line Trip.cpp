#include <iostream>
// #include <set>
// #include <string>
// #include <algorithm>
// #include <vector>
// #include <bitset>
// #include <queue>
// #include <map>
// #include <cstdlib> 
// #include <ctime>
using namespace std;
 
void solve(){
    int n, x, a=0, b, tank=1;
    cin>>n>>x;
 
    for (int i = 0; i < n-1; i++)
    {
        cin>>b;
        tank = max(tank, b-a);
        a=b;
    }
    cin>>b;
    tank = max(tank, b-a);
    tank = max(tank, 2*(x-b));
    cout<<tank<<'\n';
}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}