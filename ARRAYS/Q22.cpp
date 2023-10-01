// Problem:- Finding Circular rotation of an array by K positions
// Array:
// 2 3 4 5 6 7 and k = 3 ;
// New Array:
// 5 6 7 2 3 4



#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[6] = {2, 3 ,4 , 5 , 6 , 7};
int k = 3 ;
int ans[6]={0};
for(int i = 0 ; i < 6 ; i++){
    ans[(i+k)%6] = arr[i];
}

for(auto i : ans){
    cout << i <<" " ;
}


    return 0 ;
}
