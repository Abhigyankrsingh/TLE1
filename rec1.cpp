#include<bits/stdc++.h>
using namespace std;

void printton(int num , int n){
    if(num == n){
        cout << num << endl;
        return;
    }
    cout << num << endl;
    printton(num+1, n);
}

int main(){
    int n;
    cin >> n;
    int num = 1; // Define num here
    printton(num, n);
    return 0;
}
