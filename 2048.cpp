//#include <bits/stdc++.h>
#include "stdc++.h"
using namespace std;


int countback(vector<int>){
    int count = 0; 
}

vector<vector<int>> op(vector<vector<int>> vi, n){

    if(n==0){
        for(auto &v: vi){
            if(v[0] == v[1] && v[0]!=0){
                v[0] *=2;
                v[1] = v[2];
                v[2] = v[3];
                v[3] = 0;
                if(v[1]==v[2] && v[1]!=0){
                    v[1]*=2;
                    v[2] = 0;
                }
            }

        }


    }else if (n ==1){

    }else if (n==2){

    }else if(n==3){

    }

}

int main(){
    vector<vector<int>> vi;
    while(4--){
        vector<int> temp;
        while(4--){
            int t; 
            cin >> t;
            temp.push_back(t);
        }
        vi.push_back(temp);
    }
    int n; 
    cin >> n;
    vi = op(vi, n);
    cout << prt(vi);




}
