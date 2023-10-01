// Problem :- Rotate the array by K Elements - Block Swap Algorithm

// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}
// Explanation: Rotate the array to right by 2 elements.

                    //    Approach :-
            // Create a temp array to store the answer 
            // We will use the % to find the remainder
            // As if we find the remainder of number between 1 - n , it will be from 0-(n-1)
            // It resemble expactly to the index in the array
            // Above is the intution of the Approach

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[5] = {1,2,3,4,5};
    int k = 2 ;
    int n = 5 ;
    int ans[5]={0};
    for(int i = 0 ; i < 5 ; i++){
        ans[(n+i-k)%n] = arr[i];
    }
    
    for(auto i : ans){
        cout<< i <<" ";
    }

    return 0;
}

























