#include <bits/stdc++.h>
using namespace std ; 


string  cekKuat(string s){
    int len , Besar  = 0 , Kecil =0 , abjad , angka  =0 , special  = 0 , total = 0 ; 
    len = s.length();
    for(int i =0 ; i < len ; i++){
        if(s[i] >= 48 && s[i] <= 57){
            angka = 1 ; 
        } else if (s[i] >= 97 && s[i] <= 122){
            Kecil++ ; 
        } else if (s[i] >= 97 - 32  && s[i] <= 122 - 32){
            Besar++;;
        } else  if (s[i] =='_' || s[i] == '!' || s[i] == '?' ){
            special = 1;
        }
    }
    total = angka + Kecil  + Besar + special ; 
    abjad = Kecil+Besar ; 
   
    if( len >= 8 && angka >= 1 && Kecil >= 1 && Besar >= 1 && special >= 1 ){
        return "Kuat";
    } else if ( abjad>12){
        return "AgakKuat" ; 
    } else {
        return "Lemah" ; 
    }
}
int main(){
    string s ; 
    cin >> s ; 
    cekKuat(s);
   
    cout << cekKuat(s) << endl ;

}