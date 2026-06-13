// Given an integer array, move all 0s to the end of the array while maintaining the relative order of the non-zero elements. Do it in-place.

// Example:
// Input: [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]

#include <iostream>
#include <vector>
using namespace std;

void pushZeros(vector <int>& arr){
    int left = 0;
    int right =1;

    while(right<arr.size()){
        if(arr[left]!=0 && arr[right]!=0){
            left++;
            right ++;                
        }
        else if(arr[right]==0 && arr[left]!=0){
            left++;
            right ++; 
        }
        else if(arr[left]==0 && arr[right]!=0){
            swap(arr[left],arr[right]);
            left++;
            right ++;  
        }
        else 
            right ++;  
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector <int> arr = {1,2,0,9,5,0,2,1};
    
    pushZeros(arr);
}