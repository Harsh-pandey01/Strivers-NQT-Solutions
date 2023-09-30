// Problem :- Avarage of all element in an array 
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 3
// Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.


#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[6] = {1,2,1,1,5,1};

int sum = 0 ; 
for(auto i : arr){
    sum+= i ;
}

float ans = sum / 6.f ;

cout<<"The avarage of the array is"<< ans << endl ;


return 0;
}