// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int count0=0;
//         int count1=0;
//         int count2=0;

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0){
//                 count0++;
//             }
//             else if(nums[i]==1){
//                 count1++;
//             }
//             else if(nums[i]==2){
//                 count2++;
//             }
//         }
//         for(int i=0;i<count0; i++){
//             nums[i]=0;
//         }
//         for(int i=count0;i<count0+count1; i++){
//             nums[i]=1;
//         }
//         for(int i=count0+count1;i<nums.size(); i++){
//             nums[i]=2;
//         }

//         return;
//     }
// };