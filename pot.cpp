#include<bits/stdc++.h>
//#include "stdc++.h"
using namespace std;
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
const int mod = 1e9+7;

int main(){
    int n; 
    cin >> n;
    long long total =0;
    while(n--){
        long long s,t;
        cin >> t;
        s = (t%10)%mod;
        t = (t-s)/10;
//        cout << s << "\n" << t << "\n";
        total += binpow(t,s, mod);
    }
    cout << total;
    
}
