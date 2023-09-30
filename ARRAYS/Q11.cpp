// Remove duplicate element from the sorted array



// Appraoch:-
// Since the given array is sorted .
// We can track if the adjacent element are equal or not ;
// If they are not equal we can increase the counter used to track the number of non-duplicates




int removeDuplicates(vector<int> &arr, int n) {
	int count =0;
	int i = 0 ;
	while(i <=n-1){
		if(arr[i]!= arr[i+1]){
			count++ ;
		}
		i++ ;
	}
	return count;
}

// The time complexity of the solution is o(N){triversal};