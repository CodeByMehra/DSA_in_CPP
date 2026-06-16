// Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

// Example 1
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
// Output: 7
// Explanation:
// The number 7 appears 5 times in the 9 sized array

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         for(int i=0; i<nums.size(); i++){
//             int count=0;
//             for(int j=0; j<nums.size(); j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//                 if(count>nums.size()/2){
//                     return nums[i];
//                 }
//             }
//         } return -1;
//     }
// };