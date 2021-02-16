#include <bits/stdc++.h>
//#include "stdc++.h"
using namespace std;
const int mod = 1e9+7;


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
    string s; 
    cin >> s;
    if(s.length()<=0){
        cout <<0;
        return 1;
    }
   vector<int> qc;
   vector<int> tc;
   vector<int> ac;
 
    for(int i = 0; i< s.length(); i++ ){
        if(i==0 && s[i]=='0'){
            qc.push_back(0);
            tc.push_back(0);
            ac.push_back(0);
        }else if(i == 0 && s[i] =='1'){
            qc.push_back(0);
            tc.push_back(1);
            ac.push_back(0);
        }else if(i==0 && s[i] == '?'){
            qc.push_back(1);
            tc.push_back(1);
            ac.push_back(0);
        
        }else if(i!=0 && s[i]=='0'){
            //Grab the counter of previous ones
            qc.push_back(qc[qc.size()-1]);
            tc.push_back(tc[tc.size()-1]);
            ac.push_back((ac[ac.size()-1] + tc[tc.size()-2])%mod);
        }else if(i!=0 && s[i] == '1'){
            qc.push_back(qc[qc.size()-1]);
            tc.push_back((tc[tc.size()-1]+ binpow(2,qc[qc.size()-2], mod))%mod);
            //tc.push_back(tc[tc.size()-1] + qc[qc.size()-1]);
            ac.push_back((ac[ac.size()-1])%mod); 
        }else if(i!=0 && s[i]=='?'){
            qc.push_back((qc[qc.size()-1]+1)%mod);
            //modify accumulator
            tc.push_back(((tc[tc.size()-1]*2)%mod+ binpow(2,qc[qc.size()-2], mod))%mod);
            //tc.push_back(tc[tc.size()-1]*2 + qc[qc.size()-1]);
            ac.push_back(((ac[ac.size()-1]*2)%mod + tc[tc.size()-2])%mod);
        }
    }    

/*    for(auto &i : tc)
        cout<< i << "\n";
    for(auto &j: ac)
        cout<<j << "\n";
*/
    cout << ac[ac.size()-1]%mod;
    return 0;
}
