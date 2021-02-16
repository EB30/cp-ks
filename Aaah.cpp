//#include "stdc++.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    string n, m;
    cin >> n >> m;
    string s = "";
    if(m.length() > n.length()){
        s += "no";
    }else{ 
        s += "go";
   }
    cout << s;
    return 0;
}
