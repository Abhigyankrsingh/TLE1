#include<bits/stdc++.h>

using namespace std;

#define int long long

#define endl '\n'


signed main (){

    int n; 
    cin >>n;
    
    bool is_hard = false;

    for(int i =0; i < n;i++){
        int easy_or_not ;

        cin >> easy_or_not;

        if( easy_or_not == 1){
            is_hard = true;
        }
              
    }

    if(is_hard){
        cout << "HARD"<<endl;
    } else {
        cout << "EASY"<<endl;
    }

}