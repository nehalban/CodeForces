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

bool find(int a[], int size_a, int b){
    for (int i = 0; i < size_a; i++)
    {
        if(a[i]==b){
            return true;
        }
    }
    return false;
}
int main(){
   int n;
   cin>>n;
   int a[n][n];
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cin>>a[i][j];
       }
       
   }
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
        if(a[i][j]==1){
            continue;
        }
        else{
            bool l = true;
            for (int k = 0; k < n; k++)
            {
               if(a[i][j]<=a[k][j]){
                continue;
               }
               else if (find(a[i],n,a[i][j]-a[k][j])){
                l=false;
                break;
               }
            }
            if (l)
               {
                   cout<<"No"<<'\n';
                   return 0;
               }
        }
    }
    
   }
    cout<<"Yes"<<'\n';
     return 0;
   
}