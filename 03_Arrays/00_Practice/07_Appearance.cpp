// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
// Example :
// Input : nums = [1, 2, 2, 4, 3, 1, 4]
// Output : 3
// Explanation : The integer 3 has appeared only once.

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
        
//         for(int i=0; i<nums.size(); i++){
//             int count=0;
//             for(int j=0; j<nums.size(); j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count==1){
//                 return nums[i];
//             }

            
//         }
//         return -1;
//     }
// };