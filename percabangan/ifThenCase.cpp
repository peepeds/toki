#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int a ;
    cin >> a ; 
    if(a < 10){
        cout << "satuan\n" ; 
    } else if ( a>= 10 && a  < 100){
        cout << "puluhan\n" ; 
    } else if ( a >=  100 && a < 1000){
        cout <<"ratusan\n" ; 
    } else if ( a>= 1000 && a < 10000){
        cout <<"ribuan\n" ; 
    } else {
        cout <<"puluhribuan\n";
    }
}