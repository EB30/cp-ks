#include <bits/stdc++.h>
//#include "stdc++.h"
using namespace std;

int sod(int x){
    int s  = 0;
    while(x>0){
        int add = x%10;
        s += add;
        x/=10;
    }
    return s;
}

int main (){
    int a,b,c;
    cin >> a >> b >> c;;
    int d = a;//start min; end max
    int e = b;//start min; end max
    
    for(int i= a; i<=b; i++){
        if(sod(i) == c){
            if(i>d){
                d = i;
            }
            if(i<e){
                e = i;
            }
        }
    }
    cout << e<< "\n" << d;

    return 0;
}
