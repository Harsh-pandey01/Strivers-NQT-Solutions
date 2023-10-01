// Problem :- Search an Element in an Array 
// Input: array[] = {1,2,3,4,5} k=3                                                                                                                                                                                       Explanation: The answer is 2 because 3 is present at 2nd index.
// Explanation: The answer is 2 because 3 is present at 2nd index.


// Appraoch:-
// Try linear search :- Triverse the array and check weather the element is Present or not

#include<bits/stdc++.h>
using namespace std ;

int main(){

int arr[5] = {1,2,3,4,5};
int key = 3 ;


for(int i = 0 ; i < 5 ; i++){
    if(arr[i] == key){
        cout<<"The Element is Present at Index "<< i << endl;
        break ;
    }
}
    return 0 ;
}









