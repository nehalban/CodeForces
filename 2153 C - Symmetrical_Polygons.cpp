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
    unsigned int n;
    cin>>n;
    vector<int> arr(n);
    for (unsigned int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    queue<int> unpaired;
    long long paired=0;
    priority_queue<int, vector<int>> pq(arr.begin(), arr.end());
    while(pq.size()>1){
        int temp = pq.top();
        pq.pop();
        if(temp == pq.top()){
            pq.pop();
            paired+=temp;
        }
        else{
            unpaired.push(temp);
        }
    }
    if(!pq.empty()) unpaired.push(pq.top());
    
    if(paired==0) cout<<0<<'\n';
    else if(unpaired.empty() && n==2) cout<<0<<'\n';
    else if(unpaired.empty()) cout<<2*paired<<'\n';
    else{
        unsigned int k = unpaired.size();
        int temp = unpaired.front();
        unpaired.pop();
        while(!unpaired.empty() && temp-unpaired.front()>=2*paired){
            temp = unpaired.front();
            unpaired.pop();
        }
        if(!unpaired.empty()){
            cout<<2*paired+unpaired.front()+temp<<'\n';
        }
        else if(temp<2*paired) cout<<temp+2*paired<<'\n';
        else if(n-k>2) cout<<2*paired<<'\n';
        else cout<<0<<'\n';
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
