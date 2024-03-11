#include<bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >>n;

    int val1 = n % 5;

    int val2 = 5 - (n%5);

    
    if(val1 > val2){
        cout << n + val2<<endl;
    } else {
        cout << n-val1 << endl;
    }
}