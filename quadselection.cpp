#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n>> m;
    if(n>=0 && m>=0){
        cout << 1;
    }else if(n>=0 && m<=0){
        cout << 4;
    }else if(n<=0 && m>=0){
        cout << 2;
    }else if(n<=0 && m<=0){
        cout << 3;
    }

    return 0;
}
