#include <bits/stdc++.h>
using namespace std ; 

int main(){
    string s ; 
    int len , i ; 
    cin >> s ; 
    len = s.length();
    for(i=0 ; i < len  ; i++){
        if(s[i] >= 'a' &&s[i] <= 'z'){
            s[i] += -32 ; 
        } else if (s[i] >= 'A' &&s[i] <= 'Z'){
            s[i] += 32 ; 
        }
    }
    cout << s << endl ;
}