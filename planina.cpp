#include<bits/stdc++.h>
//#include"stdc++.h"
using namespace std;
//const int mod = 1e9+7;

long long binpow(long long a, long long b, int m){
    a %= m;
    long long res = 1;
    while(b > 0){
        if(b & 1)
            res=res*a % m;
        a = a * a % m;
        b>>=1;
    }
    return res;
}

int main(){

    long long  n;
    cin >> n;
   // cout << binpow(((binpow(2,n, mod)+1)%mod),2, mod)%mod;   
    long long c = 2;
    while(n>0){
        c*=2;
        c--;
        n--;
    }
    cout << c*c;
    return 0;
}
