// Problem :- Find the Equilibrium point of the array
// The equilibrium index of the array is the index , from which the left side sum and right side sum of the array is equal ;

// Approach :-
// Find the left and right sum of the each index 
// Find the total sum and create a left sum
// For every index track the left sum by adding that element to the left and right sum by total - leftSum ;
// The index on which we got the leftSum == rightSum , return that index ;


// Input: nums = [2,3,-1,8,4]
// Output: 3
// Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
// The sum of the numbers after index 3 is: 4 = 4


#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[5]={2,3,-1,8,4};
    int total = 0 ; 
    for(int i = 0 ; i < 5 ; i++){
        total += arr[i];
    }
    int left =0;
    for(int i = 0 ; i < 5 ; i++){
        int right = total - left - arr[i];
        if(left == right){
            cout<<"Equilibrium is at index "<< i << endl ;
            break ;
        }
        left += arr[i];
    }

    return 0;
}