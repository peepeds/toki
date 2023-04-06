#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x , y , z ; 
    cin >> x  >> y >> z ; 
   

    if(x > 18  || y > 80  || z > 180){
       cout << 'X' << endl ;
       ;
    } else if (x> 14 || y > 60|| z > 120 ){
        cout << 'L' << endl ; 
    } else if ( x> 10  || y > 40  || x > 90){
        cout << 'M' << endl ;
    } else {
        cout << 'S' << endl ;
    }
}