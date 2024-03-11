#include<iostream>

using namespace std;

int main(){

    int k; cin>>k;

    int hr = 21;

    if( k>= 60){

        hr = 22;

        k = k - 60;
    }

    cout << hr << ":";

    if(k < 10){
        cout << 0 << k;
    } else {
        cout << k ;
    }
}