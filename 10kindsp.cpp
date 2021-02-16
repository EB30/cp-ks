//#include<bits/stdc++.h>
#include "stdc++.h"
using namespace std;



vector<vector<int>> vi;

int main(){
    int r, c;
    cin >> r >> c;
    for(int i =0; i< r; i++){
        vector<int> temp;
        for(int j = 0; j<c; j++){
            int t; 
            cin >> t;
            cout << t << "\n";
            temp.push_back(t);
        }
        vi.push_back(temp);
    }
/*   while(n--){
       int ri, ci, rj, cj;
       cin >> ri >> ci >> rj >> cj;
//       check(a, b, c, d);
        cout << ri << ci << rj << cj << "\n";
   }

*/
    return 0;
}
