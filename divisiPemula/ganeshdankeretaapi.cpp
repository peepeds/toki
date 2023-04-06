#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int a , i ;
    cin >> a ; 
    int arr[a] ; 
    for(int i =0 ; i <a ;i++){
        cin >> arr[i] ; 
    }
    for(int j = a-1 ; j>= 0 ; j--){
        cout << arr[j] ;
        if(j>0){
            cout  <<',' ;
        }
       
    }
    cout << endl ; 
}