// Problem :- Find the median of the given array 
// Median of a array is a number which representt the middleMost element of the array

// Input: [2,5,1,7]
// Output: 3.5

// Approach :- 
// Sort the given array
// The middle most element is the median of the array
// IF size of array is odd than it has single middle element 
// In case of even size array we have two middle element ,  we have to take the avarage of two middle element ;


#include<bits/stdc++.h>
using namespace std ;

int main(){
   int arr[6] = {4,6,5,1,2,3};

   int n = 6 ;

//    Step 1: - Sort the Array 
sort(arr,arr+6);

// since here size is even means it has two middle element n/2 and n/2 -1 ;

int sum = arr[3]+ arr[2];
float ans = sum / 2.f ;

cout<< "The median of the array is "<< ans<<endl ;


    return 0 ;
}