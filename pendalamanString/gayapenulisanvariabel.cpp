#include <bits/stdc++.h>
using namespace std ; 

int main(){
    string s ; 
    cin >> s; 
     
    for(int i =0 ; i < s.size() ;i++){
        if(s[i]=='_' ){
            s.erase(i , 1);
            s[i] = toupper(s[i]);

        } else if (isupper(s[i])){
            s.insert(i,"_");
            s[i+1] = tolower(s[i+1]);
            i++;
            
        }
    }
   
    cout << s << endl ; 
}