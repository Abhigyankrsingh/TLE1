#include<bits/stdc++.h>
using namespace std;

#define int long long
#define end '\n'

int fibo(int n){
    if(n <= 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    
    return fibo(n - 1) + fibo(n - 2);
}

signed main(){
    int n;
    cin >> n;

    cout << fibo(n) << endl;
    return 0;
}
