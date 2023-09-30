// Problem :- Find all the non-repeating elements in an array

// Approach:- using map
// Use map to track the count of the element 
// if the element count == 1 , print it ;

#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[8] = {1,1,2,3,4,4,5,2};

map<int,int>mp;
for(auto i : arr){
    mp[i] ++ ;

}

for(int i = 0 ; i < 8 ; i++){
    if(mp[arr[i]] == 1){
        cout<< arr[i]<<" ";
       
    }
}


    return 0 ;
}
