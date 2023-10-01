// Problem :- Rotate array by K elements 
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]



    void rotate(vector<int>& nums, int k) {
       
        int n = nums.size();
       
        vector<int>temp(n) ;
        for(int i = 0; i< n ; i++){
            temp[(i+k)%n] = nums[i];
        }
         nums=temp;
    }


