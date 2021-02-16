#include<bits/stdc++.h>
//#include"stdc++.h"
using namespace std;


int main(){
    string s;
    cin >> s;
    int c = 1;
    for(auto &i: s){    
        if(i == 'A'){
            if(c==1)
                c=2;
            else if(c==2)
                c=1;
        }
        else if(i == 'B'){
              if(c==2)
                  c=3;
              else if(c==3)
                  c=2;
        }
        else if(i == 'C'){
            if(c==1)
                c=3;
            else if(c==3)
                c=1;
        }
    }
    cout << c;

    return 0;

}
