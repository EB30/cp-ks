#include "stdc++.h"
//#include <bits/stdc++>
using namespace std;

const int mod = 1e9+7;
int ninversion(string s){
    int count = 0; 
    for(int i =0; i< s.length()-1; i++){
        for(int j = i+1; j< s.length(); j++){
            if(s[i] > s[j])
                count++;
        }
    }
    return count;
}


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
    string a; 
    int lent = binpow(2,500000, mod);
    cout << lent << "\n";
    string strl[lent];
    cin >> a;
    int sum = 0;
    int k = a.length();
    int sp = binpow(2,k,1);
    cout << sp;
    //int klent = binpow(2,k, mod);
    if(k<=1)
        cout << sum;

    for(int i =0; i< k; i++){
        if(a[i]==0 || a[i]==1) 
            for(int j =0; j<binpow(2,k, mod); j++)
                strl[j]+= a[i];
        if(a[i] == '?')
            for(int j = 0; j<binpow(2,k, mod); j+=2){
                strl[j]+= "0";
                strl[j+1]+="1"; 
        }
    }
    for(int i =0; i<(binpow(2,k, mod)); i++){
        sum = (sum +ninversion(strl[i]))%mod;
        cout << "test";
    }

    cout << sum;


    return 0;
}
