#include<bits/stdc++.h>
//#include "stdc++.h"
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int c =n;
    while(m--){
        int t; 
        cin >> t;
        c+=(n - t);
    }
    cout << c;
    return 0;
}
