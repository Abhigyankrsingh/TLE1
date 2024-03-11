#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[14];

    for(int i =0; i<14;i++){
        arr[i] = 0;
    }


    for(int i =0; i<5;i++ ){
          int n;
          cin >>n;

          arr[n]++;
    }
   
   bool cnt1 =0, cnt2 = 0;
   for(int i =0; i<14;i++){
    if(arr[i] == 2){
       cnt1 = 1;
    } if (arr[i] == 3){
        cnt2 = 1;
    }

   }

   if(cnt1 == 1 && cnt2 ==1){
     cout << "yes"<<endl;
   } else {
    cout << "no"<< endl;
   }

}
