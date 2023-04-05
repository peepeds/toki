#include <bits/stdc++.h>
using namespace std ; 

int main(){
    string s ; 
    int x  , i ; 
    cin >> s  >> x;
    for(i=0 ; i < s.length() ;i++){
        s[i]  = (s[i] +x -'a' ) % 26 +'a' ;
    }
    cout << s << endl ;
}