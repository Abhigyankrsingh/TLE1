#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

#define int long long


signed main(){

    int n;
    cin >> n;

    int a[n], b[n];

    for(int i =0; i<n;i++) cin >> a[i];

    for(int i =0; i<n;i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    for(int i =0; i<n;i++){
        if(a[i] != b[i]){
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes"<< endl;
}