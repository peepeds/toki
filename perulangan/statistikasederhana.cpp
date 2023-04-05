#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int a ,  b, min = INT_MAX , max =  INT_MIN ;
    cin >> a ; 
    for(int i =0 ; i  < a ; i++){
        cin >> b ; 
        if(b > max){
            max = b ; 
        }
        if(b < min){
            min = b ; 
        }
    }
    cout  << max << ' ' << min << endl ;
}