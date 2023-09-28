

// Given an array Arr of size N, print second largest element from an array.
// Example:-
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.


                                                    //    Approach 1 :-Bruteforce
                                        // sort the array and find the second largest element
// arr[] = {12, 35, 1, 10, 34, 1}
// sort(arr,arr+n);
// return arr[n-2];

// The time complexity of the above solution is:-O(nlogn){sorting the array};

                                                   //  Approach 2:-Optimised
                                                // solve in single triversal

// int print2largest(int arr[], int n) {
// 	    int first = arr[0];
// 	    int second = -1 ;
// 	    for(int i = 0 ; i < n ; i++){
// 	        if(arr[i] > first){
// 	            second = first;
// 	            first = arr[i];
// 	        }else if(arr[i] < first && arr[i] > second){
// 	            second = arr[i];
// 	        }
// 	    }
// return second
// }

// the time complexity of the above solution is O(N);
	  
