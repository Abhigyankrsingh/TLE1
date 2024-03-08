#include<bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

signed main (){

    int n;
    cin >> n;
  
  int even=0 , odd=0, posi =0, neg =0;

    for(int i =0 ; i<n ;i++){
        int val;
        cin >> val;

        if (val %2 == 0){
            even++;
        } else {
            odd++;
        } if (val < 0){
            neg++;
        } else if ( val > 0){
             posi++;
        }
    }

    cout << "Even: " <<even<< endl;
    cout << "Odd: " <<odd<< endl;
    cout << "Positive: " <<posi<< endl;
    cout << "Negative: " <<neg<< endl;


}