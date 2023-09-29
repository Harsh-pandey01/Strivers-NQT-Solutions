// Problem:- Sum of the element of the array

// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 15
// Explanation: Sum of all the elements is 1+2+3+4+5 = 15


                                        // approach
                                // using any loop , loop through the array
                                // Find the sum of the elements


#include<bits/stdtr1c++.h>
using namespace std ;

int main(){

    int arr[6] = {1,4,5,2,3,7};
    int ans = 0 ; 

    for(int i = 0 ; i < 6 ; i++){
        ans+= arr[i];
    }
     
     cout<<"The sum of the array element is "<< ans <<endl ;
 
    return 0 ;
}