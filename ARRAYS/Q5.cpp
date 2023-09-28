// Find the frequency of each element of the array


// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	 5  2
//         15  1
// Explanation: 10 occurs 3 times in the array
// 	      5 occurs 2 times in the array
//               15 occurs 1 time in the array



                                                        // Optimised Approach
                                                    // Using MAP(to store the count{frequency})
                                                    // Time Complexity:- O(N) and space complexity :- O(N)
#include<bits/stdc++.h>

using namespace std ;
int main(){
    int arr[10] = {4,5,3,7,4,6,1,5,3,7};
    unordered_map<int,int>mp ;
    for(auto i : arr){
          mp[i] ++ ;
    }

    for(auto i : mp){
        cout << i.first << " "<<i.second ;
    }

    return 0 ;
}