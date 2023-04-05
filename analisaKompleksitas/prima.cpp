#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x , y  , tot = 0 ; 
    cin >> x ;
    for(int i =0 ; i < x ; i++){
        cin >> y ; 
        for(int j = 2 ; j < trunc(sqrt(y));j++){
            if(y%j==0){
                tot = 1 ; 
                break;
            }
        }
        if(y== 1  || tot == 1){
            cout <<"BUKAN\n" ;
            tot = 0 ; 
        } else{
            cout << "YA\n";
            tot = 0 ; 
        }
        
    }
}