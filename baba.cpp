#include<bits/stdc++.h>

using namespace std;

#define int long long 

#define endl '\n'


signed main(){

    int a , b, c, d;

    cin >> a >> b>> c >>d;

    if(a + b -c == d){
        cout << "YES";
    } else if (a+b * c == d){
        cout << "YES";
    } else if(a-b + c == d){
        cout << "YES";
    } else if(a-b * c == d){
        cout << "YES";
    } else if(a*b + c == d){
        cout << "YES";
    } else if (a*b - c == d){
        cout << "YES";
    } else {
        cout << "NO";
    }


}