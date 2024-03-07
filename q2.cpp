

#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

#define int long long int




signed main(){

   ios::sync_with_stdio(false); cin.tie(NULL);

   int a , b;

   cin >> a >> b;

   if((b % a == 0) || ( a % b == 0)){
    cout << "Multiples";
   } else {
     cout << "No Multiples";
   }

}