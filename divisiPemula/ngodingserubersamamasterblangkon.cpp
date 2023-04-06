#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int arr[3] , k ; 
    cin >> arr[0] >> arr[1] >> arr[2] >>  k ; 
    for(int i =0  ; i < 2 ; i++){
        for(int j = i+1 ; j < 3 ; j++){
            if(k == 0){
                if(arr[i] < arr[j]){
                    int tmp = arr[i]; 
                    arr[i] = arr[j];
                    arr[j] = tmp ;
                } 
            } else {
                if(arr[i] > arr[j]){
                    int tmp = arr[i]; 
                    arr[i] = arr[j];
                    arr[j] = tmp ;
                } 
            }
        }
    }
    cout << arr[0] << ' ' << arr[1] << ' '<< arr[2] << endl ;
}