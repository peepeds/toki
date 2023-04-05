#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x  ; 
    cin >> x ; 
    while(x % 2 ==0){
       x /= 2 ; 
    }
    if(x == 1){
        cout  << "ya\n" ;
    } else {
        cout << "bukan\n" ; 
    }
}