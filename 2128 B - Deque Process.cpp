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
    while (t--) {
        //solve
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool up = true;
        int p = 0, q = n - 1;
        while(p < q) {
            if (up) {
                a[p] < a[q] ? cout << "RL" : cout << "LR";
            }
            else {
                a[p] > a[q] ? cout << "RL" : cout << "LR";
            }
			up = !up;
            p++;
            q--;
        }
        if (p == q) {
            cout << "R";
		}
        cout << endl;
    }
    
}
