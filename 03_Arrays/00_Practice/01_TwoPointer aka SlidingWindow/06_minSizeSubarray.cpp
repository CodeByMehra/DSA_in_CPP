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

int minSubArray(vector<int>& arr, int target) {
    int left = 0;
    int sum = 0;
    int minLength = INT_MAX;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum >= target) {
            minLength = min(minLength, right - left + 1);

            sum -= arr[left];
            left++;
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}



int main() {

    vector <int> arr ={2, 3, 1, 2, 4, 3};
    int target=7;
    minSubArray(arr, target);

    return 0;
}