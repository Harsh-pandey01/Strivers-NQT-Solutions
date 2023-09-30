// Remove Duplicates From an Unsorted Array

// Input: arr[]={2,3,1,9,3,1,3,9}
// Output:  {2,3,1,9}

// Approach :- 
// We will use map to track weather the element is visited once or not 
// If the element is not visited than print it 

#include<bits/stdc++.h>
using namespace std ;

int main(){

    int arr[9] = {4, 3, 9, 2, 4, 1, 10, 89, 34} ;
    int n = 9  ;

    map<int,bool>visited ;
    for(auto i: arr){
      if(!visited[i]){
        cout<< i << " ";
      }
    }


    return 0 ;
}

// The time complexity of the approach is O(n);
// Space complexity of the solution is O(n){map};