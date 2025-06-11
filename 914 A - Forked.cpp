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
    int a,b;
    pair <int, int> k;
    pair <int, int> q;
    cin>>a>>b;
    cin>>k.first>>k.second;
    cin>>q.first>>q.second;
    int cases = 0;
    set <pair<int, int>> places;

    for (int i: {a, -a})
    {
        for(int j: {b, -b})
        {
            places.insert(make_pair(k.first+i, k.second+j));
            places.insert(make_pair(k.first+j, k.second+i));

        }
    }
 
    for(pair<int, int> pr: places)
    {
        if (
            (
                abs(pr.first-q.first)==a &&
                abs(pr.second-q.second)==b)
            ||
            (
                abs(pr.first-q.first)==b &&
                abs(pr.second-q.second)==a)) cases++;
    }
    cout<<cases<<'\n';

}
 
int main(){
   int t;
   cin>>t;
   while (t--)
    {
        solve();
    }
}