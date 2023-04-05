#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x ,  tot = 0  ; 
    cin >> x ; 
    for(int i =0 ; i < x ; i++){
        for(int j =0 ; j <= i ; j++){
            cout << tot ;
            tot++ ; 
            if(tot ==10){
                tot = 0 ; 
            }
        }
        cout << endl ;
    }
}