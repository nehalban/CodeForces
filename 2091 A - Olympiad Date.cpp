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
    while(t--){
        int n, zero=0, one=0, two=0, three=0, five=0, ans=0;
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x==0 && zero!=3) zero++;
            else if (x==1 && one!=1) one++;
            else if (x==2 && two!=2) two++;
            else if (x==3 && three!=1) three++;
            else if (x==5 && five!=1) five++;

            if(i>=7 && ans==0){
                if (zero==3 && one==1 && two==2 && three==1 && five==1){
                    ans= i+1;
                }
            }
        }
        cout<<ans<<'\n';

    }
    
}