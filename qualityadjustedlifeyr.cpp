#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    float  c = 0.0;
    while(n--){
        float s,t;
        cin >> s >> t;
        c+= (s*t);
    }
    cout << c;

}

