// Q:Given a sorted array, remove the duplicates in-place so that each element appears only once. Return the new length of the array.

// Example:
// Input: [1, 1, 2]
// Output length: 2
// Modified array: [1, 2]

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector <int>& arr){
    int left = 0;
    int right= 1;
    
    while(right<arr.size()){
        if(arr[left]==arr[right]){
            arr.erase(arr.begin()+ right);
        }
        else if(arr[left]!=arr[right]){
            left++;
            right++;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}

int main() {

    vector <int> arr= {1,1,1,3,4,5,5,6};

    removeDuplicates(arr);

    return 0;
}