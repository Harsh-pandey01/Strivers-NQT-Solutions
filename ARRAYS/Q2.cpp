// Problem :- Find the largets number in the array

// We will be given an array and we have to find the largest element
//  int arr[5] = {4,3,7,8,1}  => ans = 8


                                                             
                                                             // approach1 :-
                                                // sort the arrays using inbuild c++ sort 
                                         // the last element will be largest , hence ans  = arr[n-1] , where n is the size of array;


// int arr[5] = {4,3,7,8,1} ;
// sort(arr,arr+5);
// ans = arr[4];
// return ans ;

// the time complexity of the above soution is :- O(nlogn) {For sorting the array}


                                                            //  approach 2
                                                         // triverse the array 
                                                        //  search for the largest element

// int ans = INT_MIN
// for(int i = 0 ; i < 5 ; i++){
//     ans = max(arr[i],ans);
// }
// return ans ;

// The time complexity of the above approach is O(N);






