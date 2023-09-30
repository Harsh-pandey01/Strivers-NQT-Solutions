// Find all repeating element in an array

// Arr[] = [1,1,2,3,4,4,5,2]
// Output:
//  1,2,4


// Approach 1:- BruteForce
// Use a loop from 0 - n 
// Use inner loop from i -> n to track the count of the element 
// if count >1 print it

// for(int i = 0 ; i < arr.size() ; i++){
//     for(int j = i+1 ; j < arr.size() ; j ++){
//         if(arr[i] == arr[j]){
//             cout<< arr[i]<<" ";
//         }
//     }
// }

// The time complexity is O(n^2);


// Approach 2:- optimised using map
// Use map to track the count of the element 
// if the element count > 1 , print it ;

#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[8] = {1,1,2,3,4,4,5,2};

map<int,int>mp;
for(auto i : arr){
    mp[i] ++ ;

}

for(int i = 0 ; i < 8 ; i++){
    if(mp[arr[i]] > 1){
        cout<< arr[i]<<" ";
       mp[arr[i]] = 0 ;
    }
}


    return 0 ;
}
