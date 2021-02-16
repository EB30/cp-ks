#include "stdc++.h"
//#include<bits/stdc++.h>
using namespace std;


/*long long binpow(long long a, long long b, int m){
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
*/

const int mod = 1e9+7; 

int main(){
    float a;
    cin >> a;
    float b = pow(a, a);
    while(true){
        if((int)(a*100000.0)%mod==(int)(b*100000.0)%mod){
             cout << "check "<< b;
            return 1;
        }
        a = b;
        b = int((pow(b, b)*100000%mod))/100000.0; 
    }
    cout << b;
    return 0;
}
