#include<bits/stdc++.h>
//#include "stdc++.h"
using namespace std;
int main(){
    int c; 
    cin >>c;
    for(int k =0; k< c; k++){
        int t;
        float avg = 0.000;
        vector<float> temp;
        cin >> t;
        for(int i =0; i< t; i++){
            float  s; 
            cin >> s;
            temp.push_back(s);
            avg+=s;
        }
        avg/=(float)(t);
        //cout << avg <<"\n";
        float per = 0.000;
        for(auto &i: temp){
            if(i>avg){
                per+= 1;
            }
        }
        per/= t;

        printf("%.3f",(per*100));
        cout << "%\n";
    }

}
