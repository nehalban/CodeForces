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
    vector<string> a(t);
    for (int j= 0; j < t; j++){
        string str;
        cin>>str;
        int l=str.length();
        if(l>10){
            cout<<str[0]<<(l-2)<<str[l-1]<<'\n';
        }
        else{
            cout<<str<<'\n';
        }
    }
    // for (int i = 0; i < t; i++)
    // {
        
    // }
    return 0;
}