#include<bits/stdc++.h>
//#include "stdc++.h"
using namespace std;



int main(){
    int n;
    double curi,curj, previ;
    double prevj = -1.0;
    double area = 0.0;
    cin >> n;
    for(int i =0; i< n; i++){
        cin >> curi >> curj; 
        if(prevj!=-1.0){
            double temp  = (curj+prevj)/2.0 * ((curi-previ))/1000.0;
            //cout << temp << "check\n";
            area+= temp;
        }
        previ = curi;
        prevj = curj;
    }
    cout << setprecision(10) << area;
    return 0;
}
