// Problem :- Find the smallest number in the array

// We will be given an array and we have to find the smallest element
//  int arr[5] = {4,3,7,8,1}  => ans = 1


                                                             
                                                             // approach1 :-
                                                // sort the arrays using inbuild c++ sort 
                                         // the first element will be smallest , hence ans  = arr[0];


// int arr[5] = {4,3,7,8,1} ;
// sort(arr,arr+5);
// ans = arr[0];
// return ans ;

// the time complexity of the above soution is :- O(nlogn) {For sorting the array}


                                                            //  approach 2
                                                         // triverse the array 
                                                        //  search for the smallest element

// int ans = INT_MAX
// for(int i = 0 ; i < 5 ; i++){
//     ans = min(arr[i],ans);
// }
// return ans ;

// The time complexity of the above approach is O(N);






