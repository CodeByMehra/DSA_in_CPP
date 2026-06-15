// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.

// Example 1
// Input: nums = [1, 6, 2, 10, 3], target = 7
// Output: [0, 1]
// Explanation:
// nums[0] + nums[1] = 1 + 6 = 7

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> indices;
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 if (nums[i]+nums[j]==target){
//                     indices.push_back(i);
//                     indices.push_back(j);
//                 }
//             }
//         } return indices;
//     }
// };