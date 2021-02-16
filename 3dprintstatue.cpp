//#include<bits/stdc++.h>
#include "stdc++.h"
using namespace std;

bool check(int n, int i){
    int temp = (pow(2,i/2) + pow(2, (i-2)/2))*((i)/2) + pow(2,(i-2)/2);
    if(temp>=n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;

    cout << check(n, 4);
    //cout << n << "\n";
   /* if(n<=4){
        cout << n;
    }else{ 
        for(int i = 4; i<=n; i++){
            if(check(n, i)){
                cout << i; 
                break;
            }
        }
    }
    */
    //cout << -1;
    return 0;
}
