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
    int x_,y_,z_;
    cin>>x_>>y_>>z_;
    bitset<32> x(x_), y(y_), z(z_);
    for (int i = 0; i < 32; i++)
    {
        if (x[i] + y[i]+z[i]==2)
        {
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
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
