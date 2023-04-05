#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x ; 
    cin >> x ;
    for(int i = 1 ; i <= x ; i++){
        if(i == 42){
            cout << "ERROR\n" ; 
            break;
        } else if ( i % 10 == 0){
            continue;
        } else {
            cout << i << endl ; 
        }
    }
}