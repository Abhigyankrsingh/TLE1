#include<bits/stdc++.h>

using namespace std;


#define endl '\n'

#define int long long

signed main(){

    int a , b;

    char s ;

    cin >> a >> s >> b;


    if(s == '>'){
          if(a > b){
            cout << "Right";
          } else{
            cout << "Wrong";
          }

    } else if (s == '<'){
          if (a <b){
            cout << "Right";
          } else {
            cout << "Wrong";
          }
    } else if (s == '='){
        if (a == b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
}