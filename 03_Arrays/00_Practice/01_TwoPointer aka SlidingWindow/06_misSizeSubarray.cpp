// Minimum Size Subarray Sum

// Problem:
// Given an array of positive integers and a target sum target, find the minimum length of a contiguous subarray whose sum is greater than or equal to target. If no such subarray exists, return 0.

// Example:
// Input: target = 7, nums = [2, 3, 1, 2, 4, 3]
// Output: 2

// Explanation:
// The subarray [4, 3] has sum 7 and length 2.

// Why it matters:
// This teaches the expand-and-shrink window idea.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void minSubArray(vector <int>& arr, int target){
    int left=0;
    int right = 1;

    int minLength = INT_MAX;
    while(right<arr.size()){
        if(arr[left]+arr[right]>=target){
            minLength = min(right-left+1, minLength);
        }
    }

}



int main() {

    vector <int> arr ={2, 3, 1, 2, 4, 3};
    int target=7;
    minSubArray(arr, target);

    return 0;
}