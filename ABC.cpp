#include<bits/stdc++.h>
//#include "stdc++.h"
using namespace std; 
int main(){
    int n, m, p;
    vector<int> v;
    string s;
    string t;
    
   cin >> n >> m >> p;
    v.push_back(n);
    v.push_back(m);
    v.push_back(p);
    sort(v.begin(), v.end());
  //  for(auto &i: v)
   //     cout <<i;
        
    cin >> s;
    if(s == "ABC"){
        cout << v[0] << " " << v[1] << " " << v[2];
    }else if (s == "ACB"){
        cout << v[0] << " " << v[2] << " " << v[1];
    }else if (s == "BCA"){
        cout << v[1] << " " << v[2] << " " << v[0];
    }else if (s == "BAC"){
        cout << v[1] << " " << v[0] << " " << v[2];
    }else if (s == "CBA"){
        cout << v[2] << " " << v[1] << " " << v[0];
    }else if (s == "CAB"){
        cout << v[2] << " " << v[0] << " " << v[1];
    }
}
