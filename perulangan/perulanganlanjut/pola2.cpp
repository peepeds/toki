#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x ; 
    cin >> x ; 
    for(int i = 1 ; i <= x ; i++){
        for(int j = x ; j >= 1 ; j--){
            if(j > i){
                cout <<' ' ;
            } else {
                cout << "*";
            }
        }
        cout << endl ;
    }
}