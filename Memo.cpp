#include<bits/stdc++.h>

using namespace std;


#define int long long

#define endl '\n'

signed main(){

    int a, b,k;

    cin >> a >> b >>k;

    if((a % k ==0 ) && (b %k ==0)){
        cout << "Both";
    } else if ((a%k == 0) && (b%k != 0)){
        cout << "Memo";
    } else if ((a%k != 0) && (b %k == 0)){
        cout << "Momo";
    } else {
        cout << "No One";
    }
}